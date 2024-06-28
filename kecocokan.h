#ifndef KECOCOKAN_H
#define KECOCOKAN_H

#include <QDialog>
#include <QString>

namespace Ui {
class kecocokan;
}

class kecocokan : public QDialog
{
    Q_OBJECT

public:
    explicit kecocokan(QWidget *parent = nullptr);
    ~kecocokan();

    kecocokan(int idAlternatif, int score, QString percentage);

    void setIdAlternatif(int idAlternatif);
    int getIdAlternatif();

    void setScore(int score);
    int getScore();

    void setPercentage(QString percentage);
    QString getPercentage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::kecocokan *ui;

    int idAlternatif, score;
    QString percentage;
};

#endif // KECOCOKAN_H
