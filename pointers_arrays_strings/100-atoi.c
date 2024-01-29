#include "main.h"
/**
 * _atoi - a funtion that converts a string to an integer
 * @s: input string
 * Return: an integer.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    char c;

    
    while ((c = *s++) != '\0') {
        if (c == '-')
            sign *= -1;
        else if (c >= '0' && c <= '9')
            break;
    }

    
    while (c >= '0' && c <= '9') {
        
        if (result > (sign == -1 ? -(1 << 31) / 10 : ((1 << 31) - 1) / 10)) {
            return sign == -1 ? -(1 << 31) : ((1 << 31) - 1);
        }
        result = result * 10 + (c - '0');
        c = *s++;
    }

    return (sign * result);
}
