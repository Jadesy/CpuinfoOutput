import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import CpuinfoAnalysis 1.0

ApplicationWindow {
    title: qsTr("Cpu Information")
    width: 640
    height: 480
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    MainForm {
        //anchors.fill: parent
        anchors.right: parent.right
     //   anchors.baseline:
        button1.onClicked:
        {
            cpuinfo.setNo(0);
            output.text=cpuinfo.getInfo();
        }
        button2.onClicked:
        {
            cpuinfo.setNo(1);
            output.text=cpuinfo.getInfo();
        }
    }

    Text {
        id: output
        anchors.fill: parent
        anchors.leftMargin: 10
        anchors.topMargin: 10
    }
    CpuinfoAnalysis{
        id:cpuinfo
    }
}
