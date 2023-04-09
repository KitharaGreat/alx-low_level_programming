#include <stdio.h>
#include <stdarg.h>

void _printf(const char* format, ...) {
    va_list args;
    va_start(args, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd': {
                    int val = va_arg(args, int);
                    printf("%d", val);
                    break;
                }
                case 'f': {
                    double val = va_arg(args, double);
                    printf("%f", val);
                    break;
                }
                case 'c': {
                    char val = va_arg(args, int);
                    printf("%c", val);
                    break;
                }
                case 's': {
                    char* val = va_arg(args, char*);
                    printf("%s", val);
                    break;
                }
                default: {
                    printf("Unknown format specifier: %c", *format);
                    break;
                }
            }
        } else {
            printf("%c", *format);
        }
        format++;
    }
    va_end(args);
}
