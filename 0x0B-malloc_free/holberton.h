char *create_array(unsigned int size, char c);

char *_strdup(char *str);

unsigned int _strlen(char *s);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

int __strlen(char *s);

char **strtow(char *str);

void ch_free_grid(char **grid, unsigned int height);
