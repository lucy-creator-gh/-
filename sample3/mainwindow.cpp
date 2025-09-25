#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_actAbout_triggered()
{
    QMessageBox::about(this,
                       tr("关于"),
                       tr("开发者信息：詹智豪"));
}

void MainWindow::iniUI()
{
    fLabCurFile=new QLabel;
    fLabCurFile->setMidLineWidth(150);
    fLabCurFile->setText("当前文件:");
    ui->statusbar->addWidget(fLabCurFile);

    progressBar=new QProgressBar;
    progressBar->setMinimum(5);
    progressBar->setMaximum(50);
    progressBar->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progressBar);

    spinFontSize=new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spinFontSize);

    comboFont= new QFontComboBox;
    ui->toolBar->addWidget(new QLabel("字体"));
    ui->toolBar->addWidget(comboFont);
}
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    iniUI();
    setCentralWidget(ui->textEdit);
    connect(ui->actabout, &QAction::triggered, this, &MainWindow::on_actAbout_triggered);
}

MainWindow::~MainWindow()
{
    delete ui;
}
