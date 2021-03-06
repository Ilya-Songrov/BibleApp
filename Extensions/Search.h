#ifndef SEARCH_H
#define SEARCH_H

#include <QObject>

#include "Data.h"
#include "FileWorker.h"
#include "Bible.h"

struct Result {
    QString book            { "" };
    int chapter             { 0 };
    int verseBegin          { 0 };
    int verseEnd            { 0 };
    QString textRangeVerses { "" };
};

struct ListOfResult {
    QVector <Result> vectResult;
    QString textQuery { "" };

    explicit ListOfResult(const QString &textQuery);

    void addResult(const Result &result);
    void addResult(const QString &book, const int chapter, const int verseBegin, const int verseEnd,
                   const QString &textRangeVerses);
    void printResult(bool showTextQuery = false);
};

class Search : public QObject
{
    Q_OBJECT
    const Bible *bible;
    QJsonDocument doc;
public:
    enum RangeSearch {
        Verse,
        Chapter,
    };
    explicit Search(const Bible *bible, QObject *parent = nullptr);

    QStringList getListVerses();
    ListOfResult find(const QString &textQuery, RangeSearch range = RangeSearch::Verse);

private:
    void searhVerseRange(ListOfResult &list, const QString &textQuery);
    void searhVerseRange(ListOfResult &list, const QString &nameBook, const QString &textQuery);
    void searhChapterRange(ListOfResult &list, const QString &textQuery);

    int findTextQueryIntoChapter(const int pos, Result &resutl, const QString &textQuery, const QJsonArray &arrOneChapter);
    QString fillTextRangeVerses(const QJsonArray &arrOneChapter, const int verseBegin, const int verseEnd);
};

#endif // SEARCH_H
