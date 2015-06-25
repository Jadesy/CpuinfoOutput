#include "cpuinfoanalysis.h"
#include <QFile>

using namespace std;

CpuinfoAnalysis::CpuinfoAnalysis(QObject *parent): QObject(parent),m_number(0)
{
    QString info;
    QFile infoFile("../resource/cpuinfo");

    if(!infoFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    info=infoFile.readAll();
    const QString proc="processor";
    int m=0;
    int n=0;
    QString subInfo;
    m=info.indexOf(proc,0);
    while(m>=0){
        n=info.indexOf(proc,(m+9));
        if(n<0){
            subInfo=info.mid(m);
        }
        else{
            subInfo=info.mid(m,(n-1));
        }
        m=n;
        m_Info.push_back(subInfo);
    }
}

QString CpuinfoAnalysis::getInfo() const
{
    return m_Info[m_number];
}
int CpuinfoAnalysis::getNo() const
{
    return m_number;
}
void CpuinfoAnalysis::setNo(int iNumber)
{
    m_number=iNumber;
}
