#include "ovl8/libC.hpp"

extern void *operator new(size_t size) {
    return __osMalloc(size);
}