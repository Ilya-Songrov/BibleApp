import QtQuick 2.0

import "Components" as MyComonents
import ModelViewQml 1.0
import bible.namespace 1.0

Item {
    width: parent.width
    height: parent.height
    anchors.centerIn: parent.Center

    property string headerNameBookString: ""

    MyComonents.QmlComponentListViewVerses{
        id: listVersesID
        anchors.fill: parent
        anchors.leftMargin: Math.min(screenWidth, screenHeight)  * 0.02 /* finish at the end */
        anchors.rightMargin: Math.min(screenWidth, screenHeight)  * 0.02 /* finish at the end */
        listModelObj: ModelView {
            list: listVersesQml
        }
        headerNameBook: headerNameBookString
        onFooterClicked: currentSlide = BibleEnums.GridChapters
    }
}
