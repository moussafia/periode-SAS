#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int numTotal=0;

//Structures Section
struct produit{
    char nom[30],code[30];
    int quantite;
    float prix;
    char temp[30];

};


//Fonction ajouter
void ajouterProduits(struct produit p[100]){

    int N;

    printf("Combien de produits souhaitez-vous saisir ?: ");
    scanf("%d",&N);

    for (int i=numTotal; i<numTotal+N; i++){
        printf("\n  Donnez Le Code Produit: ");
        scanf("%s",p[i].code);
        printf("    Donnez Le Nom Produit: ");
        scanf("%s",p[i].nom);
        printf("    Donnez La Quantitie Produit: ");
        scanf("%d",&p[i].quantite);
        printf("    Donnez Le Prix Produit: ");
        scanf("%f",&p[i].prix);
        p[i].prix += 0.15 * p[i].prix; // TTC =prix+15%*prix
        strcpy(p[i].temp,"0");

    }
    numTotal+=N;

}
//afficherPoduit
void afficherProduits(struct produit p[100]){
    //afficher
    printf("\nProduit\t\tCode\t\tNom\tQuantitie\tPrix\t\t       la_date_achat\n");
     printf("--------------------------------------------------------------------------------------------------------------");
    for(int j=0; j<numTotal; j++){
        printf("\n%d\t\t%s\t\t%s\t%d\t\t%.2f DH \t\t%s \n",j+1,p[j].code,p[j].nom,p[j].quantite,p[j].prix,p[j].temp);
}}
//Fonction l'ordre alphabetique�croissant du nom(triage par selection ou pivot).
void orderAlpha(struct produit p[100]){
    int i,j;
    struct produit X;
    for(i=0; i<numTotal-1; i++){
        for(j=i+1; j<numTotal; j++){
            if(strcmp(p[i].nom,p[j].nom) > 0){ //if p[i].nom > p[j].nom So strcmp return value positive
                X=p[i];
                p[i] = p[j];
                p[j]= X;
            }
        }
    }
}
//Fonction l'ordre� d�croissant du prix.
void orderPrix(struct produit p[100]){
    int i,j;
    struct produit X;
    for(i=0; i<numTotal-1; i++){
        for(j=i+1; j<numTotal; j++){
            if(p[i].prix < p[j].prix){
                X = p[i];
                p[i] = p[j];
                p[j]= X;
            }
        }
    }
}
void triage_du_liste(struct produit p[100]){int n;
printf("\n  1-lister tous les produits selon l�ordre alphabetique� croissant du nom: ");
printf("\n  2-lister tous les produits selon l�ordre� decroissant du prix: \n");
scanf("%d",&n);
system("cls");
switch(n)
{   case 1: orderAlpha(p);
        break;
    case 2: orderPrix(p);
        break ;
    default:
        break;
}
}

