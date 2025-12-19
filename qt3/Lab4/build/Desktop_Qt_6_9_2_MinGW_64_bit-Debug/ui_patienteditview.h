/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_4;
    QSpinBox *dbSpinWeight;
    QLineEdit *dbEditName;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *dbEditID;
    QLabel *label_2;
    QComboBox *dbComboSex;
    QSpinBox *dbSpinHeight;
    QLineEdit *dbEditIDCard;
    QDateEdit *dbDateEditDOB;
    QLineEdit *dbEditMobile;
    QLineEdit *dbCreatedTimeStamp;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(381, 263);
        verticalLayout_2 = new QVBoxLayout(PatientEditView);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(-1, 0, 0, 0);
        label_5 = new QLabel(PatientEditView);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_7 = new QLabel(PatientEditView);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_6 = new QLabel(PatientEditView);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(PatientEditView);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_9 = new QLabel(PatientEditView);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        label_4 = new QLabel(PatientEditView);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        dbSpinWeight = new QSpinBox(PatientEditView);
        dbSpinWeight->setObjectName("dbSpinWeight");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbSpinWeight->sizePolicy().hasHeightForWidth());
        dbSpinWeight->setSizePolicy(sizePolicy);
        dbSpinWeight->setMaximumSize(QSize(1666666, 16777215));

        gridLayout->addWidget(dbSpinWeight, 6, 1, 2, 1);

        dbEditName = new QLineEdit(PatientEditView);
        dbEditName->setObjectName("dbEditName");

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        label_8 = new QLabel(PatientEditView);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 6, 0, 2, 1);

        label_3 = new QLabel(PatientEditView);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dbEditID = new QLineEdit(PatientEditView);
        dbEditID->setObjectName("dbEditID");

        gridLayout->addWidget(dbEditID, 0, 1, 1, 1);

        label_2 = new QLabel(PatientEditView);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        dbComboSex = new QComboBox(PatientEditView);
        dbComboSex->addItem(QString());
        dbComboSex->addItem(QString());
        dbComboSex->setObjectName("dbComboSex");

        gridLayout->addWidget(dbComboSex, 3, 1, 1, 1);

        dbSpinHeight = new QSpinBox(PatientEditView);
        dbSpinHeight->setObjectName("dbSpinHeight");

        gridLayout->addWidget(dbSpinHeight, 5, 1, 1, 1);

        dbEditIDCard = new QLineEdit(PatientEditView);
        dbEditIDCard->setObjectName("dbEditIDCard");

        gridLayout->addWidget(dbEditIDCard, 2, 1, 1, 1);

        dbDateEditDOB = new QDateEdit(PatientEditView);
        dbDateEditDOB->setObjectName("dbDateEditDOB");

        gridLayout->addWidget(dbDateEditDOB, 4, 1, 1, 1);

        dbEditMobile = new QLineEdit(PatientEditView);
        dbEditMobile->setObjectName("dbEditMobile");

        gridLayout->addWidget(dbEditMobile, 8, 1, 1, 1);

        dbCreatedTimeStamp = new QLineEdit(PatientEditView);
        dbCreatedTimeStamp->setObjectName("dbCreatedTimeStamp");

        gridLayout->addWidget(dbCreatedTimeStamp, 9, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(PatientEditView);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(PatientEditView);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        formLayout->setLayout(0, QFormLayout::ItemRole::LabelRole, verticalLayout);


        horizontalLayout->addLayout(formLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 34, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\347\274\226\350\276\221\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "ID:", nullptr));
        label_9->setText(QCoreApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215\357\274\232", nullptr));
        dbComboSex->setItemText(0, QCoreApplication::translate("PatientEditView", "\347\224\267", nullptr));
        dbComboSex->setItemText(1, QCoreApplication::translate("PatientEditView", "\345\245\263", nullptr));

        pushButton->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
