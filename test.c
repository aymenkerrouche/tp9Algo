#include <stdio.h>

#include "annuaire.h"

static int tests = 0;
static int reussites = 0;

static void verifier(const char *titre, bool obtenu, bool attendu)
{
    tests++;

    if (obtenu == attendu)
    {
        reussites++;
        printf("[OK] %s\n", titre);
    }
    else
    {
        printf("[ECHEC] %s\n", titre);
    }
}

int main(void)
{
    const char *adresses[] = {
        "alice@mail.com",
        "bob@mail.com",
        "carole@mail.com",
        "david@mail.com",
        "eve@mail.com"
    };

    verifier("sequentiel vide", seq_search("alice@mail.com"), false);
    verifier("hachage vide", hash_search("alice@mail.com"), false);

    for (int i = 0; i < 5; i++)
    {
        seq_insert(adresses[i], i + 1);
        hash_insert(adresses[i], i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        verifier("sequentiel adresse presente", seq_search(adresses[i]), true);
        verifier("hachage adresse presente", hash_search(adresses[i]), true);
    }

    verifier("sequentiel adresse absente 1", seq_search("frank@mail.com"), false);
    verifier("hachage adresse absente 1", hash_search("frank@mail.com"), false);
    verifier("sequentiel adresse absente 2", seq_search("grace@mail.com"), false);
    verifier("hachage adresse absente 2", hash_search("grace@mail.com"), false);
    verifier("sequentiel casse differente", seq_search("Alice@mail.com"), false);
    verifier("hachage casse differente", hash_search("Alice@mail.com"), false);

    seq_free();
    hash_free();

    printf("%d/%d tests reussis\n", reussites, tests);

    return reussites == tests ? 0 : 1;
}
