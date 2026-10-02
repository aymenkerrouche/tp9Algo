## Réponse à la question 5

Pour 40 insertions, `realloc` est appelé 3 fois.

Pour 1000 insertions, il est appelé 7 fois : `16, 32, 64, 128, 256, 512, 1024`.