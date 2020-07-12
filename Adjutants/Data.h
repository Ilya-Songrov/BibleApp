#ifndef DATA_H
#define DATA_H

#include <QObject>


//#define BIBLE_SIMPLE
#define BIBLE_HARD

namespace BibleEnums
{
Q_NAMESPACE         // required for meta object creation
enum Slide {
    Title = 0,
    GridBooks,
    GridChapters,
    ListVerses,
    Search,
    Error,
};
Q_ENUM_NS(Slide)  // register the enum in meta object data

enum Testament{
    Old_Testament = 39,
    New_Testament = 27,
};
Q_ENUM_NS(Testament)  // register the enum in meta object data
}

namespace Path {
#ifdef QT_DEBUG
const QString prefix = "../BibleApp";
#else
const QString prefix = ":/Content";
#endif
const QString allBibleJsonText_GETBIBLE = prefix + "/TextBible_OfflineSources/Getbible_Net/Russian__Synodal_Translation_(1876)__synodal__LTR(getbible.net).txt";
const QString allBibleJsonText_BODRUK   = prefix + "/TextBible_OfflineSources/Bible_XML_and_JSON/bible-master/json/ru_synodal.json";
const QString allBibleJsonText_KAZAKOV  = prefix + "/TextBible_OfflineSources/Usfm2json/usfm2json-master/json/rst.json";
const QString tempJson                  = prefix + "/Resource/Content/temp.json";

const QString fileContent_New_Testament_Photos      = prefix + "/Resource/Content/Content_New_Testament_Photos.json";
const QString fileContent_Old_Testament_Photos      = prefix + "/Resource/Content/Content_Old_Testament_Photos.json";
const QString dirContent_Old_Testament_Photos       = prefix + "/Resource/Content/Old_Testament_Photos/";
const QString dirContent_New_Testament_Photos       = prefix + "/Resource/Content/New_Testament_Photos/";

const QString fileContent_New_Testament_Info_BODRUK        = prefix + "/Resource/Content/Content_New_Testament_Info_BODRUK.json";
const QString fileContent_Old_Testament_Info_BODRUK        = prefix + "/Resource/Content/Content_Old_Testament_Info_BODRUK.json";
const QString fileContent_Old_Testament_ArrayBooks_BODRUK  = prefix + "/Resource/Content/Content_Old_Testament_ArrayBooks_BODRUK.json";
const QString fileContent_New_Testament_ArrayBooks_BODRUK  = prefix + "/Resource/Content/Content_New_Testament_ArrayBooks_BODRUK.json";
const QString dirContent_Old_Testament_JsonText_BODRUK     = prefix + "/Resource/Content/Old_Testament_JsonText_BODRUK/";
const QString dirContent_New_Testament_JsonText_BODRUK     = prefix + "/Resource/Content/New_Testament_JsonText_BODRUK/";

const QString fileContent_Old_Testament_Info_KAZAKOV        = prefix + "/Resource/Content/Content_Old_Testament_Info_KAZAKOV.json";
const QString fileContent_New_Testament_Info_KAZAKOV        = prefix + "/Resource/Content/Content_New_Testament_Info_KAZAKOV.json";
const QString fileContent_Old_Testament_ArrayBooks_KAZAKOV  = prefix + "/Resource/Content/Content_Old_Testament_ArrayBooks_KAZAKOV.json";
const QString fileContent_New_Testament_ArrayBooks_KAZAKOV  = prefix + "/Resource/Content/Content_New_Testament_ArrayBooks_KAZAKOV.json";
const QString dirContent_Old_Testament_JsonText_KAZAKOV     = prefix + "/Resource/Content/Old_Testament_JsonText_KAZAKOV/";
const QString dirContent_New_Testament_JsonText_KAZAKOV     = prefix + "/Resource/Content/New_Testament_JsonText_KAZAKOV/";

const QString fileContent_Old_Testament_Info_GETBIBLE        = prefix + "/Resource/Content/Content_Old_Testament_Info_GETBIBLE.json";
const QString fileContent_New_Testament_Info_GETBIBLE        = prefix + "/Resource/Content/Content_New_Testament_Info_GETBIBLE.json";
const QString fileContent_Old_Testament_ArrayBooks_GETBIBLE  = prefix + "/Resource/Content/Content_Old_Testament_ArrayBooks_GETBIBLE.json";
const QString fileContent_New_Testament_ArrayBooks_GETBIBLE  = prefix + "/Resource/Content/Content_New_Testament_ArrayBooks_GETBIBLE.json";
const QString dirContent_Old_Testament_JsonText_GETBIBLE     = prefix + "/Resource/Content/Old_Testament_JsonText_GETBIBLE/";
const QString dirContent_New_Testament_JsonText_GETBIBLE     = prefix + "/Resource/Content/New_Testament_JsonText_GETBIBLE/";

const QString fileContent_New_Testament_Info_ONLINE        = prefix + "/Resource/Content/Content_New_Testament_Info_ONLINE.json";
const QString fileContent_Old_Testament_Info_ONLINE        = prefix + "/Resource/Content/Content_Old_Testament_Info_ONLINE.json";
const QString fileContent_Old_Testament_ArrayBooks_ONLINE  = prefix + "/Resource/Content/Content_Old_Testament_ArrayBooks_ONLINE.json";
const QString fileContent_New_Testament_ArrayBooks_ONLINE  = prefix + "/Resource/Content/Content_New_Testament_ArrayBooks_ONLINE.json";
}



#endif // DATA_H
