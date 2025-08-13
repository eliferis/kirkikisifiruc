int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
// This function compares up to n characters of two strings s1 and s2.
// It returns a negative value if s1 is less than s2,
// a positive value if s1 is greater than s2, and zero if they are equal
// or if n characters have been compared without finding a difference.
// The comparison is done character by character until a difference is found, the end of either string is reached, or n characters have been compared.
// The characters are cast to unsigned char to ensure correct comparison for all character values.
// The function assumes that the input strings are null-terminated, but it will only compare up to n characters.
// This is a simple implementation of the strncmp function found in the C standard library.
// It is useful for comparing strings with a specified length, which can be important
// in various applications such as sorting or searching within strings. 

int main(void)
{
    // Example usage of ft_strncmp
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "HelLo";
    char str4[] = "World";

    int result1 = ft_strncmp(str1, str2, 5); // Should return 0
    int result2 = ft_strncmp(str1, str3, 3); // Should return 0 (first 3 characters are equal)
    int result3 = ft_strncmp(str1, str4, 5); // Should return a negative value

    return 0; // Exit the program
}
// The comparison is done character by character until a difference is found, the end of either string is reached, or n characters have been compared.
// The characters are cast to unsigned char to ensure correct comparison for all character values.
// The function assumes that the input strings are null-terminated, but it  will only compare up to n characters.
// This is a simple implementation of the strncmp function found in the C standard library..
// It is useful for comparing strings with a specified length, which can be important in various applications such as sorting or searching within strings..
// The function is designed to handle cases where the strings may not be of equal length, and it will stop comparing once it reaches the specified number of characters or the end of either string. 
// The function is particularly useful in scenarios where you need to compare prefixes of strings or when dealing with fixed-length strings in protocols or data formats.
