# libft-strutils

Réimplémentation en C de fonctions utilitaires de manipulation de chaînes de
la bibliothèque standard, à but pédagogique : maîtrise des pointeurs, de
l'allocation dynamique et de la gestion des cas limites.

## Fonctions

| Fonction | Prototype | Description |
|----------|-----------|-------------|
| `ft_strdup` | `char *ft_strdup(const char *src)` | Duplique une chaîne dans une zone mémoire allouée avec `malloc`. Renvoie `NULL` si `src` est `NULL` ou en cas d'échec d'allocation. La libération de la mémoire est à la charge de l'appelant. |

## Structure

```
.
├── include/
│   └── ft_strutils.h    Prototypes et inclusions
├── src/
│   └── ft_strdup.c      Implémentation
└── tests/
    └── test_all.c       Programme de test
```

## Compilation et tests

```bash
gcc -Wall -Wextra -Werror -Iinclude src/ft_strdup.c tests/test_all.c -o test_all
./test_all
```

Vérification mémoire avec Valgrind :

```bash
valgrind --leak-check=full ./test_all
```

## Auteur

JAuxance
