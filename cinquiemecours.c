#include <stdio.h>
#include <stdlib.h>
//#include <limits.h> // pour INT_MAX ET INT_MIN

/*return 1 = erreur, return 0 = succes( dans les fonction) je sais que le prof a dit l inverse mais y a 2 camp en c ceux qui voient des boolean partout
 * comme lui donc 1 vrai 0 faux mais moi j ai appris avec l autre convention dite "code d erreur" en gros 0 c est 0 probleme 1 c est pas zero probleme
 * comprendre les 2 c est important apres c est une question de preference
 *
 *
 * j utulise des return aussi avec des printf dedans c est purement pour gagner en ligne et je trouve ca plus logique apres ca reste perso vous pouvez tres bien changer 
 * avec printf....
 *      return....
 * j ai essaye d utulise que des notions que il a montrer pour l insant a part qlq detail mais que j ai essaye d explique ducoup
 *
 * je vous dis pas faites comme moi c est mieux mais je pense que c est en apprenant differente maniere que on comprend vraiment donc si ca peut aider tant mieux 
 *
 * et smah pour l ortographe*/

//fonction appele dans le main pour l ex03
int a3(int i)
{
    if ( i < 0)
        printf("%d est NEGATIF\n", i);
    else if ( i > 0)
        printf("%d est POSITIF\n", i);
    else if ( i == 0)
        printf("NULL\n");
    else
       return( printf("err\n"), 1);// renvoie message err + 1
    return 0;
}

//fonction appele dans le main pour l ex02
int a2(int x, int y)
{
    if ( x < y)
        printf("%d < %d \n", x, y);// on affiche direct la comparaison des valeurs pour avoir un rendu visuel
    else if(x > y)
        printf("%d > %d \n", x, y);// pareil
    else
        return(printf("i am not dealing with =\n"), 1);// ici on renvoie d abord un message pour dire que on gere pas les = vu que si c est pas > ou < bah c est = je crois et ensuite on renvoie 1
    return 0;
}

int main(){
    //ex01 var 
    int a, b, rez;
    char c;
    //ex02 var (2 valeurs a comparer)
    int x, y;
    //ex02 var
    long int i = 0;// (valeur positive ou negative) ici long int pour atteindre le int max (sinon int + include limits.h et utulise INT_MAX et INT_MIN)

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
        printf("need +, *, -, / to do an op\n");
    printf("%d %c %d = %d \n", a, c, b, rez);// affichage du resulat de l operation

// EX02
    printf("ex A2\n");

    printf("entrer 2 entier a comparer : \n");
    scanf("%d %d", &x, &y);
    if(a2(x, y) == 0)// si notre fonction arrive a son  return 0
        printf("ex02 passed \n");
    else
        printf("ex02 failed, try with not equal value \n");

// EX03

    printf("ex A3\n");
    
    printf("entrer un nombre pour savoir si il est postif : \n");
    scanf("%ld", &i);// ld pour long int
    if (i >= 2147483647 || i <= -2147483648)// check la limite (int max et min) en brut comme ca vous voyez ca ressemble a quoi le int max et min
        printf("limits err\n");
    else// vu que on est pas au dessus ou en dessou des limites ducoup..
    {
        if(a3(i) == 0)// appel fonction qui va comparer 
            printf("ex03 passed \n");
        else
            printf("ex03 failed, try again\n");
    }
    return (0);// fin du programme
}
