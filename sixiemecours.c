#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
/*strcmp fonction de la bibli string.h tout est dans le nom string compare
ducoup je compare str(ce que l utulisateur a ecrit) a une string (chaine de char)
srand getpid plus rapide que time null , time null change tout les 1 seconde donc si tu spam t as les meme 
result pour un vrai rdm getpid c est bien c est le "process id " donc a chaque fois il change il depend pas du temp
mais rien empeche un enchainement des meme reponse vu que y a que 3 choix..
char str[10] chaine de char qui a une taille attribuer [10]
*/

int main(){

	srand(getpid());
	char str[10];
	int i, n;

	printf("PIERRE PAPIER CISEAUX ?\n");
	scanf("%s" , str);
	n = rand() % 3 +1;// + 1 pour avoir 1, 2 ,3  et pas 0,1,2

	while (str[i])
	{
		str[i] = toupper(str[i]);// au cas ou on ecrit 
		//en minuscule ou maj toupper met en majuscule quoi qu il arrive pour bien comparer dans les if
		i++;
	}

	if(strcmp(str, "PAPIER") == 0)// == 0 succes
	{
		if(n == 1)// PAPIER
			printf("PAPIER .. EGALITE\n");
		else if(n == 2)// PIERRE
			printf("PIERRE.. WIN\n");
		else if(n == 3)// CISEAUX
			printf("CISEAUX.. LOOSE\n");
		else
			printf("err\n");
	}
	else if(strcmp(str, "PIERRE") == 0)
	{
		if(n == 1)// PAPIER
			printf("PAPiER .. LOOSE\n");
		else if(n == 2)// PIERRE
			printf("PIERRE.. EGALITE\n");
		else if(n == 3)// CISEAUX
			printf("CISEAUX.. WIN\n");
		else
			printf("err\n");
	}
	else if(strcmp(str, "CISEAUX") == 0)
	{	
		if(n == 1)// PAPIER
			printf("PAPiER .. WIN\n");
		else if(n == 2)// PIERRE
			printf("PIERRE.. LOOSE\n");
		else if(n == 3)// CISEAUX
			printf("CISEAUX.. EGALITE\n");
		else
			printf("err\n");
	}
	else
		printf("bad str\n");

	return (0);
}	
