/********************************************************************************
** Form generated from reading UI file 'movedock.ui'
**
** Created: Fri Nov 19 12:02:08 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEDOCK_H
#define UI_MOVEDOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveDock
{
public:
    QWidget *dockWidgetContents;
    QFrame *touchFrame;
    QGroupBox *groupBoxAction;
    QComboBox *comboBoxAction;

    void setupUi(QDockWidget *MoveDock)
    {
        if (MoveDock->objectName().isEmpty())
            MoveDock->setObjectName(QString::fromUtf8("MoveDock"));
        MoveDock->resize(200, 232);
        MoveDock->setMinimumSize(QSize(200, 0));
        MoveDock->setFeatures(QDockWidget::DockWidgetFeatureMask);
        MoveDock->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetContents->setGeometry(QRect(20, 0, 180, 232));
        touchFrame = new QFrame(dockWidgetContents);
        touchFrame->setObjectName(QString::fromUtf8("touchFrame"));
        touchFrame->setGeometry(QRect(0, 10, 171, 151));
        touchFrame->setAutoFillBackground(false);
        touchFrame->setFrameShape(QFrame::StyledPanel);
        touchFrame->setFrameShadow(QFrame::Sunken);
        groupBoxAction = new QGroupBox(dockWidgetContents);
        groupBoxAction->setObjectName(QString::fromUtf8("groupBoxAction"));
        groupBoxAction->setGeometry(QRect(0, 170, 171, 51));
        comboBoxAction = new QComboBox(groupBoxAction);
        comboBoxAction->setObjectName(QString::fromUtf8("comboBoxAction"));
        comboBoxAction->setGeometry(QRect(10, 20, 151, 22));
        MoveDock->setWidget(dockWidgetContents);

        retranslateUi(MoveDock);

        QMetaObject::connectSlotsByName(MoveDock);
    } // setupUi

    void retranslateUi(QDockWidget *MoveDock)
    {
        MoveDock->setWindowTitle(QApplication::translate("MoveDock", "Rotate Object", 0, QApplication::UnicodeUTF8));
        groupBoxAction->setTitle(QApplication::translate("MoveDock", "Action", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MoveDock: public Ui_MoveDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEDOCK_H
