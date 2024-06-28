#include "subkriteria.h"
#include "ui_subkriteria.h"

subkriteria::subkriteria(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::subkriteria)
{
    ui->setupUi(this);
}

subkriteria::~subkriteria()
{
    delete ui;
}

subkriteria::subkriteria(QString nmSubKriteria, int idKriteria)
{
    this->nmSubKriteria = nmSubKriteria;
    this->idKriteria = idKriteria;
}

void subkriteria::setNmSubKriteria(QString nmSubKriteria)
{
    this->nmSubKriteria = nmSubKriteria;
}

QString subkriteria::getNmSubKriteria()
{
    return this->nmSubKriteria;
}

void subkriteria::setIdKriteria(int idKriteria)
{
    this->idKriteria = idKriteria;
}

int subkriteria::getIdKriteria()
{
    return this->idKriteria;
}

void subkriteria::on_pushButton_clicked()
{
    subkriteria s;

    s.setNmSubKriteria(ui->namaSubKriteriaLineEdit->text());
    s.setIdKriteria(ui->iDKriteriaLineEdit->text().toInt());

    qDebug()<<"Nama Sub Kriteria : "<<s.getNmSubKriteria()<<"\n";
    qDebug()<<"ID Kriteria : "<<s.getIdKriteria()<<"\n";
}

