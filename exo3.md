## Exercice 3

La recherche compare les adresses dans l'ordre avec `strcmp`.

- Réussites : `alice@mail.com`, `bob@mail.com`, `carole@mail.com`.
- Échecs : `frank@mail.com`, `grace@mail.com`.
- Annuaire vide : `false`.

### Réponse à la question 4

Le programme compile, mais on compare les adresses mémoire et non le contenu.
La recherche renvoie donc généralement `false`.

### Réponse à la question 5

- Favorable : 1 comparaison, si l'adresse est la première.
- Moyen : environ `n / 2`, si elle est au milieu.
- Défavorable : `n`, si elle est la dernière ou absente.