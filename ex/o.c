#include <stdio.h>

int main(){

	int code;

	printf("enter code \n");
	scanf("%d", &code);
 
	if(code == 0)
		return(printf("state is %d 'arret' \n", code), 0);
	else if(code == 1)
		return(printf("state is %d 'actif' \n", code), 0);
	else if(code == 2)
		return(printf("state is %d 'maintenance \n", code), 0);
	else if(code == 3)
		return(printf("state is %d 'defaut' \n", code), 0);
	else
		return(printf("satte is INVALID \n"), 1);

}
