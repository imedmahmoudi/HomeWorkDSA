#ifndef NETWORKCLASS_H
#define NETWORKCLASS_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>

#include <QNetworkReply>

class NetworkClass : public QObject
{
    Q_OBJECT
public:
    explicit NetworkClass(QObject *parent = nullptr);
void makeRequest(QString endpointRequest);

signals:
void dataReadyRead(QByteArray);

public slots:
void readRead(QNetworkReply*reply);

private:

QNetworkAccessManager*qnam = new QNetworkAccessManager(this); //allocating memory


};


#endif // NETWORKCLASS_H
