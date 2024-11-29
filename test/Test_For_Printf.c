#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
	int x = INT_MAX, y = INT_MIN, negativ_num = -123456;
	int len, len2, compare_len, len_str, len_str2;
	unsigned int positiv_num;
	double f = 1.23456789;
	char c = 99;
	void *ptr;

	ptr = (void *)0x7ffe637541f0;

	len = printf("Hello School !\n");
	len2 = _printf("Hello School !\n");
	compare_len = len - len2;
	if (compare_len != 0)
	{
		printf("Différence de length entre printf et _printf : [%d]", compare_len);
	}
	positiv_num = x + 1024;

	/* Test lettre majuscule */
	printf("Resultat attendu - Char uppercase: [%c]\n", c);
	_printf("Votre _printf - Char uppercase: [%c]\n", c);

	/* Test lettre minuscule */
	printf("Resultat attendu - Char lowercase: [%c]\n", c);
	_printf("Votre _printf - Char lowercase: [%c]\n", c);
	
	/* Test chaîne de caractères */
	printf("Resultat attendu - String: [%s]\n", "Hello, this is a string");
	_printf("Votre _printf - String: [%s]\n", "Hello, this is a string");

	/* Test nombre */
	printf("Resultat attendu - Length:[%d, %i]\n", len, len);
    _printf("Votre _printf - Length:[%d, %i]\n", len2, len2);

	/* Test nombre négatif */
	printf("Resultat attendu - Negative Int: [%d]\n", negativ_num);
	_printf("Votre _printf - Negative Int: [%d]\n", negativ_num);
	
	/* Test nombre positif */
	printf("Resultat attendu - Unsigned Int: [%u]\n", positiv_num);
	_printf("Votre _printf - Unsigned Int: [%u]\n", positiv_num);

	/* Print unsigned INT_MAX = 4294967295 */
	printf("Resultat attendu - Unsigned Int: [%u]\n", -1);
	/* Doit prendre en compte si reçoit un nombre negatif alors qu'on attend un positif */
	/* Si nombre negatif print (INT_MAX - negativ_num) + 1 */
	_printf("Votre _printf - Unsigned Int: [%u]\n", -1); 

	/* Test nombre à virgule */
	printf("Resultat attendu - Float: [%f]\n", f);
	_printf("Votre _printf - Float: [%f]\n", f);
	
	/* Test adresse pointeur */
	printf("Resultat attendu - Pointer address: [%p]\n", ptr);
	_printf("Votre _printf - Pointer address: [%p]\n", ptr);
	
	/* Test afficher signe '%' */
	len = printf("Percent:[%%]\n");
    len2 = _printf("Percent:[%%]\n");
	printf("Resultat Attendu - Len:[%d]\n", len);
    _printf("Votre _printf - Len:[%d]\n", len2);
	
	/* Test afficher valeur hexadecimal d'un entier */
	printf("Resultat attendu - Hexadecimal Int: [%x]\n", -1024);
	_printf("Votre _printf - Hexadecimal Int: [%x]\n", -1024);
	
	
	/* Test spécifieur de format inconnu */
	/* printf("%S\n", "Best\nSchool"); */
	_printf("%");
	
	return (0);
}
