#ifndef SYSF_H
#define SYSF_H

void * coid(const int * _COID); void * sysfmalloc(std::size_t _MALLOC);
int * sysfrunf(const char * _RUN);
//
typedef if sysfif;
typedef bool sysfboolean;
//
#define DEFINE_SYSF_IF(if)
#define DEFINE_SYSF_BOOL(bool)
//
#define SYSF_WRN_MSG(!)(const char * wrn_nsg)()
//
void sysfprintf(const char * _MODULUS, const char * _CSTR);
#endif
