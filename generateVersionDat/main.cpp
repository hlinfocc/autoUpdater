#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("generateVersionDat");
    QCoreApplication::setOrganizationDomain("hlinfo.net");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    //支持老显卡设置
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QGuiApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);
    QCoreApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);
    QApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(QStringLiteral("logo")));

    MainWindow w;
    //固定大小
    w.setFixedSize(w.width(),w.height());
    //隐藏最大化最小化按钮
    w.setWindowFlags(w.windowFlags() &~Qt::WindowMinMaxButtonsHint);
    w.show();
    return a.exec();
}
