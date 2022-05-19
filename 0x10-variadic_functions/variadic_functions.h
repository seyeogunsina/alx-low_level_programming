#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct form - struct of the format
 * @sym: the input format symbol
 * @form: the corresponding format
 */
typedef struct form
{
	char *sym;
	char *form;
} form_t;
#endif
