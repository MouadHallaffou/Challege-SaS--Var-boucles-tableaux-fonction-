#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**structs**/

typedef struct
{
    int jour;
    int mois;
    int annee;
} dateNaissance;

typedef struct
{
    int nemeroUnique;
    char nom[20];
    char prenom[20];
    dateNaissance date;
    char departement[100];
    float noteGenerale;
} Etudiant;


/**les fonctions**/

void Ajouter(Etudiant etudiants[], int nembresEtudiants)
{
    int i;
    do
    {
        printf("\n \t Combien d'etudiants devez-vous ajouter ?\n");
        scanf("%d", &nembresEtudiants);

        if(nembresEtudiants> 500 || nembresEtudiants<0) printf("entre un nembre entre 1 et 500");

    }
    while(nembresEtudiants> 500 || nembresEtudiants<0);


    for(i = 0; i < nembresEtudiants; i++)
    {
        printf(" Entrez les informations de l'etudiant %d:\n", i + 1);
        printf("\n");

        printf(" Nemuro unique: ");
        scanf(" %d", &etudiants[i].nemeroUnique);

        printf(" Nom: ");
        fflush(stdin);
        gets(etudiants[i].nom);

        printf(" Prenom: ");
        fflush(stdin);
        gets(etudiants[i].prenom);

        do
        {
            printf(" Date de naissance (jj/mm/aaaa): ");
            scanf(" %d/%d/%d", &etudiants[i].date.jour, &etudiants[i].date.mois, &etudiants[i].date.annee);
            if(etudiants[i].date.jour>31 || etudiants[i].date.jour<0 || etudiants[i].date.mois>12 ||
                    etudiants[i].date.mois<0 || etudiants[i].date.annee>2008 ||etudiants[i].date.annee<1950)
                printf("entre un date correct.\n");
        }
        while(etudiants[i].date.jour>32 || etudiants[i].date.jour<=0 || etudiants[i].date.mois>13 ||
                etudiants[i].date.mois<=0 || etudiants[i].date.annee>=2008 ||etudiants[i].date.annee<=1950);

        int choixDepartement;
        printf(" ** Departement: ** \n");
        printf("\t 1-Informatique \n");
        printf("\t 2-Math \n");
        printf("\t 3-Biologie \n");
        scanf(" %d",&choixDepartement);
        switch(choixDepartement)
        {
        case 1:
            strcpy(etudiants[i].departement, "Informatique");
            break;
        case 2:
            strcpy(etudiants[i].departement, "Math");
            break;
        case 3:
            strcpy(etudiants[i].departement, "Biologie");
            break;
        default:
            printf(" il ya seulement trois choix !! \n");
            break;
        }

        do
        {
            printf(" Note generale: ");
            scanf("%f", &etudiants[i].noteGenerale);
            if(etudiants[i].noteGenerale>20 || etudiants[i].noteGenerale<0)
                printf("attetion!! la note est entre 0 et 20 \n");
        }
        while(etudiants[i].noteGenerale>20 || etudiants[i].noteGenerale<0);
    }
    printf("etudiant ajoute avec succes!");
}

void modifier(Etudiant etudiants[], int nembresEtudiants)
{
    int id;
    printf("entre le nemuro unique de l'etudiant que tu doit modifier leur information: ");
    scanf("%d",&id);
    for(int i=0 ; i<nembresEtudiants; i++)
    {
        if(etudiants[i].nemeroUnique == id)
        {
            printf("etudiant diponible sous les information suivant:\n nom:%s \n prenom:%s\n entre les nouvelles information.\n",etudiants[i].nom, etudiants[i].prenom);

            printf(" nouveau nom: ");
            fflush(stdin);
            gets(etudiants[i].nom);

            printf(" nouveau prenom: ");
            fflush(stdin);
            gets(etudiants[i].prenom);

            do
            {
                printf(" nouveau Date de naissance (jj/mm/aaaa): ");
                scanf(" %d/%d/%d", &etudiants[i].date.jour, &etudiants[i].date.mois, &etudiants[i].date.annee);
                if(etudiants[i].date.jour>=31 || etudiants[i].date.jour<=0 || etudiants[i].date.mois>=12 ||
                        etudiants[i].date.mois<=0 || etudiants[i].date.annee>=2008 ||etudiants[i].date.annee<=1950)
                    printf("entre une date correct!!!!\n");
            }
            while(etudiants[i].date.jour>=31 || etudiants[i].date.jour<=0 || etudiants[i].date.mois>=12 ||
                    etudiants[i].date.mois<=0 || etudiants[i].date.annee>=2008 ||etudiants[i].date.annee<=1950);

            int choixDepartement;
            printf("nouveau departement: \n");
            printf("\t 1-Informatique \n");
            printf("\t 2-Math \n");
            printf("\t 3-Biologie \n");
            scanf(" %d",&choixDepartement);
            switch(choixDepartement)
            {
            case 1:
                strcpy(etudiants[i].departement, "Informatique");
                break;
            case 2:
                strcpy(etudiants[i].departement, "Math");
                break;
            case 3:
                strcpy(etudiants[i].departement, "Biologie");
                break;
            default:
                printf(" choix un des des 3 choix diponible !! \n");
                break;
            }
            do
            {
                printf(" nouveau note generale: ");
                scanf("%f", &etudiants[i].noteGenerale);
                if(etudiants[i].noteGenerale>20 || etudiants[i].noteGenerale<0)
                    printf(" Attetion!! la note est entre 0 et 20!!! \n");
            }
            while(etudiants[i].noteGenerale>20 || etudiants[i].noteGenerale<0);

            return;
        }

    }
}

