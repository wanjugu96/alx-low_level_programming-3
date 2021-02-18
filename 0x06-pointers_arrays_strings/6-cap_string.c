#include "holberton.h"
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int count;

/*  scan through string */
	count = 0;
	while (s[count] != '\0')
	{
/* if next character after count is a char , capitalise it */
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n' 
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{  
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}