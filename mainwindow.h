#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QObject*  getsender() { return sender();}
private:
    Ui::MainWindow *ui;


    //QObject* obj = sender();

private slots:
   void digits_numbers();
   void operations();
};

#endif // MAINWINDOW_H
