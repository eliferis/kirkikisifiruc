#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		if (j < size - 1)
		{
			dest[j] = src[i];
		}
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}

int main(void)
{
    // Example usage of ft_strlcat
    char dest[50] = "Hello, ";
    char src[] = "World!";
    unsigned int size = 50;

    unsigned int result = ft_strlcat(dest, src, size); // Should concatenate src to dest

    // The result should be "Hello, World!" and the return value should be the total length of the concatenated string
    return 0; // Exit the program
}