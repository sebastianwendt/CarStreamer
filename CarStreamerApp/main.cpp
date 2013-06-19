#include <QCoreApplication>
#include <CConnMgrBT.h>

CConnMgrBT gConnMgrBt;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
