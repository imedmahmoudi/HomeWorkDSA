#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

//Function to write to  file
 void Write(QString Filename)
 {
    QFile mFile (Filename);
    if (!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug()<<"couldnot open file for writing";
        return;
    }
    QTextStream out (&mFile);
    out<< "84.2700 84.2600 84.0600 84.6800 84.8299 83.6350 84.3200 84.3300 84.3500 84.9172 84.8400 83.6600 84.1600 84.0400 84.0400 84.5900 84.6050 83.5600 84.2000 84.1000 84.2700 84.8300 84.6500 83.6100  46.96263 52.8485 67.1710 42.3433 73.0278 25.4822";
    mFile.flush();
    mFile.close();
 }

 //Function to read from file
  void Read (QString Filename)
  {
      QFile mFile (Filename);
      if (!mFile.open(QFile::ReadOnly | QFile::Text))
      {
          qDebug()<<"couldnot open file for reading";
          return;
      }
      QTextStream in (&mFile);
      QString mText = in.readAll();
      qDebug()<< mText ;

      mFile.close();
  }

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString mFilename= "C:\imed";

          Write (mFilename);
          Read (mFilename);
    return a.exec();
}
