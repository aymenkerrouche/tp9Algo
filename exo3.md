## Exercice 3

La recherche séquentielle compare l'adresse recherchée avec chaque utilisateur,
dans l'ordre, avec `strcmp`.

- Trois recherches réussissent : `alice@mail.com`, `bob@mail.com` et `carole@mail.com`.
- Deux recherches échouent : `frank@mail.com` et `grace@mail.com`.
- Sur un annuaire vide, la recherche renvoie `false` sans accéder au tableau.

### Réponse à la question 4

Remplacer `strcmp(...) == 0` par `... == email` compare des adresses mémoire,
pas le contenu des chaînes. Le programme compile, mais la recherche renvoie
généralement `false`, même pour une adresse présente, car les pointeurs sont
différents.

### Réponse à la question 5

- Cas favorable : 1 comparaison, lorsque l'adresse recherchée est la première.
- Cas moyen : environ `n / 2` comparaisons, lorsque l'adresse est au milieu.
- Cas défavorable : `n` comparaisons, lorsque l'adresse est la dernière ou absente.