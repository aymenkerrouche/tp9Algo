## Exercice 4

| Adresse | Indice obtenu |
|---|---:|
| `alice@mail.com` | 19 |
| `bob@mail.com` | 104 |
| `carole@mail.com` | 747 |
| `david@mail.com` | 189 |
| `eve@mail.com` | 181 |

### Réponse à la question 3

Les trois résultats sont `19`. La même adresse donne toujours le même indice.

### Réponse à la question 4

`user1@mail.com` donne `453` et `user2@mail.com` donne `742`. Ils ne sont pas voisins.

### Réponse à la question 5

Avec `int`, le dépassement peut donner une valeur négative et provoquer un accès hors limites. Il faut utiliser `unsigned long`.

### Réponse à la question 6

Oui, c'est une collision. Ce n'est pas forcément un défaut : on peut la gérer avec le chaînage.
