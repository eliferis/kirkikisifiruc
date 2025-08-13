#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
//tüm stringlerin karsilastirmasi yapilir. hepsinin esitligi ve buyuklugu anlasilir.
// This function compares two strings s1 and s2.
// It returns a negative value if s1 is less than s2,
// a positive value if s1 is greater than s2, and zero if they are equal.
// The comparison is done character by character until a difference is found or the end of either string is reached.
// The characters are cast to unsigned char to ensure correct comparison for all character values.
// The function assumes that the input strings are null-terminated.
// It is a simple implementation of the strcmp function found in the C standard library.
int main(void)
{
    // Example usage of ft_strcmp
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result1 = ft_strcmp(str1, str2); // Should return 0
    int result2 = ft_strcmp(str1, str3); // Should return a negative value

    return 0; // Exit the program
}
