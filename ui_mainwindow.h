/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSelectFileSel;
    QAction *actionFromGameSel;
    QAction *actionSelectFileLight;
    QAction *actionFromGameLight;
    QAction *actionSelectFileQst;
    QAction *actionSelectFileBack;
    QAction *actionFromGameQst;
    QAction *actionFromGameBack;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *modInfoTab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *modNameEdit;
    QLineEdit *modAuthorEdit;
    QLineEdit *modVersionEdit;
    QLineEdit *modGuidEdit;
    QPushButton *guidButton;
    QLabel *label_5;
    QLineEdit *stageNameEdit;
    QComboBox *stageNameLangComboBox;
    QPushButton *stageNameCopyButton;
    QPushButton *guidCopyButton;
    QWidget *filesTab;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *stageFilesEdit;
    QLineEdit *lightingEdit;
    QLineEdit *selPortEdit;
    QLineEdit *questPortEdit;
    QLineEdit *selBackEdit;
    QLineEdit *addDataEdit;
    QLabel *label_12;
    QPushButton *stageFilesButton;
    QToolButton *lightingButton;
    QToolButton *selPortButton;
    QToolButton *questPortButton;
    QToolButton *selBackButton;
    QPushButton *addDataButton;
    QWidget *defTab;
    QPushButton *defCopyButton;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *codeEdit;
    QLineEdit *bgmEdit;
    QLineEdit *eveEdit;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *dirEdit;
    QLineEdit *f6Edit;
    QLabel *label_18;
    QLineEdit *str4Edit;
    QPushButton *bgmButton;
    QLabel *label_19;
    QLineEdit *seEdit;
    QPushButton *gate1Button;
    QPushButton *gate2Button;
    QPushButton *gate3Button;
    QPushButton *gate4Button;
    QPushButton *gate5Button;
    QPushButton *gate6Button;
    QPushButton *gate7Button;
    QLineEdit *unk5Edit;
    QLabel *label_23;
    QPushButton *gate8Button;
    QPushButton *gate9Button;
    QPushButton *bgmCustomButton;
    QPushButton *gbb1Button;
    QPushButton *gbb2Button;
    QPushButton *gbb3Button;
    QPushButton *gbb4Button;
    QPushButton *gbb5Button;
    QPushButton *gbb6Button;
    QPushButton *gbb7Button;
    QPushButton *gbb8Button;
    QPushButton *gbb9Button;
    QWidget *slotTab;
    QCheckBox *slotsCheck;
    QCheckBox *slotsLocalCheck;
    QWidget *patchTab;
    QLabel *label_20;
    QLineEdit *farClipEdit;
    QLabel *label_24;
    QLineEdit *limitEdit;
    QWidget *vfxTab;
    QLabel *label_21;
    QPushButton *vfxCopyButton;
    QLineEdit *vfxBGEdit;
    QLabel *label_22;
    QLineEdit *vfxStageEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 540);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSelectFileSel = new QAction(MainWindow);
        actionSelectFileSel->setObjectName(QStringLiteral("actionSelectFileSel"));
        actionFromGameSel = new QAction(MainWindow);
        actionFromGameSel->setObjectName(QStringLiteral("actionFromGameSel"));
        actionSelectFileLight = new QAction(MainWindow);
        actionSelectFileLight->setObjectName(QStringLiteral("actionSelectFileLight"));
        actionFromGameLight = new QAction(MainWindow);
        actionFromGameLight->setObjectName(QStringLiteral("actionFromGameLight"));
        actionSelectFileQst = new QAction(MainWindow);
        actionSelectFileQst->setObjectName(QStringLiteral("actionSelectFileQst"));
        actionSelectFileBack = new QAction(MainWindow);
        actionSelectFileBack->setObjectName(QStringLiteral("actionSelectFileBack"));
        actionFromGameQst = new QAction(MainWindow);
        actionFromGameQst->setObjectName(QStringLiteral("actionFromGameQst"));
        actionFromGameBack = new QAction(MainWindow);
        actionFromGameBack->setObjectName(QStringLiteral("actionFromGameBack"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 621, 440));
        modInfoTab = new QWidget();
        modInfoTab->setObjectName(QStringLiteral("modInfoTab"));
        modInfoTab->setAutoFillBackground(true);
        label = new QLabel(modInfoTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 20, 47, 13));
        label_2 = new QLabel(modInfoTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(22, 60, 47, 13));
        label_3 = new QLabel(modInfoTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 47, 13));
        label_4 = new QLabel(modInfoTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(31, 140, 47, 13));
        modNameEdit = new QLineEdit(modInfoTab);
        modNameEdit->setObjectName(QStringLiteral("modNameEdit"));
        modNameEdit->setGeometry(QRect(70, 18, 315, 20));
        modAuthorEdit = new QLineEdit(modInfoTab);
        modAuthorEdit->setObjectName(QStringLiteral("modAuthorEdit"));
        modAuthorEdit->setGeometry(QRect(70, 58, 215, 20));
        modVersionEdit = new QLineEdit(modInfoTab);
        modVersionEdit->setObjectName(QStringLiteral("modVersionEdit"));
        modVersionEdit->setGeometry(QRect(70, 98, 61, 20));
        modGuidEdit = new QLineEdit(modInfoTab);
        modGuidEdit->setObjectName(QStringLiteral("modGuidEdit"));
        modGuidEdit->setEnabled(false);
        modGuidEdit->setGeometry(QRect(70, 138, 215, 20));
        guidButton = new QPushButton(modInfoTab);
        guidButton->setObjectName(QStringLiteral("guidButton"));
        guidButton->setGeometry(QRect(300, 137, 91, 23));
        label_5 = new QLabel(modInfoTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 180, 81, 16));
        stageNameEdit = new QLineEdit(modInfoTab);
        stageNameEdit->setObjectName(QStringLiteral("stageNameEdit"));
        stageNameEdit->setGeometry(QRect(70, 178, 315, 20));
        stageNameLangComboBox = new QComboBox(modInfoTab);
        stageNameLangComboBox->setObjectName(QStringLiteral("stageNameLangComboBox"));
        stageNameLangComboBox->setGeometry(QRect(400, 177, 91, 22));
        stageNameCopyButton = new QPushButton(modInfoTab);
        stageNameCopyButton->setObjectName(QStringLiteral("stageNameCopyButton"));
        stageNameCopyButton->setGeometry(QRect(500, 177, 95, 23));
        guidCopyButton = new QPushButton(modInfoTab);
        guidCopyButton->setObjectName(QStringLiteral("guidCopyButton"));
        guidCopyButton->setGeometry(QRect(405, 137, 95, 23));
        tabWidget->addTab(modInfoTab, QString());
        filesTab = new QWidget();
        filesTab->setObjectName(QStringLiteral("filesTab"));
        filesTab->setAutoFillBackground(true);
        label_6 = new QLabel(filesTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(38, 20, 61, 16));
        label_7 = new QLabel(filesTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 60, 71, 16));
        label_8 = new QLabel(filesTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(21, 100, 81, 16));
        label_9 = new QLabel(filesTab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(21, 140, 81, 16));
        label_10 = new QLabel(filesTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 180, 101, 16));
        label_11 = new QLabel(filesTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(7, 220, 101, 16));
        stageFilesEdit = new QLineEdit(filesTab);
        stageFilesEdit->setObjectName(QStringLiteral("stageFilesEdit"));
        stageFilesEdit->setGeometry(QRect(100, 18, 425, 20));
        lightingEdit = new QLineEdit(filesTab);
        lightingEdit->setObjectName(QStringLiteral("lightingEdit"));
        lightingEdit->setGeometry(QRect(100, 58, 425, 20));
        selPortEdit = new QLineEdit(filesTab);
        selPortEdit->setObjectName(QStringLiteral("selPortEdit"));
        selPortEdit->setGeometry(QRect(100, 98, 425, 20));
        questPortEdit = new QLineEdit(filesTab);
        questPortEdit->setObjectName(QStringLiteral("questPortEdit"));
        questPortEdit->setGeometry(QRect(100, 138, 425, 20));
        selBackEdit = new QLineEdit(filesTab);
        selBackEdit->setObjectName(QStringLiteral("selBackEdit"));
        selBackEdit->setGeometry(QRect(100, 178, 425, 20));
        addDataEdit = new QLineEdit(filesTab);
        addDataEdit->setObjectName(QStringLiteral("addDataEdit"));
        addDataEdit->setGeometry(QRect(100, 218, 425, 20));
        label_12 = new QLabel(filesTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 260, 381, 16));
        stageFilesButton = new QPushButton(filesTab);
        stageFilesButton->setObjectName(QStringLiteral("stageFilesButton"));
        stageFilesButton->setGeometry(QRect(535, 17, 61, 23));
        lightingButton = new QToolButton(filesTab);
        lightingButton->setObjectName(QStringLiteral("lightingButton"));
        lightingButton->setGeometry(QRect(535, 57, 61, 23));
        lightingButton->setPopupMode(QToolButton::InstantPopup);
        lightingButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        selPortButton = new QToolButton(filesTab);
        selPortButton->setObjectName(QStringLiteral("selPortButton"));
        selPortButton->setGeometry(QRect(535, 97, 61, 23));
        selPortButton->setPopupMode(QToolButton::InstantPopup);
        selPortButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        questPortButton = new QToolButton(filesTab);
        questPortButton->setObjectName(QStringLiteral("questPortButton"));
        questPortButton->setGeometry(QRect(535, 137, 61, 23));
        questPortButton->setPopupMode(QToolButton::InstantPopup);
        questPortButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        selBackButton = new QToolButton(filesTab);
        selBackButton->setObjectName(QStringLiteral("selBackButton"));
        selBackButton->setGeometry(QRect(535, 177, 61, 23));
        selBackButton->setPopupMode(QToolButton::InstantPopup);
        selBackButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        addDataButton = new QPushButton(filesTab);
        addDataButton->setObjectName(QStringLiteral("addDataButton"));
        addDataButton->setGeometry(QRect(535, 217, 61, 23));
        tabWidget->addTab(filesTab, QString());
        defTab = new QWidget();
        defTab->setObjectName(QStringLiteral("defTab"));
        defTab->setAutoFillBackground(true);
        defCopyButton = new QPushButton(defTab);
        defCopyButton->setObjectName(QStringLiteral("defCopyButton"));
        defCopyButton->setGeometry(QRect(20, 20, 75, 23));
        label_13 = new QLabel(defTab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(36, 60, 47, 13));
        label_14 = new QLabel(defTab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(42, 100, 47, 13));
        label_15 = new QLabel(defTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(5, 140, 71, 16));
        codeEdit = new QLineEdit(defTab);
        codeEdit->setObjectName(QStringLiteral("codeEdit"));
        codeEdit->setGeometry(QRect(80, 58, 113, 20));
        bgmEdit = new QLineEdit(defTab);
        bgmEdit->setObjectName(QStringLiteral("bgmEdit"));
        bgmEdit->setGeometry(QRect(80, 138, 113, 20));
        eveEdit = new QLineEdit(defTab);
        eveEdit->setObjectName(QStringLiteral("eveEdit"));
        eveEdit->setGeometry(QRect(80, 98, 113, 20));
        label_16 = new QLabel(defTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(240, 60, 47, 13));
        label_17 = new QLabel(defTab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(200, 100, 91, 16));
        dirEdit = new QLineEdit(defTab);
        dirEdit->setObjectName(QStringLiteral("dirEdit"));
        dirEdit->setGeometry(QRect(270, 58, 113, 20));
        f6Edit = new QLineEdit(defTab);
        f6Edit->setObjectName(QStringLiteral("f6Edit"));
        f6Edit->setGeometry(QRect(270, 98, 113, 20));
        label_18 = new QLabel(defTab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(430, 60, 41, 16));
        str4Edit = new QLineEdit(defTab);
        str4Edit->setObjectName(QStringLiteral("str4Edit"));
        str4Edit->setGeometry(QRect(470, 58, 113, 20));
        bgmButton = new QPushButton(defTab);
        bgmButton->setObjectName(QStringLiteral("bgmButton"));
        bgmButton->setGeometry(QRect(208, 137, 113, 23));
        label_19 = new QLabel(defTab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(330, 140, 31, 16));
        seEdit = new QLineEdit(defTab);
        seEdit->setObjectName(QStringLiteral("seEdit"));
        seEdit->setGeometry(QRect(365, 138, 218, 20));
        gate1Button = new QPushButton(defTab);
        gate1Button->setObjectName(QStringLiteral("gate1Button"));
        gate1Button->setGeometry(QRect(20, 220, 75, 23));
        gate2Button = new QPushButton(defTab);
        gate2Button->setObjectName(QStringLiteral("gate2Button"));
        gate2Button->setGeometry(QRect(140, 220, 75, 23));
        gate3Button = new QPushButton(defTab);
        gate3Button->setObjectName(QStringLiteral("gate3Button"));
        gate3Button->setGeometry(QRect(260, 220, 75, 23));
        gate4Button = new QPushButton(defTab);
        gate4Button->setObjectName(QStringLiteral("gate4Button"));
        gate4Button->setGeometry(QRect(380, 220, 75, 23));
        gate5Button = new QPushButton(defTab);
        gate5Button->setObjectName(QStringLiteral("gate5Button"));
        gate5Button->setGeometry(QRect(500, 220, 75, 23));
        gate6Button = new QPushButton(defTab);
        gate6Button->setObjectName(QStringLiteral("gate6Button"));
        gate6Button->setGeometry(QRect(20, 270, 75, 23));
        gate7Button = new QPushButton(defTab);
        gate7Button->setObjectName(QStringLiteral("gate7Button"));
        gate7Button->setGeometry(QRect(140, 270, 75, 23));
        unk5Edit = new QLineEdit(defTab);
        unk5Edit->setObjectName(QStringLiteral("unk5Edit"));
        unk5Edit->setGeometry(QRect(470, 98, 113, 20));
        label_23 = new QLabel(defTab);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(427, 100, 41, 16));
        gate8Button = new QPushButton(defTab);
        gate8Button->setObjectName(QStringLiteral("gate8Button"));
        gate8Button->setGeometry(QRect(260, 270, 75, 23));
        gate9Button = new QPushButton(defTab);
        gate9Button->setObjectName(QStringLiteral("gate9Button"));
        gate9Button->setGeometry(QRect(380, 270, 75, 23));
        bgmCustomButton = new QPushButton(defTab);
        bgmCustomButton->setObjectName(QStringLiteral("bgmCustomButton"));
        bgmCustomButton->setGeometry(QRect(208, 170, 113, 23));
        gbb1Button = new QPushButton(defTab);
        gbb1Button->setObjectName(QStringLiteral("gbb1Button"));
        gbb1Button->setGeometry(QRect(20, 320, 75, 23));
        gbb2Button = new QPushButton(defTab);
        gbb2Button->setObjectName(QStringLiteral("gbb2Button"));
        gbb2Button->setGeometry(QRect(140, 320, 75, 23));
        gbb3Button = new QPushButton(defTab);
        gbb3Button->setObjectName(QStringLiteral("gbb3Button"));
        gbb3Button->setGeometry(QRect(260, 320, 75, 23));
        gbb4Button = new QPushButton(defTab);
        gbb4Button->setObjectName(QStringLiteral("gbb4Button"));
        gbb4Button->setGeometry(QRect(380, 320, 75, 23));
        gbb5Button = new QPushButton(defTab);
        gbb5Button->setObjectName(QStringLiteral("gbb5Button"));
        gbb5Button->setGeometry(QRect(500, 320, 75, 23));
        gbb6Button = new QPushButton(defTab);
        gbb6Button->setObjectName(QStringLiteral("gbb6Button"));
        gbb6Button->setGeometry(QRect(20, 370, 75, 23));
        gbb7Button = new QPushButton(defTab);
        gbb7Button->setObjectName(QStringLiteral("gbb7Button"));
        gbb7Button->setGeometry(QRect(140, 370, 75, 23));
        gbb8Button = new QPushButton(defTab);
        gbb8Button->setObjectName(QStringLiteral("gbb8Button"));
        gbb8Button->setGeometry(QRect(260, 370, 75, 23));
        gbb9Button = new QPushButton(defTab);
        gbb9Button->setObjectName(QStringLiteral("gbb9Button"));
        gbb9Button->setGeometry(QRect(380, 370, 75, 23));
        tabWidget->addTab(defTab, QString());
        slotTab = new QWidget();
        slotTab->setObjectName(QStringLiteral("slotTab"));
        slotTab->setAutoFillBackground(true);
        slotsCheck = new QCheckBox(slotTab);
        slotsCheck->setObjectName(QStringLiteral("slotsCheck"));
        slotsCheck->setGeometry(QRect(30, 20, 171, 17));
        slotsLocalCheck = new QCheckBox(slotTab);
        slotsLocalCheck->setObjectName(QStringLiteral("slotsLocalCheck"));
        slotsLocalCheck->setGeometry(QRect(30, 60, 201, 17));
        tabWidget->addTab(slotTab, QString());
        patchTab = new QWidget();
        patchTab->setObjectName(QStringLiteral("patchTab"));
        patchTab->setAutoFillBackground(true);
        label_20 = new QLabel(patchTab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 20, 101, 16));
        farClipEdit = new QLineEdit(patchTab);
        farClipEdit->setObjectName(QStringLiteral("farClipEdit"));
        farClipEdit->setGeometry(QRect(100, 18, 113, 20));
        label_24 = new QLabel(patchTab);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(66, 60, 31, 16));
        limitEdit = new QLineEdit(patchTab);
        limitEdit->setObjectName(QStringLiteral("limitEdit"));
        limitEdit->setGeometry(QRect(100, 58, 113, 20));
        tabWidget->addTab(patchTab, QString());
        vfxTab = new QWidget();
        vfxTab->setObjectName(QStringLiteral("vfxTab"));
        vfxTab->setAutoFillBackground(true);
        label_21 = new QLabel(vfxTab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(26, 60, 61, 16));
        vfxCopyButton = new QPushButton(vfxTab);
        vfxCopyButton->setObjectName(QStringLiteral("vfxCopyButton"));
        vfxCopyButton->setGeometry(QRect(20, 20, 75, 23));
        vfxBGEdit = new QLineEdit(vfxTab);
        vfxBGEdit->setObjectName(QStringLiteral("vfxBGEdit"));
        vfxBGEdit->setGeometry(QRect(80, 58, 361, 20));
        label_22 = new QLabel(vfxTab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(11, 100, 61, 16));
        vfxStageEdit = new QLineEdit(vfxTab);
        vfxStageEdit->setObjectName(QStringLiteral("vfxStageEdit"));
        vfxStageEdit->setGeometry(QRect(80, 98, 361, 20));
        tabWidget->addTab(vfxTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "XV2 Stage Creator", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save as...", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionSelectFileSel->setText(QApplication::translate("MainWindow", "Select file", 0));
        actionFromGameSel->setText(QApplication::translate("MainWindow", "Copy from game", 0));
        actionSelectFileLight->setText(QApplication::translate("MainWindow", "Select file", 0));
        actionFromGameLight->setText(QApplication::translate("MainWindow", "Copy from game", 0));
        actionSelectFileQst->setText(QApplication::translate("MainWindow", "Select file", 0));
        actionSelectFileBack->setText(QApplication::translate("MainWindow", "Select file", 0));
        actionFromGameQst->setText(QApplication::translate("MainWindow", "Copy from game", 0));
        actionFromGameBack->setText(QApplication::translate("MainWindow", "Copy from game", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Author:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Version:", 0));
        label_4->setText(QApplication::translate("MainWindow", "GUID:", 0));
        guidButton->setText(QApplication::translate("MainWindow", "Generate new", 0));
        label_5->setText(QApplication::translate("MainWindow", "Stage name:", 0));
        stageNameLangComboBox->clear();
        stageNameLangComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "English", 0)
         << QApplication::translate("MainWindow", "Spanish (es)", 0)
         << QApplication::translate("MainWindow", "Spanish (ca)", 0)
         << QApplication::translate("MainWindow", "French", 0)
         << QApplication::translate("MainWindow", "German", 0)
         << QApplication::translate("MainWindow", "Italian", 0)
         << QApplication::translate("MainWindow", "Portuguese", 0)
         << QApplication::translate("MainWindow", "Polish", 0)
         << QApplication::translate("MainWindow", "Russian", 0)
         << QApplication::translate("MainWindow", "Chinese (tw)", 0)
         << QApplication::translate("MainWindow", "Chinese (zh)", 0)
         << QApplication::translate("MainWindow", "Korean", 0)
        );
        stageNameCopyButton->setText(QApplication::translate("MainWindow", "Copy from game", 0));
        guidCopyButton->setText(QApplication::translate("MainWindow", "Copy to clipboard", 0));
        tabWidget->setTabText(tabWidget->indexOf(modInfoTab), QApplication::translate("MainWindow", "Mod info", 0));
        label_6->setText(QApplication::translate("MainWindow", "Stage files:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Environment:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Select portrait:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Quest portrait:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Select background:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Additional data*:", 0));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">*This directory is optional. Use with care and only when needed!</span></p></body></html>", 0));
        stageFilesButton->setText(QApplication::translate("MainWindow", "Change", 0));
        lightingButton->setText(QApplication::translate("MainWindow", "Change", 0));
        selPortButton->setText(QApplication::translate("MainWindow", "Change", 0));
        questPortButton->setText(QApplication::translate("MainWindow", "Change", 0));
        selBackButton->setText(QApplication::translate("MainWindow", "Change", 0));
        addDataButton->setText(QApplication::translate("MainWindow", "Change", 0));
        tabWidget->setTabText(tabWidget->indexOf(filesTab), QApplication::translate("MainWindow", "Files", 0));
        defCopyButton->setText(QApplication::translate("MainWindow", "Copy", 0));
        label_13->setText(QApplication::translate("MainWindow", "Code:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Eve:", 0));
        label_15->setText(QApplication::translate("MainWindow", "BGM Cue Id:", 0));
        label_16->setText(QApplication::translate("MainWindow", "Dir:", 0));
        label_17->setText(QApplication::translate("MainWindow", "Ki blast limit:", 0));
        label_18->setText(QApplication::translate("MainWindow", "Str4:", 0));
        bgmButton->setText(QApplication::translate("MainWindow", "Listen", 0));
        label_19->setText(QApplication::translate("MainWindow", "SE:", 0));
        seEdit->setText(QString());
        gate1Button->setText(QApplication::translate("MainWindow", "Gate 1", 0));
        gate2Button->setText(QApplication::translate("MainWindow", "Gate 2", 0));
        gate3Button->setText(QApplication::translate("MainWindow", "Gate 3", 0));
        gate4Button->setText(QApplication::translate("MainWindow", "Gate 4", 0));
        gate5Button->setText(QApplication::translate("MainWindow", "Gate 5", 0));
        gate6Button->setText(QApplication::translate("MainWindow", "Gate 6", 0));
        gate7Button->setText(QApplication::translate("MainWindow", "Gate 7", 0));
        label_23->setText(QApplication::translate("MainWindow", "Unk5:", 0));
        gate8Button->setText(QApplication::translate("MainWindow", "Gate 8", 0));
        gate9Button->setText(QApplication::translate("MainWindow", "Gate 9", 0));
        bgmCustomButton->setText(QApplication::translate("MainWindow", "Set custom bgm", 0));
        gbb1Button->setText(QApplication::translate("MainWindow", "Gate 1 (GBB)", 0));
        gbb2Button->setText(QApplication::translate("MainWindow", "Gate 2 (GBB)", 0));
        gbb3Button->setText(QApplication::translate("MainWindow", "Gate 3 (GBB)", 0));
        gbb4Button->setText(QApplication::translate("MainWindow", "Gate 4 (GBB)", 0));
        gbb5Button->setText(QApplication::translate("MainWindow", "Gate 5 (GBB)", 0));
        gbb6Button->setText(QApplication::translate("MainWindow", "Gate 6 (GBB)", 0));
        gbb7Button->setText(QApplication::translate("MainWindow", "Gate 7 (GBB)", 0));
        gbb8Button->setText(QApplication::translate("MainWindow", "Gate 8 (GBB)", 0));
        gbb9Button->setText(QApplication::translate("MainWindow", "Gate 9 (GBB)", 0));
        tabWidget->setTabText(tabWidget->indexOf(defTab), QApplication::translate("MainWindow", "Def", 0));
        slotsCheck->setText(QApplication::translate("MainWindow", "Add this stage to slots", 0));
        slotsLocalCheck->setText(QApplication::translate("MainWindow", "Add this stage to local mode slots", 0));
        tabWidget->setTabText(tabWidget->indexOf(slotTab), QApplication::translate("MainWindow", "Slot", 0));
        label_20->setText(QApplication::translate("MainWindow", "Override far clip:", 0));
        label_24->setText(QApplication::translate("MainWindow", "Limit:", 0));
        tabWidget->setTabText(tabWidget->indexOf(patchTab), QApplication::translate("MainWindow", "Patch", 0));
        label_21->setText(QApplication::translate("MainWindow", "BG eepk:", 0));
        vfxCopyButton->setText(QApplication::translate("MainWindow", "Copy", 0));
        label_22->setText(QApplication::translate("MainWindow", "Stage eepk:", 0));
        tabWidget->setTabText(tabWidget->indexOf(vfxTab), QApplication::translate("MainWindow", "Vfx", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
