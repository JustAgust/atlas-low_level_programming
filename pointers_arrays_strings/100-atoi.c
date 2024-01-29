#include "main.h"
/**
 * _atoi - a funtion that converts a string to an integer
 * @s: input string
 * Return: an integer.
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
            break;
    }

    for (; s[i] >= '0' && s[i] <= '9'; i++) {
        if (result > (sign == -1 ? -(1 << 31) / 10 : ((1 << 31) - 1) / 10)) {
            return sign == -1 ? -(1 << 31) : ((1 << 31) - 1);
        }
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}
