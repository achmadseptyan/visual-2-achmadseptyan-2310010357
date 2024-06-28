#ifndef SUBKRITERIA_H
#define SUBKRITERIA_H

#include <QDialog>
#include <QString>

namespace Ui {
class subkriteria;
}

class subkriteria : public QDialog
{
    Q_OBJECT

public:
    explicit subkriteria(QWidget *parent = nullptr);
    ~subkriteria();

    subkriteria(QString nmSubKriteria, int idKriteria);

    void setNmSubKriteria(QString nmSubKriteria);
    QString getNmSubKriteria();

    void setIdKriteria(int idKriteria);
    int getIdKriteria();

private slots:
    void on_pushButton_clicked();

private:
    Ui::subkriteria *ui;

    QString nmSubKriteria;
    int idKriteria;
};

#endif // SUBKRITERIA_H
