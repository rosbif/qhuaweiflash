// просмотр и редактирование произвольных файлов 

#ifndef __VIEWER_H
#define __VIEWER_H
#include <stdint.h>
#include <QtWidgets>
#include "cpfiledir.h"

//***********************************************************
//* Класс главного окна 
//***********************************************************
class viewer  : public QMainWindow {

Q_OBJECT

cpfiledir* fileptr;
bool readonly;
uint8_t* pdata;
uint32_t plen;

QWidget* central;
QSettings* config;
QVBoxLayout* vlm;
QTextEdit* ted;

QString textdata;

// Главное меню
QMenuBar *menubar;
QMenu *menu_file;
QMenu* menu_edit;


public:
  
viewer(cpfiledir* dfile, uint8_t rmode);  
~viewer();

  
};

#endif