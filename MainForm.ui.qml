import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 640
    height: 480

    //property alias button3: button3
    property alias button2: button2
    property alias button1: button1

    RowLayout {
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 40
        anchors.leftMargin: -10

        Button {
            id: button1
            text: qsTr("Processor 1")
        }

        Button {
            id: button2
            text: qsTr("Processor 2")
        }
    }
}
