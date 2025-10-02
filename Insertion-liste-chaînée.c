#include <stdio.h>
#include <stdlib.h>

// Structure d'un nœud
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour créer un nouveau nœud
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Erreur d'allocation mémoire\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insertion en tête
void insertHead(Node** head, int value) {
    Node* newNode = createNode(value);

    if (*head == NULL) {
        // Si la liste est vide, le nœud pointe sur lui-même
        newNode->next = newNode;
        *head = newNode;
    } else {
        Node* temp = *head;

        // On cherche le dernier nœud
        while (temp->next != *head) {
            temp = temp->next;
        }

        // On relie correctement
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;  // Mise à jour du pointeur tête
    }
}

// Insertion en queue
void insertTail(Node** head, int value) {
    Node* newNode = createNode(value);

    if (*head == NULL) {
        // Si liste vide, insertion équivaut à tête
        newNode->next = newNode;
        *head = newNode;
    } else {
        Node* temp = *head;

        // On cherche le dernier nœud
        while (temp->next != *head) {
            temp = temp->next;
        }

        // Insertion après le dernier
        temp->next = newNode;
        newNode->next = *head;
    }
}

// Fonction pour afficher la liste
void displayList(Node* head) {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }

    Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(retour à la tête)\n");
}

// Programme principal
int main() {
    Node* head = NULL;

    // Insertion en tête
    insertHead(&head, 10);
    insertHead(&head, 20);
    insertHead(&head, 30);

    printf("Après insertions en tête :\n");
    displayList(head);

    // Insertion en queue
    insertTail(&head, 40);
    insertTail(&head, 50);

    printf("Après insertions en queue :\n");
    displayList(head);

    return 0;
}