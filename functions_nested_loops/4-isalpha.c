#include "main.h"

/**
*_isalpha - tells you whether a character is a letter or not
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
return (1 ? (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') : 0);
}
