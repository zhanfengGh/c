#define NKEYS 1000
struct Key {
    char *word;
    int count;
} key_tabs[] = {{"auto", 0},
                {"break", 0},
                {"case", 0},
                {"char", 0},
                {"const", 0},
                {"continue", 0},
                {"default", 0},
                /* ... */
                {"unsigned", 0},
                {"void", 0},
                {"volatile", 0},
                {"while", 0}};
