void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *s);
char *_strncat(unsigned int empty, char *dest, char *src, unsigned int n , unsigned int s1_length);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

void _puts(char *str);
void print_number(int n);
int power(int ten, int to_the_power);
int _atoi(char *s);
char *find_number_head(char *x, int *found);
int positive_negative_none(char *x, char *start);