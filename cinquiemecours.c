#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

/*return 1 = erreur, return 0 = succes( dans les fonction)*/

//fonction appele dans le main pour l ex03
int a3(int o)
{
    if ( o < 0)
        printf("%d est NEGATIF\n", o);
    else if ( o > 0)
        printf("%d est POSITIF\n", o);
    else if ( o == 0)
        printf("NULL\n");
    else
       return( printf("err\n"), 1);
    return 0;
}

//fonction appele dans le main pour l ex02
int a2(int x, int y)
{
    if ( x < y)
        printf("%d < %d \n", x, y);
    else if(x > y)
        printf("%d > %d \n", x, y);
    else
        return(printf("i am not dealing with =\n"), 1);
    return 0;
}

int main(){
    //ex01 var 
    int a, b, rez;
    char c;
    //ex02 var
    int x, y;
    //ex02 var
    long int o = 0;

// EX01(pas de fonction appele tout est directement la)    
    printf("give opertor( +, -, *, /) :");
    scanf("%c", &c);
    printf("entre 2 valeur a operer : \n");
    scanf("%d %d", &a, &b);
    if (c == '+')
        rez = a + b;
    else if(c == '*')
        rez = a * b;
    else if( c == '-')
        rez = a - b;
    else if(c == '/')
        rez = a / b;
    else
        printf("need +, *, -, / to do an op so vim and add.\n");
    printf("%d %c %d = %d \n", a, c, b, rez);

// EX02
    printf("ex A2\n");

    printf("entrer 2 entier a comparer : \n");
    scanf("%d %d", &x, &y);
    if(a2(x, y) == 0)
        printf("ex02 passed \n");
    else
        printf("ex02 failed, try with not equal value \n");

// EX03

    printf("ex A3\n");
    
    printf("entrer un nombre pour savoir si il est postif : \n");
    scanf("%ld", &o);
    if (o >= 2147483647 || o <= -2147483648)
        printf("limits err\n");
    else
    {
        if(!a3(o))
            printf("ex03 passed \n");
        else
            printf("ex03 failed, try again\n");
    }
    return (0);
}
