## Exercice 5

### Fonctions complétées

`hash_insert`, `hash_search` et `hash_free`.

| Recherche | Attendu | Obtenu |
|---|---|---|
| Une adresse présente | `true` | `true` |
| Une adresse absente | `false` | `false` |
| Sur annuaire vide | `false` | `false` |

### Réponse à la question 3

Si on inverse les deux lignes de l'insertion, l'ancienne chaîne est perdue.
Les adresses déjà présentes ne sont donc plus trouvées.

### Réponse à la question 4

Il faut garder `n->next` avant `free(n)`, car le nœud est détruit et son champ
`next` ne doit plus être lu après la libération.