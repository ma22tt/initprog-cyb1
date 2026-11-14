#include <stdio.h>
#include <limits.h>
int main(){

	int a, b ,c;

	printf("entrer a b c\n");
	scanf("%d %d %c", &a, &b, &c);

	if(!(a <= 4000 && a >= -4) || !(b <= INT_MAX 
		&& b >= INT_MIN) || !(c <= INT_MAX && c >= INT_MIN))
		return(printf("enter valid int for comp\n"), 1);	
		
	if( a < b && b < c)
			printf("croiss\n");
	else
		printf("pas croiss\n");
	return 0;

}
