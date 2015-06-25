#ifndef CPUINFOANALYSIS_H
#define CPUINFOANALYSIS_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QVector>

using namespace std;

class CpuinfoAnalysis:public QObject
{
    Q_OBJECT
    Q_PROPERTY(int no READ getNo WRITE setNo)
    Q_PROPERTY(QString info READ getInfo)

public:
    explicit CpuinfoAnalysis(QObject *parent = 0);
    Q_INVOKABLE QString getInfo() const;
    Q_INVOKABLE void setNo(int iNumber);
    Q_INVOKABLE int getNo() const;
private:
    QVector<QString> m_Info;
    int m_number;
};

#endif // CPUINFOANALYSIS_H
