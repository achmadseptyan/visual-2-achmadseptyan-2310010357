#include "kecocokan.h"
#include "ui_kecocokan.h"

kecocokan::kecocokan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kecocokan)
{
    ui->setupUi(this);
}

kecocokan::~kecocokan()
{
    delete ui;
}

kecocokan::kecocokan(int idAlternatif, int score, QString percentage)
{
    this->idAlternatif = idAlternatif;
    this->score = score;
    this->percentage = percentage;
}

void kecocokan::setIdAlternatif(int idAlternatif)
{
    this->idAlternatif = idAlternatif;
}

int kecocokan::getIdAlternatif()
{
    return this->idAlternatif;
}

void kecocokan::setScore(int score)
{
    this->score = score;
}

int kecocokan::getScore()
{
    return this->score;
}

void kecocokan::setPercentage(QString percentage)
{
    this->percentage = percentage;
}

QString kecocokan::getPercentage()
{
    return this->percentage;
}

void kecocokan::on_pushButton_clicked()
{
    kecocokan c;

    c.setIdAlternatif(ui->iDAlternatifLineEdit->text().toInt());
    c.setScore(ui->skorLineEdit->text().toInt());
    c.setPercentage(ui->persentaseLineEdit->text());

    qDebug()<<"ID Alternatif : "<<c.getIdAlternatif()<<"\n";
    qDebug()<<"Score : "<<c.getScore()<<"\n";
    qDebug()<<"Percentage : "<<c.getPercentage()<<"\n";
}

