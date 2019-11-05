/********************************************************************************
** Form generated from reading UI file 'DialogSizeScatter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIZESCATTER_H
#define UI_DIALOGSIZESCATTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSizeScatter
{
public:
    QPushButton *cancelButton;
    QPushButton *applyButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpinBox *xSpinBox;
    QSpinBox *ySpinBox;
    QSpinBox *zSpinBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSlider *rangeSlider;
    QLCDNumber *rangeNumber;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DialogSizeScatter)
    {
        if (DialogSizeScatter->objectName().isEmpty())
            DialogSizeScatter->setObjectName(QString::fromUtf8("DialogSizeScatter"));
        DialogSizeScatter->resize(240, 320);
        cancelButton = new QPushButton(DialogSizeScatter);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(140, 280, 93, 28));
        applyButton = new QPushButton(DialogSizeScatter);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setGeometry(QRect(10, 280, 93, 28));
        verticalLayoutWidget = new QWidget(DialogSizeScatter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 10, 221, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        xSpinBox = new QSpinBox(verticalLayoutWidget);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setMinimum(1);

        gridLayout->addWidget(xSpinBox, 2, 1, 1, 1);

        ySpinBox = new QSpinBox(verticalLayoutWidget);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setMinimum(1);

        gridLayout->addWidget(ySpinBox, 1, 1, 1, 1);

        zSpinBox = new QSpinBox(verticalLayoutWidget);
        zSpinBox->setObjectName(QString::fromUtf8("zSpinBox"));
        zSpinBox->setWrapping(false);
        zSpinBox->setMinimum(1);

        gridLayout->addWidget(zSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rangeSlider = new QSlider(verticalLayoutWidget);
        rangeSlider->setObjectName(QString::fromUtf8("rangeSlider"));
        rangeSlider->setMinimum(1);
        rangeSlider->setMaximum(200);
        rangeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(rangeSlider);

        rangeNumber = new QLCDNumber(verticalLayoutWidget);
        rangeNumber->setObjectName(QString::fromUtf8("rangeNumber"));

        horizontalLayout->addWidget(rangeNumber);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(DialogSizeScatter);
        QObject::connect(rangeSlider, SIGNAL(valueChanged(int)), rangeNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(DialogSizeScatter);
    } // setupUi

    void retranslateUi(QDialog *DialogSizeScatter)
    {
        DialogSizeScatter->setWindowTitle(QApplication::translate("DialogSizeScatter", "DialogSizeScatter", nullptr));
        cancelButton->setText(QApplication::translate("DialogSizeScatter", "Cancel", nullptr));
        applyButton->setText(QApplication::translate("DialogSizeScatter", "Apply", nullptr));
        label_2->setText(QApplication::translate("DialogSizeScatter", "X", nullptr));
        label_3->setText(QApplication::translate("DialogSizeScatter", "Y", nullptr));
        label->setText(QApplication::translate("DialogSizeScatter", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSizeScatter: public Ui_DialogSizeScatter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIZESCATTER_H