void suprimer(Etudiant etudiants[], int nembresEtudiants)
{
    int id;
    int i, j;
    int trouve = 0;

    printf("Entrez le numero unique de l'etudiant a supprimer: ");
    scanf("%d", &id);

    for (i = 0; i < nembresEtudiants; i++)
    {
        if (etudiants[i].nemeroUnique == id)
        {
            for (j = i; j < nembresEtudiants - 1; j++)
            {
                etudiants[j] = etudiants[j + 1];
            }

            nembresEtudiants--;

            printf("L'etudiant avec le numero %d a ete supprime avec succes !\n", id);
            trouve = 1;
            break;
        }
    }

    if (!trouve)
    {
        printf("L'etudiant avec le numero %d n'est pas disponible.\n", id);
    }
}

void afficherDetails(Etudiant etudiants[], int nembresEtudiants)
{
    int id;
    int trouve = 0;
    printf("Donner le numero unique de l'etudiant pour afficher les details : ");
    scanf("%d", &id);
    for (int i = 0; i < nembresEtudiants; i++)
    {
        if (etudiants[i].nemeroUnique == id)
        {
            printf("Détails de l'etudiant avec le numero unique %d:\n", id);
            printf("Nom : %s\n", etudiants[i].nom);
            printf("Prenom : %s\n", etudiants[i].prenom);
            printf("Date de naissance : %d/%d/%d\n", etudiants[i].date.jour, etudiants[i].date.mois, etudiants[i].date.annee);
            printf("Departement : %s\n", etudiants[i].departement);
            printf("Note generale : %.2f\n", etudiants[i].noteGenerale);
            trouve = 1;
        }
    }
    if (!trouve)
    {
        printf("L'etudiant avec le numero unique %d n'a pas ete trouve\n", id);
    }
}
float moyenneGenerale(Etudiant etudiants[], int nembresEtudiants)
{
    if (nembresEtudiants == 0)
    {
        printf("Aucun etudiant pour calculer la moyenne.\n");
        return 0;
    }
    else
    {
        float somme = 0;
        for (int i = 0; i < nembresEtudiants; i++)
        {

            somme = somme + etudiants[i].noteGenerale;
        }
        float moyenne = somme / nembresEtudiants;
        return moyenne;
    }
}
void chercheEtudiantParNom(Etudiant etudiants[], int nembresEtudiants) {
    char nomCherche[20];
    printf("Entrez le nom de l'etudiant que vous cherchez : ");
    scanf("%s", nomCherche);

    int trouve = 0;

    for (int i = 0; i < nembresEtudiants; i++) {
        if (strcmp(etudiants[i].nom, nomCherche) == 0) {

            printf(" Etudiant trouve :\n");
            printf("Nom: %s\n", etudiants[i].nom);
            printf("prenom: %s\n", etudiants[i].prenom);

            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun étudiant trouvé avec le nom %s.\n", nomCherche);
    }
}



int main()
{
    float moyenne;
    int nembresEtudiants;
    Etudiant etudiants[500];
    int choix;

    printf("\n\t-----------------------------------------------------------------------------------------------\n");
    printf("\n\t-----------------------------------------------------------------------------------------------\n");
    printf("\n\t============================ Menu principale de l'enuversite ===================================\n");
    printf("\n\t------------------------------------------------------------------------------------------------\n");
    printf("\n\t------------------------------------------------------------------------------------------------\n");
    do
    {
        printf("\n");
        printf("\n");
        printf("\t          1  - Ajouter un Etudiant \n");
        printf("\t          2  - Modifier les information d'un Etudiant \n");
        printf("\t          3  - supprimer un Etudiant \n");
        printf("\t          4  - Calculer la moyenne generale \n");
        printf("\t          5  - Afficher les details d'un Etudiant \n");
        printf("\t          6  - Rechercher un Etudiant par son nom \n");
        printf("\t          7  - Statistiques\n");
        printf("\t          8  - Afficher la liste de chaque departement \n");
        printf("\t          9  - Trier les Etudiant \n");
        printf("\t          10 - Quitter \n");
        printf("\n");
        printf(" entre votre choix:\n");
        scanf("%d",&choix);
        switch(choix)
        {
        case 1 :
            Ajouter(etudiants, nembresEtudiants);
            break;

        case 2 :
            modifier(etudiants, nembresEtudiants);
            break;

        case 3 :
            suprimer(etudiants,&nembresEtudiants);
            break;

        case 4 :
            moyenne = moyenneGenerale(etudiants, nembresEtudiants);
            printf("moyenne generale: %.2f\n", moyenne);
            break;

        case 5 :
            afficherDetails(etudiants, nembresEtudiants);
            break;
        case 6 :
            chercheEtudiantParNom(etudiants, nembresEtudiants);
            break;

        case 7 ://Statistiques.
            break;

        case 8 ://Afficher la liste de chaque departement
            break;

        case 9 ://Trier les Etudiant
            break;

        default:
            printf("entre un choix existe!! \n");
        }
    }
    while(choix!=10);

    return 0;
}

















