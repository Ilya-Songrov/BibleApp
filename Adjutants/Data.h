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
const QString fileContent_New_Testament_Photos      = prefix + "/Resource/Content/Content_New_Testament_Photos.json";
const QString fileContent_Old_Testament_Photos      = prefix + "/Resource/Content/Content_Old_Testament_Photos.json";
const QString dirContent_Old_Testament_Photos       = prefix + "/Resource/Content/Old_Testament_Photos/";
const QString dirContent_New_Testament_Photos       = prefix + "/Resource/Content/New_Testament_Photos/";

const QString fileContent_Old_Testament_Info_GETBIBLE        = prefix + "/Resource/Content/Content_Old_Testament_Info_GETBIBLE.json";
const QString fileContent_New_Testament_Info_GETBIBLE        = prefix + "/Resource/Content/Content_New_Testament_Info_GETBIBLE.json";
const QString fileContent_Old_Testament_ArrayBooks_GETBIBLE  = prefix + "/Resource/Content/Content_Old_Testament_ArrayBooks_GETBIBLE.json";
const QString fileContent_New_Testament_ArrayBooks_GETBIBLE  = prefix + "/Resource/Content/Content_New_Testament_ArrayBooks_GETBIBLE.json";
const QString dirContent_Old_Testament_JsonText_GETBIBLE     = prefix + "/Resource/Content/Old_Testament_JsonText_GETBIBLE/";
const QString dirContent_New_Testament_JsonText_GETBIBLE     = prefix + "/Resource/Content/New_Testament_JsonText_GETBIBLE/";
}



#endif // DATA_H
