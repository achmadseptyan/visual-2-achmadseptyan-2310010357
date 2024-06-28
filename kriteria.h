#ifndef KRITERIA_H
#define KRITERIA_H

#include <QDialog>
#include <QString>

namespace Ui {
class kriteria;
}

class kriteria : public QDialog
{
    Q_OBJECT

public:
    explicit kriteria(QWidget *parent = nullptr);
    ~kriteria();

    kriteria(QString nmKriteria, QString slug);

    void setNmKriteria(QString nmKriteria);
    QString getNmKriteria();

    void setSlug(QString slug);
    QString getSlug();

private slots:
    void on_pushButton_clicked();

private:
    Ui::kriteria *ui;

    QString nmKriteria, slug;
};

#endif // KRITERIA_H
