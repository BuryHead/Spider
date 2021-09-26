/********************************************************************************
** Form generated from reading UI file 'spider.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIDER_H
#define UI_SPIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spider
{
public:
    QAction *actionexport;
    QWidget *centralWidget;
    QWidget *stockListWidget;
    QGridLayout *gridLayout;
    QLabel *stockListLabel;
    QTableWidget *stockList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startPage;
    QPushButton *lastPage;
    QSpacerItem *horizontalSpacer;
    QLineEdit *currentPage;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextPage;
    QPushButton *endPage;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *symbol;
    QLabel *current;
    QFrame *findFrame;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *chg;
    QLabel *percent;
    QVBoxLayout *verticalLayout_2;
    QLabel *open;
    QLabel *volume;
    QVBoxLayout *verticalLayout_3;
    QLabel *amount;
    QLabel *turnover_rate;
    QVBoxLayout *verticalLayout_4;
    QLabel *pe_ttm;
    QLabel *dividend_yield;
    QVBoxLayout *verticalLayout_5;
    QLabel *market_capital;
    QLabel *current_year_percent;
    QWidget *tab_2;
    QTableWidget *financial_list;
    QLabel *label;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Spider)
    {
        if (Spider->objectName().isEmpty())
            Spider->setObjectName(QStringLiteral("Spider"));
        Spider->resize(1080, 700);
        actionexport = new QAction(Spider);
        actionexport->setObjectName(QStringLiteral("actionexport"));
        centralWidget = new QWidget(Spider);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stockListWidget = new QWidget(centralWidget);
        stockListWidget->setObjectName(QStringLiteral("stockListWidget"));
        stockListWidget->setGeometry(QRect(10, 10, 371, 286));
        gridLayout = new QGridLayout(stockListWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stockListLabel = new QLabel(stockListWidget);
        stockListLabel->setObjectName(QStringLiteral("stockListLabel"));

        gridLayout->addWidget(stockListLabel, 0, 0, 1, 1);

        stockList = new QTableWidget(stockListWidget);
        if (stockList->columnCount() < 7)
            stockList->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        stockList->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        stockList->setObjectName(QStringLiteral("stockList"));

        gridLayout->addWidget(stockList, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        startPage = new QPushButton(stockListWidget);
        startPage->setObjectName(QStringLiteral("startPage"));

        horizontalLayout_2->addWidget(startPage);

        lastPage = new QPushButton(stockListWidget);
        lastPage->setObjectName(QStringLiteral("lastPage"));

        horizontalLayout_2->addWidget(lastPage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        currentPage = new QLineEdit(stockListWidget);
        currentPage->setObjectName(QStringLiteral("currentPage"));

        horizontalLayout_2->addWidget(currentPage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        nextPage = new QPushButton(stockListWidget);
        nextPage->setObjectName(QStringLiteral("nextPage"));

        horizontalLayout_2->addWidget(nextPage);

        endPage = new QPushButton(stockListWidget);
        endPage->setObjectName(QStringLiteral("endPage"));

        horizontalLayout_2->addWidget(endPage);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(390, 10, 671, 651));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        layoutWidget = new QWidget(tab_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 171, 62));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        symbol = new QLabel(layoutWidget);
        symbol->setObjectName(QStringLiteral("symbol"));
        QFont font;
        font.setPointSize(15);
        symbol->setFont(font);

        verticalLayout_6->addWidget(symbol);

        current = new QLabel(layoutWidget);
        current->setObjectName(QStringLiteral("current"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        current->setFont(font1);
        current->setStyleSheet(QStringLiteral(""));

        verticalLayout_6->addWidget(current);

        findFrame = new QFrame(tab_1);
        findFrame->setObjectName(QStringLiteral("findFrame"));
        findFrame->setGeometry(QRect(460, 0, 191, 51));
        findFrame->setFrameShape(QFrame::StyledPanel);
        findFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(findFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(findFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_3 = new QSpacerItem(0, 12, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(findFrame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(tab_1);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 641, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chg = new QLabel(layoutWidget1);
        chg->setObjectName(QStringLiteral("chg"));
        QFont font2;
        font2.setPointSize(12);
        chg->setFont(font2);

        verticalLayout->addWidget(chg);

        percent = new QLabel(layoutWidget1);
        percent->setObjectName(QStringLiteral("percent"));
        percent->setFont(font2);

        verticalLayout->addWidget(percent);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        open = new QLabel(layoutWidget1);
        open->setObjectName(QStringLiteral("open"));
        open->setFont(font2);

        verticalLayout_2->addWidget(open);

        volume = new QLabel(layoutWidget1);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setFont(font2);

        verticalLayout_2->addWidget(volume);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        amount = new QLabel(layoutWidget1);
        amount->setObjectName(QStringLiteral("amount"));
        amount->setFont(font2);

        verticalLayout_3->addWidget(amount);

        turnover_rate = new QLabel(layoutWidget1);
        turnover_rate->setObjectName(QStringLiteral("turnover_rate"));
        turnover_rate->setFont(font2);

        verticalLayout_3->addWidget(turnover_rate);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pe_ttm = new QLabel(layoutWidget1);
        pe_ttm->setObjectName(QStringLiteral("pe_ttm"));
        pe_ttm->setFont(font2);

        verticalLayout_4->addWidget(pe_ttm);

        dividend_yield = new QLabel(layoutWidget1);
        dividend_yield->setObjectName(QStringLiteral("dividend_yield"));
        dividend_yield->setFont(font2);

        verticalLayout_4->addWidget(dividend_yield);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        market_capital = new QLabel(layoutWidget1);
        market_capital->setObjectName(QStringLiteral("market_capital"));
        market_capital->setFont(font2);

        verticalLayout_5->addWidget(market_capital);

        current_year_percent = new QLabel(layoutWidget1);
        current_year_percent->setObjectName(QStringLiteral("current_year_percent"));
        current_year_percent->setFont(font2);

        verticalLayout_5->addWidget(current_year_percent);


        horizontalLayout_3->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        financial_list = new QTableWidget(tab_2);
        financial_list->setObjectName(QStringLiteral("financial_list"));
        financial_list->setGeometry(QRect(7, 39, 650, 581));
        QFont font3;
        font3.setPointSize(10);
        financial_list->setFont(font3);
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 621, 21));
        tabWidget->addTab(tab_2, QString());
        Spider->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Spider);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Spider->setStatusBar(statusBar);
        menuBar = new QMenuBar(Spider);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 22));
        Spider->setMenuBar(menuBar);

        retranslateUi(Spider);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Spider);
    } // setupUi

    void retranslateUi(QMainWindow *Spider)
    {
        Spider->setWindowTitle(QApplication::translate("Spider", "Spider", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Spider->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        actionexport->setText(QApplication::translate("Spider", "export", Q_NULLPTR));
        stockListLabel->setText(QApplication::translate("Spider", "\350\202\241\347\245\250\345\210\227\350\241\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = stockList->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("Spider", "\350\202\241\347\245\250\344\273\243\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = stockList->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("Spider", "\350\202\241\347\245\250\345\220\215\347\247\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = stockList->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("Spider", "\345\275\223\345\211\215\344\273\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = stockList->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("Spider", "\346\266\250\350\267\214\351\242\235", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = stockList->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("Spider", "\345\271\264\345\210\235\350\207\263\344\273\212", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = stockList->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("Spider", "\345\270\202\345\200\274", Q_NULLPTR));
        startPage->setText(QApplication::translate("Spider", "\351\246\226\351\241\265", Q_NULLPTR));
        lastPage->setText(QApplication::translate("Spider", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        nextPage->setText(QApplication::translate("Spider", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
        endPage->setText(QApplication::translate("Spider", "\345\260\276\351\241\265", Q_NULLPTR));
        symbol->setText(QApplication::translate("Spider", "\350\202\241\347\245\250\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        current->setText(QApplication::translate("Spider", "\302\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Spider", "\346\220\234\347\264\242", Q_NULLPTR));
        chg->setText(QApplication::translate("Spider", "\346\266\250\350\267\214\351\242\235\357\274\232", Q_NULLPTR));
        percent->setText(QApplication::translate("Spider", "\346\266\250\350\267\214\345\271\205\357\274\232", Q_NULLPTR));
        open->setText(QApplication::translate("Spider", "\345\274\200\347\233\230\344\273\267\357\274\232", Q_NULLPTR));
        volume->setText(QApplication::translate("Spider", "\346\210\220\344\272\244\351\207\217\357\274\232", Q_NULLPTR));
        amount->setText(QApplication::translate("Spider", "\346\210\220\344\272\244\351\242\235\357\274\232", Q_NULLPTR));
        turnover_rate->setText(QApplication::translate("Spider", "\346\215\242\346\211\213\347\216\207\357\274\232", Q_NULLPTR));
        pe_ttm->setText(QApplication::translate("Spider", "\345\270\202\347\233\210\347\216\207\357\274\232", Q_NULLPTR));
        dividend_yield->setText(QApplication::translate("Spider", "\350\202\241\346\201\257\347\216\207\357\274\232", Q_NULLPTR));
        market_capital->setText(QApplication::translate("Spider", "\345\270\202\345\200\274\357\274\232", Q_NULLPTR));
        current_year_percent->setText(QApplication::translate("Spider", "\345\271\264\345\210\235\350\207\263\344\273\212\357\274\232", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("Spider", "\350\202\241\347\245\250\350\257\246\346\203\205", Q_NULLPTR));
        label->setText(QApplication::translate("Spider", "\350\264\242\346\212\245\345\270\201\347\247\215\357\274\232 \344\272\272\346\260\221\345\270\201(CNY)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Spider", "\350\264\242\345\212\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Spider: public Ui_Spider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIDER_H
