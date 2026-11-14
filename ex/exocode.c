#include <stdio.h>

int main(){

	int code;

	printf("enter code \n");
	scanf("%d", &code);
 
	if(code == 0)
		printf("state is %d 'arret' \n", code);
	else if(code == 1)
		printf("state is %d 'actif' \n", code);
	else if(code == 2)
		printf("state is %d 'maintenance \n", code);
	else if(code == 3)
		printf("state is %d 'defaut' \n", code);
	else
		return(printf("satte is INVALID \n"), 1);

	return (0);
}
