#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ETUDIANTS 1000

/********** Fonctions **************/

float calcule_la_moyenne(float moyenne[], int nombreEtudiants)
{
    float somme = 0;
    for(int i = 0; i < nombreEtudiants; i++)
    {
        somme += moyenne[i];
    }
    return (nombreEtudiants > 0) ? (somme / nombreEtudiants) : 0;
}


void trouve_la_note_la_plus_eleve_et_basse(float moyenne[], int nombreEtudiants)
{
    if (nombreEtudiants == 0)
    {
        printf("Aucune note disponible.\n");
        return;
    }
    float minNote = moyenne[0];
    float maxNote = moyenne[0];

    for(int i = 1; i < nombreEtudiants; i++)
    {
        if(moyenne[i] < minNote) minNote = moyenne[i];
        if(moyenne[i] > maxNote) maxNote = moyenne[i];
    }
    printf(" note la plus basse est %.2f\n", minNote);
    printf(" note la plus elevée est %.2f\n", maxNote);
}

void etudiant_ayant_valide(float moyenne[], int nombreEtudiants)
{
    for(int i = 0; i < nombreEtudiants; i++)
    {
        if(moyenne[i] >= 12)
            printf("L'étudiant %d a validé avec la note %.2f\n", i + 1, moyenne[i]);
    }
}


void etudiant_en_rattrapage(float moyenne[], int nombreEtudiants)
{
    for(int i = 0; i < nombreEtudiants; i++)
    {
        if(moyenne[i] < 12)
            printf(" etudiant %d est en rattrapage avec la note %.2f\n", i + 1, moyenne[i]);
    }
}

int main()
{
    int nombreEtudiants;
    int choix;
    float moyenne[MAX_ETUDIANTS];

    printf("\t Combien etudiant ?: ");
    scanf("%d", &nombreEtudiants);


    if (nombreEtudiants <= 0 || nombreEtudiants > MAX_ETUDIANTS)
    {
        printf(" etudiants invalide.\n");
        return 1;
    }


    for(int i = 0; i < nombreEtudiants; i++)
    {
        do
        {
            printf("Entrez la note d etudiant %d : ", i + 1);
            scanf("%f", &moyenne[i]);
        }
        while(moyenne[i]>20);
    }

    do
    {
        printf(" \n **** Que tu doit faire faire ?????****\n");
        printf(" \t 1. Calculer la moyenne des notes\n");
        printf(" \t 2. Trouver la note la plus élevée et la plus basse\n");
        printf(" \t 3. Afficher les notes supérieures à la moyenne\n");
        printf("\t  4. Compter le nombre d'étudiants ayant valide\n");
        printf("\t  5. Compter le nombre d'étudiants en rattrapage\n");
        printf("\t  6. Quitter\n");
        scanf("%d", &choix);

        switch(choix)
        {
        case 1:
        {
            float moyenne0 = calcule_la_moyenne(moyenne, nombreEtudiants);
            printf("La moyenne des notes est %.2f\n", moyenne0);
            break;
        }
        case 2:
            trouve_la_note_la_plus_eleve_et_basse(moyenne, nombreEtudiants);
            break;
        case 3:
        {
            float moyenne0 = calcule_la_moyenne(moyenne, nombreEtudiants);
            for(int i = 0; i < nombreEtudiants; i++)
            {
                if(moyenne[i] > moyenne0)
                    printf("la note de 'étudiant %d est superieure a: %.2f\n", i + 1, moyenne[i]);
            }
            break;
        }
        case 4:
            etudiant_ayant_valide(moyenne, nombreEtudiants);
            break;
        case 5:
            etudiant_en_rattrapage(moyenne, nombreEtudiants);
            break;
        case 6:
            printf("good bay.\n");
            break;
        default:
            printf("Choix non dispo.\n");
            break;
        }
    }
    while(choix != 6);

    return 0;
}

