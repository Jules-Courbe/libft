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

char parsing(char *f)
{
	int i = 0;

}

int main()
{
	FILE *f = fopen("parsing.txt", "r+");
	if (f == NULL)
	{
		printf("Erreur d'ouverture du fichier");
		return (1);
	}
	printf("%c", f);
	fclose(f);
} 
