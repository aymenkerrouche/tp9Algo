## Exercice 4

Fonction utilisée : DJB2, avec un accumulateur `unsigned long` :

```c
h = h * 33 + caractere;
```

Avec `TAILLE_TABLE = 1024` :

| Adresse | Indice obtenu |
|---|---:|
| `alice@mail.com` | 19 |
| `bob@mail.com` | 104 |
| `carole@mail.com` | 747 |
| `david@mail.com` | 189 |
| `eve@mail.com` | 181 |

### Réponse à la question 3

`alice@mail.com` donne trois fois l'indice `19`. Une fonction de hachage doit être déterministe : la même entrée doit toujours produire la même valeur.

### Réponse à la question 4

`user1@mail.com` donne `453` et `user2@mail.com` donne `742`. Ces indices ne sont pas voisins.

### Réponse à la question 5

Il faut conserver `unsigned long`. Avec `int`, le dépassement de capacité signé peut produire un comportement indéfini. Selon le compilateur, une valeur négative peut ensuite être utilisée comme indice, ce qui provoquerait un accès hors limites du tableau.

### Réponse à la question 6

Oui, deux adresses différentes peuvent donner le même indice après le modulo : c'est une collision. Ce n'est pas forcément un défaut de la fonction ; une table de hachage doit gérer ces collisions, notamment avec le chaînage.
