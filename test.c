#include <stdio.h>

#include "annuaire.h"

#define TAILLE_TABLE 1024

int main(void)
{
    const char *adresses[] = {
        "alice@mail.com",
        "bob@mail.com",
        "carole@mail.com",
        "david@mail.com",
        "eve@mail.com"
    };

    if (seq_search("alice@mail.com"))
    {
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        seq_insert(adresses[i], i + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        if (!seq_search(adresses[i]))
        {
            return 1;
        }
    }

        for (int i = 0; i < 5; i++)
        {
         unsigned long indice = hachage(adresses[i]) % TAILLE_TABLE;
         printf("%s : %lu\n", adresses[i], indice);
        }

        printf("alice@mail.com (repete) : %lu\n",
            hachage("alice@mail.com") % TAILLE_TABLE);
        printf("alice@mail.com (repete) : %lu\n",
            hachage("alice@mail.com") % TAILLE_TABLE);
        printf("alice@mail.com (repete) : %lu\n",
            hachage("alice@mail.com") % TAILLE_TABLE);
        printf("user1@mail.com : %lu\n",
            hachage("user1@mail.com") % TAILLE_TABLE);
        printf("user2@mail.com : %lu\n",
            hachage("user2@mail.com") % TAILLE_TABLE);

    if (seq_search("frank@mail.com") || seq_search("grace@mail.com"))
    {
        seq_free();
        return 1;
    }

    seq_free();

    return 0;
}
