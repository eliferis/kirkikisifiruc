char *ft_strstr(char *str, char *to_find)
{
    char *s1;
    char *s2;

    if (!*to_find)
        return str; // If to_find is empty, return str

    while (*str)
    {
        s1 = str;
        s2 = to_find;

        // Compare the current position in str with to_find
        while (*s1 && *s2 && (*s1 == *s2))
        {
            s1++;
            s2++;
        }

        // If we reached the end of to_find, we found a match
        if (!*s2)
            return str;

        str++;
    }

    return NULL; // If no match was found, return NULL
}
// This function searches for the first occurrence of the substring to_find in the string str.
// It returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

int main(void)
{
    // Example usage of ft_strstr
    char str[] = "Hello, World!";
    char to_find[] = "World";
    char not_found[] = "Universe";

    char *result1 = ft_strstr(str, to_find); // Should return pointer to "World!"
    char *result2 = ft_strstr(str, not_found); // Should return NULL

    return 0; // Exit the program
}
// The function starts by checking if to_find is empty; if so, it returns str.
// It then iterates through str, comparing each character with the characters in to_find.