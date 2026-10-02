#include <stdio.h>

#include "annuaire.h"

int main(void)
{
    char email[EMAIL_MAX];

    for (int i = 0; i < 40; i++)
    {
        snprintf(email, EMAIL_MAX, "user%d@mail.com", i + 1);
        seq_insert(email, i + 1);
    }

    seq_free();

    return 0;
}
