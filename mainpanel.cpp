#include "mainpanel.h"

MainPanel::MainPanel(QWidget *parent)
    : QWidget(parent)
{
    initGeometry(800, 600, 100);
    setWindowTitle("Communal Payments");
    createWidgets();
}

MainPanel::~MainPanel()
{

}

void MainPanel::initGeometry(int _sizeX, int _sizeY, int _identResol)
{
    scrXSize = GetSystemMetrics(SM_CXSCREEN);
    scrYSize = GetSystemMetrics(SM_CYSCREEN);
    panXSize = _sizeX;
    panYSize = _sizeY;
    panIdentResol = _identResol;
    panXIdent = panXSize/panIdentResol;
    panYIdent = panYSize/panIdentResol;
    int upLeftAngleX = (scrXSize/2) - (panXSize/2);
    int upLeftAngleY = (scrYSize/2) - (panYSize/2);
    setGeometry(upLeftAngleX, upLeftAngleY, panXSize, panYSize);
    //setFixedSize(panXSize, panYSize);
}

void MainPanel::createWidgets()
{
    font1 = new QFont("Arial Black", 16, BOLD_FONTTYPE);
    font2 = new QFont("Arial Black", 10, BOLD_FONTTYPE);

    titleLabel = new QLabel(this);
    titleLabel->setGeometry(panXIdent*20, panYIdent*5, panXIdent*60, panYIdent*5);
    titleLabel->setFont(*font1);
    titleLabel->setText("Звіт Комунальних Платежів");

    label1 = new QLabel(this);
    label1->setGeometry(panXIdent*5, panYIdent*20, panXIdent*25, panYIdent*5);
    label1->setFont(*font2);
    label1->setText("Спожитий газ(куб.м)");

    line1 = new QLineEdit(this);
    line1->setGeometry(panXIdent*31, panYIdent*20, panXIdent*10, panYIdent*5);

    label2 = new QLabel(this);
    label2->setGeometry(panXIdent*5, panYIdent*30, panXIdent*25, panYIdent*5);
    label2->setFont(*font2);
    label2->setText("Електроенергія(кВт)");

    line2 = new QLineEdit(this);
    line2->setGeometry(panXIdent*31, panYIdent*30, panXIdent*10, panYIdent*5);

    label3 = new QLabel(this);
    label3->setGeometry(panXIdent*5, panYIdent*40, panXIdent*35, panYIdent*5);
    label3->setFont(*font2);
    label3->setText("Послуги Інтернет");

    label4 = new QLabel(this);
    label4->setGeometry(panXIdent*5, panYIdent*50, panXIdent*35, panYIdent*5);
    label4->setFont(*font2);
    label4->setText("Утримання будинків");

    label5 = new QLabel(this);
    label5->setGeometry(panXIdent*5, panYIdent*60, panXIdent*35, panYIdent*5);
    label5->setFont(*font2);
    label5->setText("Постачання гарячої води");

    label6 = new QLabel(this);
    label6->setGeometry(panXIdent*5, panYIdent*70, panXIdent*35, panYIdent*5);
    label6->setFont(*font2);
    label6->setText("Постачання холодної води");
}

void MainPanel::deleteWidgets()
{
    delete titleLabel;
    titleLabel = nullptr;
}
