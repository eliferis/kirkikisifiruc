char	*ft_strstr(char *str, char *to_find) //bu fonksiyon bir yazinin icinde baska bir kelimeyi arar.
//Eğer aradığın kelime boşsa (""), direkt yazının başını döndürür.
//Aranan kelimeyi bulursa, kelimenin basladigi yeri döndurur.
//Eger kelimeyi bulamazsa, null döndurur.
{
	int i;
	int j;

	if (to_find[0] == '\0') //eger aradigimiz kelime bos ise yazinin basini dondurur.
		return (str);
	i = 0;
	while (str[i] != '\0') //yazinin sonuna gelene kadar dongu devam eder.
	{
		j = 0; //j to_find icin bir sayac. aranan kelimenin sonuna gelene kadar kontrol yapilir.
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j]) //Eğer str’in şu anki karakteri (i + j) ile to_find’in karakteri aynıysa, bir sonraki harfe bakar (j++).
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0') //Eğer to_find’in sonuna kadar ('\0') gelinmişse, demek ki bütün kelime bulundu.
		{
			return (str + i); //str’in i’nci harfinden başlayan adres (yani kelimenin başladığı yer) döndürülür. adresi i kadar ileri tasir
		}
		i++;
	}
	return (0);
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
