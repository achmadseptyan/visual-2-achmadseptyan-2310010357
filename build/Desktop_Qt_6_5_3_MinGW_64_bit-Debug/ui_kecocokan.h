/********************************************************************************
** Form generated from reading UI file 'kecocokan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KECOCOKAN_H
#define UI_KECOCOKAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kecocokan
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *iDAlternatifLabel;
    QLineEdit *iDAlternatifLineEdit;
    QLabel *skorLabel;
    QLineEdit *skorLineEdit;
    QLabel *persentaseLabel;
    QLineEdit *persentaseLineEdit;
    QTableView *tableView;

    void setupUi(QDialog *kecocokan)
    {
        if (kecocokan->objectName().isEmpty())
            kecocokan->setObjectName("kecocokan");
        kecocokan->resize(350, 300);
        pushButton = new QPushButton(kecocokan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 120, 80, 21));
        formLayoutWidget = new QWidget(kecocokan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(80, 10, 191, 102));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        iDAlternatifLabel = new QLabel(formLayoutWidget);
        iDAlternatifLabel->setObjectName("iDAlternatifLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iDAlternatifLabel);

        iDAlternatifLineEdit = new QLineEdit(formLayoutWidget);
        iDAlternatifLineEdit->setObjectName("iDAlternatifLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iDAlternatifLineEdit);

        skorLabel = new QLabel(formLayoutWidget);
        skorLabel->setObjectName("skorLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, skorLabel);

        skorLineEdit = new QLineEdit(formLayoutWidget);
        skorLineEdit->setObjectName("skorLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, skorLineEdit);

        persentaseLabel = new QLabel(formLayoutWidget);
        persentaseLabel->setObjectName("persentaseLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, persentaseLabel);

        persentaseLineEdit = new QLineEdit(formLayoutWidget);
        persentaseLineEdit->setObjectName("persentaseLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, persentaseLineEdit);

        tableView = new QTableView(kecocokan);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 150, 331, 141));

        retranslateUi(kecocokan);

        QMetaObject::connectSlotsByName(kecocokan);
    } // setupUi

    void retranslateUi(QDialog *kecocokan)
    {
        kecocokan->setWindowTitle(QCoreApplication::translate("kecocokan", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("kecocokan", "Simpan", nullptr));
        iDAlternatifLabel->setText(QCoreApplication::translate("kecocokan", "ID Alternatif", nullptr));
        skorLabel->setText(QCoreApplication::translate("kecocokan", "Skor", nullptr));
        persentaseLabel->setText(QCoreApplication::translate("kecocokan", "Persentase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kecocokan: public Ui_kecocokan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KECOCOKAN_H
