#include "annuaire.h"

int main(void)
{
    const char *adresses[] = {
        "alice@mail.com",
        "bob@mail.com",
        "carole@mail.com",
        "david@mail.com",
        "eve@mail.com"
    };

    if (seq_search("alice@mail.com") || hash_search("alice@mail.com"))
    {
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        seq_insert(adresses[i], i + 1);
        hash_insert(adresses[i], i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        if (!seq_search(adresses[i]) || !hash_search(adresses[i]))
        {
            seq_free();
            hash_free();
            return 1;
        }
    }

    if (seq_search("frank@mail.com") || hash_search("frank@mail.com") ||
        seq_search("grace@mail.com") || hash_search("grace@mail.com"))
    {
        seq_free();
        hash_free();
        return 1;
    }

    seq_free();
    hash_free();

    return 0;
}
