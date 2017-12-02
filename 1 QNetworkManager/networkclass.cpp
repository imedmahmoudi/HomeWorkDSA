#include "networkclass.h"
#include <QDebug>
NetworkClass::NetworkClass(QObject *parent) :
    QObject(parent)
{
  connect(qnam,SIGNAL(finished(QNetworkReply*)),this,SLOT(readRead(QNetworkReply*)));
  //connecting signal slots
}

void NetworkClass::makeRequest(QString endpointRequest)
{
    qnam->get(QNetworkRequest(QUrl(endpointRequest)));

}
void NetworkClass::readRead(QNetworkReply*reply){
QByteArray myData;
myData = reply->readAll();
emit(dataReadyRead(myData));

}
