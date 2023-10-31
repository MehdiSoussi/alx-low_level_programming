char *create_array(unsigned int size, char c);

char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

char *str_concat(char *s1, char *s2);
char *_strcat(int type_pointer , char *dest, char *src);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);
void checkempty_function(char *str, int *checkempty);
void denotes_start_function(char **p, int *denotes_start, int* count);