## Exercice 0

### Contenu de annuaire.h

```c
#ifndef ANNUAIRE_H
#define ANNUAIRE_H

#include <stdbool.h>
#define EMAIL_MAX 100

typedef struct {
    char email[EMAIL_MAX];
    int id;
} User;

#endif
```

### Contenu de test.c

Le programme crée un `User`, remplit son adresse avec `snprintf`, puis affiche
l'adresse et l'identifiant.

### Résultat obtenu

```text
Email : alice@mail.com
Identifiant : 1
```

### Tableau des résultats

| Question | Commande / test | Résultat observé |
|---|---|---|
| 3 | Compilation et exécution de `test.c` | Le programme affiche l'email et l'identifiant. |
| 4 | `u.email = "alice@mail.com"` | Erreur de compilation : un tableau ne peut pas être affecté avec `=`. |

### Réponse à la question 5

On ne peut pas affecter une chaîne avec `=` à un tableau de caractères. Il faut
copier la chaîne, par exemple avec `snprintf`.
