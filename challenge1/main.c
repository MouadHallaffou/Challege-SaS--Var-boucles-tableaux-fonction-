#include <stdio.h>
#include <stdlib.h>

int main() {
    char Nom[100], Prenom[100], sexe[100], adresseMail[100];
    int age;
    printf("entre votre Nom: ");
    scanf("%s",&Nom);
    printf("entre votre Prenom: ");
    scanf("%s",&Prenom);
    printf("entre votre age: ");
    scanf("%d",&age);
    printf("entre votre Sexe (M/F): ");
    scanf("%s",&sexe);
    printf("entre votre adresse e-mail: ");
    scanf("%s",&adresseMail);

    printf(" mom:%s\n Prenom:%s\n age:%d ans\n sexe:%s\n adesse e-mail:%s\n",Nom,Prenom,age,sexe,adresseMail);


    return 0;
}
