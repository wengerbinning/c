#include <stdio.h>
#include "type.h"

int ShowByte(const void *pointer) {
    printf("%#2X", *(char *)pointer);
}