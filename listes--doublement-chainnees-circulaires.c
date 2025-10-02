#include<stdio.h>
#include<stdlib.h>

typedef struct cellule{
    int val;
    struct cellule* next;
    struct cellule* pre;
}cellule;

// Insertion en tête
void insert_tete(cellule** liste, int v){
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;
    
    if (*liste == NULL){
        // Première insertion - liste vide
        p->next = p;
        p->pre = p;
        *liste = p;
    } else {
        
        // Insertion en tête dans une liste non vide
        cellule* dernier = (*liste)->pre; // Le dernier élément
        
        p->next = *liste;
        p->pre = dernier;
        
        (*liste)->pre = p;
        dernier->next = p;
        
        *liste = p; // Mettre à jour la tête
    }
}

// Insertion en queue
void insert_queue(cellule** liste, int v){
    cellule* p = (cellule*)malloc(sizeof(cellule));
    p->val = v;
    
    if (*liste == NULL){
        // Première insertion - liste vide
        p->next = p;
        p->pre = p;
        *liste = p;
    } else {
        // Insertion en queue dans une liste non vide
        cellule* dernier = (*liste)->pre; // Le dernier élément actuel
        
        p->next = *liste;
        p->pre = dernier;
        
        dernier->next = p;
        (*liste)->pre = p;
        // La tête (*liste) ne change pas
    }
}

// Fonction pour afficher la liste
void afficher_liste(cellule* liste){
    if (liste == NULL){
        printf("Liste vide\n");
        return;
    }
    
    cellule* courant = liste;
    printf("Liste : ");
    do {
        printf("%d ", courant->val);
        courant = courant->next;
    } while(courant != liste);
    printf("\n");
}

// Fonction pour libérer la mémoire
void liberer_liste(cellule** liste){
    if (*liste == NULL) return;
    
    cellule* courant = *liste;
    cellule* temp;
    
    do {
        temp = courant;
        courant = courant->next;
        free(temp);
    } while(courant != *liste);
    
    *liste = NULL;
}
