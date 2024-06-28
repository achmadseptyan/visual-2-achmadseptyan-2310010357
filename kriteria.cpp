#include "kriteria.h"
#include "ui_kriteria.h"

kriteria::kriteria(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kriteria)
{
    ui->setupUi(this);
}

kriteria::~kriteria()
{
    delete ui;
}

kriteria::kriteria(QString nmKriteria, QString slug)
{
    this->nmKriteria = nmKriteria;
    this->slug = slug;
}

void kriteria::setNmKriteria(QString nmKriteria)
{
    this->nmKriteria = nmKriteria;
}

QString kriteria::getNmKriteria()
{
    return this->nmKriteria;
}

void kriteria::setSlug(QString slug)
{
    this->slug = slug;
}

QString kriteria::getSlug()
{
    return this->slug;
}

void kriteria::on_pushButton_clicked()
{
    kriteria k;

    k.setNmKriteria(ui->namaKriteriaLineEdit->text());
    k.setSlug(ui->slugLineEdit->text());

    qDebug()<<"Nama Kriteria : "<<k.getNmKriteria()<<"\n";
    qDebug()<<"Slug : "<<k.getSlug()<<"\n";
}

