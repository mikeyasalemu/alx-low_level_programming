
#include <unistd.h>

/**
 * _putchar - writes the character c to std out
 * @c : the character to print
 *
 * Return : on success one
 * on error, -1 is returned , and errno is set approprietly;
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
