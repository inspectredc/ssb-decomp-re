#include "ovl8/libC.hpp"

extern void operator delete(void* ptr) { __osFree(ptr); }
