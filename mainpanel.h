#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <windows.h>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class MainPanel : public QWidget
{
    Q_OBJECT

public:
    MainPanel(QWidget *parent = nullptr);
    ~MainPanel();

protected:
    int scrXSize, scrYSize;
    int panXSize, panYSize;
    int panXIdent, panYIdent, panIdentResol;

    QLabel *titleLabel, *label1, *label2,
    *label3, *label4, *label5, *label6;
    QLineEdit *line1, *line2, *line3,
    *line4, *line5, *line6, *line7;
    QFont *font1, *font2;

    void initGeometry(int _sizeX, int _sizeY, int _stepResol);
    void createWidgets();
    void deleteWidgets();
};

#endif // MAINPANEL_H
