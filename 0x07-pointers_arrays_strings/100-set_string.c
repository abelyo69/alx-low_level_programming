include "holberton.h"


/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
 void set_string(char **s, char *to);
{
char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
