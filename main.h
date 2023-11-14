#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define NULL_STRING "(null)"

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define CONVERT_LOWERCASE   1
#define CONVERT_UNSIGNED    2

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct parameters - parameters struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: plus_flag specified
 * space_flag: hashtag_flag specified
 * @hashtag_flag: if _flag specified
 * @zero_flag: if _flag specified
 * @minus_flag: if _flag specified
 *
 * @width: field width specified
 * @precision: field precesion specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 */

typedef struct parameters
{
	unsigned int unsign         : 1;

	unsigned int plus_flag      : 1;
	unsigned int space_flag     : 1;
	unsigned int hashtag_flag   : 1;
	unsigned int zero_flag      : 1;
	unsigned int minus_flag     : 1;

	unsigned int width;
	unsigned int precesion;

	unsigned int h_modifier     : 1;
	unsigned int l_modifier     : 1;
} params_t;

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_pointer(va_list val);
int print_hex_ex(unsigned long int num);
int print_HEX_ex(unsigned int num);
int print_exclusive_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_unsigned(va_list args);
int print_bin(va_list val);
int print_srev(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_char(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
