#include "src/utils/string_utils.h"

char* copy_string(char* str) {
    char* copy = malloc(strlen(str) + 1);
    strcpy(copy, str);
    return copy;
}