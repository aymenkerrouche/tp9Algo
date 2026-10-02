## Exercice 6

Le banc de test vérifie les deux méthodes sur les mêmes données :

- annuaire vide ;
- cinq adresses présentes ;
- deux adresses absentes ;
- une adresse avec une casse différente.

Chaque test affiche `[OK]` ou `[ECHEC]`. Le programme libère les deux
structures et renvoie `0` si tous les tests réussissent.

### Sortie obtenue

```text
[OK] sequentiel vide
[OK] hachage vide
[OK] sequentiel adresse presente
[OK] hachage adresse presente
[OK] sequentiel adresse presente
[OK] hachage adresse presente
[OK] sequentiel adresse presente
[OK] hachage adresse presente
[OK] sequentiel adresse presente
[OK] hachage adresse presente
[OK] sequentiel adresse presente
[OK] hachage adresse presente
[OK] sequentiel adresse absente 1
[OK] hachage adresse absente 1
[OK] sequentiel adresse absente 2
[OK] hachage adresse absente 2
[OK] sequentiel casse differente
[OK] hachage casse differente
18/18 tests reussis
```

### Code de retour

`0`