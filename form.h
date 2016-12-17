#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QFile>
#include <QByteArray>
#include <QIODevice>
#include <QDebug>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);

    ~Form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form *ui;
    QHash<QString,QString> hash;
    QHash<QString,QString>::iterator it=hash.begin();

};

#endif // FORM_H