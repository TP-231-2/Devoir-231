# Gestion de Listes Doublement Chaînées Circulaires

## Description
Ce programme implémente une liste doublement chaînée circulaire en langage C, permettant à l'utilisateur d'effectuer des insertions en tête ou en queue selon son choix.

## Structure de Données
```c
typedef struct cellule{
    int val;
    struct cellule* next;
    struct cellule* pre;
} cellule;
```

Chaque élément (cellule) contient :
- `val` : la valeur entière stockée
- `next` : pointeur vers l'élément suivant
- `pre` : pointeur vers l'élément précédent

## Fonctions Implémentées

### 1. `insert_tete(cellule** liste, int v)`
**Insertion en tête de liste**
- Crée un nouvel élément avec la valeur `v`
- L'insère au début de la liste
- Maintient la circularité de la liste
- Met à jour le pointeur de tête

### 2. `insert_queue(cellule** liste, int v)`
**Insertion en queue de liste**
- Crée un nouvel élément avec la valeur `v`
- L'insère à la fin de la liste
- Maintient la circularité de la liste
- Ne modifie pas le pointeur de tête

### 3. `afficher_liste(cellule* liste)`
**Affichage de la liste**
- Parcourt et affiche tous les éléments de la liste
- Gère le cas de la liste vide
- S'arrête quand le parcours revient à l'élément de départ

### 4. `liberer_liste(cellule** liste)`
**Libération de la mémoire**
- Libère tous les éléments de la liste
- Évite les fuites de mémoire
- Réinitialise le pointeur de liste à `NULL`

## Caractéristiques des Listes Doublement Chaînées Circulaires

- **Doublement chaînée** : Chaque élément pointe vers son prédécesseur et son successeur
- **Circulaire** : Le dernier élément pointe vers le premier, et le premier vers le dernier
- **Avantages** :
  - Accès rapide au premier et dernier élément
  - Parcours possible dans les deux sens
  - Pas de cas particulier pour les extrémités

## Compilation et Exécution

### Compilation
```bash
gcc -o liste_circulaire main.c
```

### Exécution
```bash
./liste_circulaire
```

## Exemple d'Utilisation

```
Entrer le nombre d'elements : 3

Element 1 : 10
1. Insertion en tete
2. Insertion en queue
Votre choix : 1
Liste : 10

Element 2 : 20
1. Insertion en tete
2. Insertion en queue
Votre choix : 2
Liste : 10 20

Element 3 : 30
1. Insertion en tete
2. Insertion en queue
Votre choix : 1
Liste : 30 10 20

Liste finale : 30 10 20
```

## Comportement des Insertions

### Insertion en tête
- Nouvel élément devient la nouvelle tête
- Ancienne tête devient second élément
- Structure préservée : [Nouveau] → [Ancienne tête] → ... → [Dernier] → [Nouveau]

### Insertion en queue
- Nouvel élément devient le dernier
- Tête reste inchangée
- Structure préservée : [Tête] → ... → [Ancien dernier] → [Nouveau] → [Tête]

## Gestion de la Mémoire

Le programme utilise `malloc()` pour l'allocation dynamique et `liberer_liste()` pour libérer toute la mémoire allouée, évitant ainsi les fuites de mémoire.

## Auteur
OTTOU ABANDA DAVID NATHANAEL 
MATRICULE:24G2804
Programme écrit en langage C pour démontrer la manipulation des listes doublement chaînées circulaires.
