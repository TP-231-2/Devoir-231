#include <stdio.h>
#include <stdlib.h>

typedef struct liste
{
    int point;
    struct point* suivant;
}liste;


void insertFront(liste** tete,int valeur){
    liste* new=(liste*)malloc(sizeof(liste));
    new->point=valeur;
    new->suivant=*tete;
    *tete=new;
}

void Creation_list(liste* tete){
    liste* temp =tete;
    while (temp!=NULL)
    {
        printf("%d->",temp->point);
        temp=temp->suivant;
    }
    print("NULL\n");
}

void supprimer(liste** tete,int valeur){
    liste* temp=*tete;
    liste* prev=NULL;

    while (temp!=NULL && temp->point== valeur)
    {
        *tete=temp->suivant;
        free(temp);
        temp=*tete;
    }
    
    while (temp!=NULL)
    {
        if (temp->point==valeur)
        {
            prev->suivant=temp->suivant;
            free(temp);
            temp=temp->suivant;
        }else
        {
            prev=temp;
            temp=temp->suivant;
        }
        
        
    }
    
    
}
