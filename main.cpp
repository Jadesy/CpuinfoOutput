#include <QApplication>
#include <QQmlApplicationEngine>
#include "CPlus/cpuinfoanalysis.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<CpuinfoAnalysis>("CpuinfoAnalysis", 1, 0, "CpuinfoAnalysis");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
