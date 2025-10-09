/*********************************************/
/*   is-palindrome.c*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/10/08 18:37:37*/
/*   Updated: 2025/10/08 18:37:37*/
/*                                           */
/*********************************************/
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

int is_palindrome(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
 
	while (str[i])
	{ 
	printf("%c & %c", str[i], str[j]);
		if (str[i] != str[j])
		{
			printf("%c", j);
			return (2); 
		}
		if (str[i] == str[j])
		{
			i++;
			j--;
		}
	}
	return (0);
}

int main(void)
{
	printf("%d", (is_palindrome("hello")));
}
