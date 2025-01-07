#ifndef QESYS_h
#define QESYS_H

#include <string>
#include <Windows.h>
/*
=======================
  QE GLOBAL VARIABLES

  @syntax-and-codestack

      1/7/25
=======================
*/
void * q_eSysprintf(const char * _format, const char * text, ...);
typedef malloc qemalloc;
typedef std::size_t qesize_t;

typedef class QE_Global_GUI_Table{
  public:
 QE_Global_GUI_Table();
  ~QE_Global_GUI_Table();

    QE_Global_GUI_Table(float _X(HWND * Widget), float _Y(HWND * Widget), float _H(HWND * Widget), float _W(HWND * Widget), qesize_t * QE_Window_Size);

      HWND * QE_Camera_Widget;
      HWND * QE_XY_Widget;
      HWND * WINAPI_GL_Widget;
      HWND * QE_Toolbar_Widget;
      HWND * QE_Z_Widget;

      virtual void WINAPI * QE_FlushApiWindows() = 0;

        BOOLEAN QE_LoadWindows_Null(); 

};

QE_Global_GUI_Table ** malloc__table__size(){
  QE_Global_GUI_Table * QE = (QE_Global_GUI_Table*)qemalloc(sizeof(QE_Global_GUI_Table));
  return QE;
};

#endif
