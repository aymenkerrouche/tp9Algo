#include "annuaire.h"

#define TAILLE_TABLE 1024

unsigned long hachage(const char *email)
{
    unsigned long h = 5381;
    int c;

    while ((c = (unsigned char)*email++))
    {
        h = h * 33 + (unsigned long)c;
    }

    return h;
}