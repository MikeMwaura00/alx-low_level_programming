#include "main.h"
int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1; /* c is a digit */
    } else {
        return 0; /* c is not a digit */
    }
}

