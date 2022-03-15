#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * print_alphabet - prints the lowercase alphabet
 * print_alphabet_x10 - prints lowercase alphabet 10x
 * _islower - checks if character is lowercase
 * _isalpha - checks is charcter is alphabetic
 * print_sign - checks if number is + - 0
 * _abs - computes the absolute value of an integer
 * print_last_digit - prints the last digit of a number
 * jack_bauer - prints minutes of day 00:00-24:59
 * times_table - prints 9 times tables
 * add - adds 2 numbers together
 * print_to_98 - prints numbers from n to 98
 * print_times_table - prints n times table, start at 0
 * main - print natural numbers 3 & 5
 */
void  _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int  _islower(int c);
int  _isalpha(int c);
int  print_sign(int n);
int  _abs(int i);
int  print_last_digit(int i);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);
int main(void);
#endif
