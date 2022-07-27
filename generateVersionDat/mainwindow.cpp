#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->versionValueBtn->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


    QString configFilePath = QDir::currentPath()+"/version.dat";
    configFilePath = QDir::toNativeSeparators(configFilePath);
    QFile writeFile(configFilePath);
    if(writeFile.exists()){
        QMessageBox box(QMessageBox::Critical,tr("警告"),tr("当前目录已经存在版本文件，请勿重复创建。"));
        box.setStandardButtons(QMessageBox::Ok);
        box.setButtonText(QMessageBox::Ok,QString(tr("确定")));
        box.exec();
        return;
    }
    writeFile.open(QIODevice::WriteOnly);
    QDataStream out(&writeFile);
    out << this->ui->versionValueBtn->value();
    writeFile.close();

    QMessageBox box(QMessageBox::Information,tr("温馨提示"),tr("创建成功。"));
    box.setStandardButtons(QMessageBox::Ok);
    box.setButtonText(QMessageBox::Ok,QString(tr("确定")));
    box.exec();
}

/**
 * 获取本地程序版本号，版本号为纯数字
 * @brief CheckVersion::readSysVersion
 * @return
 */
int MainWindow::readSysVersion()
{
    QString configFilePath = QDir::currentPath()+"/version.dat";
    configFilePath = QDir::toNativeSeparators(configFilePath);
    QFile writeFile(configFilePath);
    if(!writeFile.exists()){
        return 0;
    }
    writeFile.open(QIODevice::ReadOnly);
    QDataStream in(&writeFile);
    int sysVersion;
    in >> sysVersion;
     writeFile.close();
     return sysVersion;
}
