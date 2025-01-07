#ifndef QESYS_h
#define QESYS_H

#include <string>
/*
=======================
  QE GLOBAL VARIABLES

  @syntax-and-codestack

      1/7/25
=======================
*/
void * q_eSysprintf(const char * _format, const char * text, ...);
int * qSize_t( unsigned long * _size);
typedef std::string qestring;
char * q_eGlobalParse;

#endif
