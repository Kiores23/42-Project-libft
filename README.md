# Libft

Libft est une bibliothèque en C regroupant des fonctions standard de la libc ainsi que des fonctions utilitaires personnalisées. Ce projet fait partie du cursus de l'école 42 et constitue une base réutilisable pour de futurs projets.

## Sommaire
- [Introduction](#introduction)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [Exemples](#exemples)
- [Auteur](#auteur)

## Introduction
Le projet **Libft** a pour objectif de réimplémenter des fonctions de la bibliothèque standard du C telles que `memset`, `strdup`, `atoi`, etc. En plus de ces fonctions de base, des fonctions supplémentaires sont développées pour faciliter la gestion de chaînes de caractères, de listes chaînées et de la mémoire.

## Fonctionnalités
- **Fonctions de gestion de la mémoire :** `memset`, `memcpy`, `bzero`, `calloc`, etc.
- **Fonctions de manipulation de chaînes :** `strlen`, `strchr`, `strrchr`, `strnstr`, etc.
- **Fonctions de conversion :** `atoi`, `itoa`.
- **Fonctions de gestion de caractères :** `isalpha`, `isdigit`, `isalnum`, `toupper`, `tolower`, etc.
- **Listes chaînées :** création, ajout, suppression, itération, etc.

## Installation
1. Clonez le dépôt :
   ```bash
   git clone git@github.com:Kiores23/42-Project-libft.git
   cd 42-Project-libft
   cd libft
   ```
2. Compilez la bibliothèque :
   ```bash
   make
   ```
3. Compilez la bibliothèque avec les bonus:
   ```bash
   make bonus
   ```
4. Pour nettoyer les fichiers objets :
   ```bash
   make clean
   ```
5. Pour nettoyer les fichiers objets et la bibliothèque compilée :
   ```bash
   make fclean
   ```
6. Pour recompiler à partir de zéro :
   ```bash
   make re
   ```

## Utilisation
Pour utiliser **Libft** dans votre projet C :
```c
#include "libft.h"
```

Lors de la compilation, liez la bibliothèque :
```bash
gcc -L. -lft votre_fichier.c -o votre_programme
```

## Structure du projet
```
libft/
├── Makefile
├── includes/
│   └── libft.h
├── srcs/
│   ├── ft_memset.c
│   ├── ft_strchr.c
│   └── ...
├── srcs_bonus/
│   └── ft_lstnew.c
└── libft.a
```

## Exemples
```c
#include "libft.h"
#include <stdio.h>

int main(void) {
    char str[50] = "Hello, 42!";
    ft_memset(str + 7, '*', 3);
    printf("%s\n", str); // Affiche : Hello, ***!
    return 0;
}
```

## Auteur
- **Nom :** Alexis Mery
- **Email :** amery@student.42nice.fr
- **GitHub :** [Kiores23](https://github.com/kiores23)

---

*Ce projet a été réalisé dans le cadre du cursus de l'école 42.*

