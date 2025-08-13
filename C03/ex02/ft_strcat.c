#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// This function concatenates the string src to the end of dest.
// It returns a pointer to the resulting string dest.

int main(void)
{
    // Example usage of ft_strcat
    char dest[50] = "Hello, ";
    char src[] = "World!";

    char *result = ft_strcat(dest, src); // Should concatenate src to dest

    // The result should be "Hello, World!"
    return 0; // Exit the program
}
// The function starts by moving a pointer to the end of the dest string.
// It then appends the characters from the src string to the end of dest.
// Finally, it null-terminates the concatenated string and returns a pointer to dest.
// This is a simple implementation of the strcat function found in the C standard library.
// It is useful for combining strings, such as when building messages or constructing file paths.
// The function assumes that dest has enough space to hold the concatenated result.
// It is important to ensure that the destination buffer is large enough to accommodate the concatenated string
// to avoid buffer overflows, which can lead to undefined behavior or security vulnerabilities. 
