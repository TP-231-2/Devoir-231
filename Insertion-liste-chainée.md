

Liste chaînée simplement circulaire en C

Ce programme implémente une liste chaînée simplement circulaire en langage C, avec les opérations suivantes :

Insertion en tête

Insertion en queue

Affichage de la liste


🔹 Structure utilisée

Chaque élément (nœud) de la liste contient :

une donnée entière data

un pointeur vers le nœud suivant next


La particularité d’une liste circulaire est que le dernier nœud pointe vers la tête de la liste.

typedef struct Node {
    int data;
    struct Node* next;
} Node;

🔹 Fonctions principales

insertHead(Node** head, int value)

Insère un nouvel élément au début de la liste circulaire.

insertTail(Node** head, int value)

Insère un nouvel élément à la fin de la liste circulaire.

displayList(Node* head)

Affiche tous les éléments de la liste, en montrant qu’on revient à la tête.

🔹 Exemple d’exécution

Après insertions en tête :
30 -> 20 -> 10 -> (retour à la tête)

Après insertions en queue :
30 -> 20 -> 10 -> 40 -> 50 -> (retour à la tête)

🔹 Compilation et exécution

1. Compiler le programme

gcc liste_circulaire.c -o liste_circulaire

2. Exécuter le programme

./liste_circulaire






