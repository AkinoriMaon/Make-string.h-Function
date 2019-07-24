// Visual Studio에서 작성된 코드입니다.

#include <stdio.h>

int my_strlen(const char* str);
int my_strcpy(char* dest, const char* source);
int my_strcat(char* dest, const char* source);
int my_strcmp(const char* str1, const char* str2);

int main()
{
	char str[100];
	char str2[100];

	return 1;
}

int my_strlen(const char* str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	return --count;
}

int my_strcpy(char* dest, const char* source)
{
	int i = 0;

	for (i = 0; i <= my_strlen(source); i++)
	{
		dest[i] = source[i];
	}

	dest[i] = '\0';

	return --i;
}

int my_strcat(char* dest, const char* source)
{
	int i = my_strlen(dest);
	int j = 0, count = 0;

	printf("%d\n", i);

	while (source[j] != '\0')
	{
		dest[i] = source[j];
		printf("%c %c\n", dest[i], source[j]);
		i++;
		j++;
		count++;
	}

	printf("%d\n", i);
	dest[i] = '\0';

	return --count;
}

int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;

	if (my_strlen(str1) < my_strlen(str2))
	{
		return -1;
	}
	else if (my_strlen(str1) > my_strlen(str2))
	{
		return 1;
	}
	else
	{
		while (str1[i] != '\0')
		{
			if (str1[i] < str2[i])
			{
				return -1;
			}
			else if (str1[i] > str2[i])
			{
				return 1;
			}
			i++;
		}

		return 0;
	}
}