//Fonction mettre a� jour la quantit� apr�s avoir introduit le code produit
void acheterProduit(struct produit p[100]){
    char cod[30];
    float k;
    int N,L;
    L=0;
    time_t currenttime;
        printf("Donnez Le Code Produit: ");
        scanf("%s",cod);
            for(int i=0; i<numTotal; i++){

                    if(strcmp(cod,p[i].code)==0){       //if cod=p[i].code So strcmp return value zero
                            printf("\nDonnez le nombre de ce produit qui a vendue: ");
                             scanf("%d",&N);
                        if(p[i].quantite >= N){
                                k=(p[i].prix*N)/(p[i].quantite);
                                p[i].prix-=k;
                                p[i].quantite-=N;
                                time(&currenttime);
                                strcpy(p[i].temp,ctime(&currenttime));

           printf("\n          %s",ctime(&currenttime));
           printf("\ncode: %s  nom: %s   quantite: %d   prix: %.2f DH \n",p[i].code,p[i].nom,p[i].quantite,p[i].prix);
          L=0;
          break;

      }
       else L=1;

    }
    else L =2;

    }
        if (L==1)
        printf("La Quantite n'est pas suffisante");
        if (L==2)
        printf("Le code N'existe pas dans la liste des produit");
}
//fonction de recherhe du produit par code
void Rechercher_les_produits_code(struct produit p[100])
{char cod[30];
    printf("\n\tdonner le code : ");
    scanf("%s",&cod);

    for(int i=0;i<numTotal;i++)
    {
        if (strcmp(cod,p[i].code)==0)
           printf("\ncode: %s  nom: %s   quantite: %d   prix: %.2f DH \n",p[i].code,p[i].nom,p[i].quantite,p[i].prix);

    }}

    //fonction de Rechercher_les_produits_par quantite
    void Rechercher_les_produits_quantite(struct produit p[100]){
    int quan;
    printf("\n\tdonner la quantite : ");
    scanf("%d",&quan);

    for(int i=0;i<numTotal;i++)
    {
        if (quan==p[i].quantite)
           printf("\ncode: %s  nom: %s   quantite: %d   prix: %.2f DH \n",p[i].code,p[i].nom,p[i].quantite,p[i].prix);

    }}
    // fonction de recherche
    void recherche_les_produits(struct produit p[100]){int n;
        printf("\n  1-Rechercher les produits Par : Code");
        printf("\n  2-Rechercher les produits Par : Quantit�.\n");
        printf("\n  3-Etat du stock: permet d�afficher les produits dont la quantit� est inf�rieure � 3.\n");
        scanf("%d",&n);
        system("cls");
    switch(n)
{   case 1: Rechercher_les_produits_code(p);
        break;
    case 2: Rechercher_les_produits_quantite(p);
        break ;
    case 3: Etat_du_stock(p);
        break ;
    default:
        break;
}}

void Etat_du_stock(struct produit p[100]){

    for(int i=0;i<numTotal;i++)
    {
        if (p[i].quantite<3)
            printf("\ncode: %s  nom: %s   quantite: %d   prix: %.2f DH \n",p[i].code,p[i].nom,p[i].quantite,p[i].prix);
}}
void AlimenterStock(struct produit p[100]){
    char cod[30];
    int N,L;
    float k;
    printf("Donnez Le Code Produit: ");
        scanf("%s",cod);
            for(int i=0; i<numTotal; i++){

                    if(strcmp(cod,p[i].code)==0){       //if cod=p[i].code So strcmp return value zero
                            printf("\nDonnez le nombre de ce produit qui alimenter le stock: ");
                             scanf("%d",&N);
                                k=(p[i].prix*N)/(p[i].quantite);
                                p[i].prix+=k;
                                p[i].quantite+=N;
            L=0;
            break;
    }
    else L =1;

    }
        if (L==1)
        printf("Le code N'existe pas dans la liste des produit");

}
void SupprimerProduits(struct produit p[100])
{
    char cod[30];
    int L;

    printf("Donnez Le Code Produit: ");
        scanf("%s",cod);
            for(int i=0; i<numTotal; i++){

                    if(strcmp(cod,p[i].code)==0){       //if cod=p[i].code So strcmp return value zero
                        for(int j=i;j<numTotal;j++)
                            {p[j].prix=p[j+1].prix;
                            p[j].quantite=p[j+1].quantite;
                            strcpy(p[j].code,p[j+1].code);
                            strcpy(p[j].nom,p[j+1].nom);
                            strcpy(p[j].temp,p[j+1].temp);
                            }
            L=0;
            break;
    }
    else L =1;

    }
    numTotal--;
        if (L==1)
        printf("Le code N'existe pas dans la liste des produit");
}

int main()
{struct produit p[100];



     int N=0,OP;
    do{
        printf("\n\t   Menu:\n\n");
        printf("    1-Ajouter un ou plusieurs nouveau produit\n");
        printf("    2-Modifier Un Produit\n");
        printf("    3-Supprimer Un Produit\n");
        printf("    4-Afficher Les Produits\n");
        printf("    5-Lister tous les produits (Nom, prix, prix TTC):\n");
        printf("    6-le produit Achete : \n");
        printf("    10-Quitter De Programme\n");
        scanf("%d",&OP);


        switch(OP){
            case 1:
                ajouterProduits(p);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                afficherProduits(p);
                break;
            case 5:triage_du_liste(p);
                break;
            case 6: acheterProduit(p);
                 break;
            case 10: printf("By by\n");

                break;
            default:
                break;
        }

    }while(OP !=10);

 return 0;
}
