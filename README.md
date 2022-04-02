<h3>Part 1:</h3>
<ul>
<li>memset</li><li>bzero</li>
<li>memcpy</li><li>memccpy</li><li>memmove</li><li>memchr</li><li>memcmp</li><li>strlen</li><li>isalpha</li><li>isdigit</li><li>isalnum</li><li>isascii</li><li>isprint</li>
<li>toupper</li><li>tolower</li><li>strchr</li><li>strrchr</li><li>strncmp</li><li>strlcpy</li><li>strlcat</li><li>strnstr</li><li>atoi</li><li>calloc</li><li>strdup</li>
</ul>

<h3>Part 2:</h3>
<ul>

<li>
<br><strong>Function name</strong>
ft_substr
<br><strong>Prototype</strong>
char *ft_substr(char const *s, unsigned int start,
size_t len);
<br><strong>Paramètres</strong>
#1. La chaine de laquelle extraire la nouvelle
chaine
#2. L’index de début de la nouvelle chaine
#3. La taille maximale de la nouvelle chaine.
<br><strong>Valeur de retour</strong>
The nouvelle chaine de caractere. NULL si
l’allocation échoue.
<br><strong>Fonctions externes autorisées</strong>
malloc
<br><strong>Description</strong>
Alloue (avec malloc(3)) et retourne une chaine de
caractères issue de la chaine donnée en argument
Cette nouvelle chaine commence à l’index ’start’ et
a pour taille maximale ’len’
<li>

<li>
<br><strong>Function name</strong>
ft_strjoin
<br><strong>Prototype</strong>
char *ft_strjoin(char const *s1, char const *s2);
<br><strong>Paramètres</strong>
#1. La chaine de caractères préfixe.
#2. La chaine de caractères suffixe.
<br><strong>Valeur de retour</strong>
La nouvelle chaine de caractères. NULL si
l’allocation échoue
<br><strong>Fonctions externes autorisées</strong>
malloc
<br><strong>Description</strong>
Alloue (avec malloc(3)) et retourne une nouvelle
chaine, résultat de la concaténation de s1 et s2.
</li>

<li>
<strong>Function name</strong>
ft_strtrim
<br><strong>Prototype</strong>
char *ft_strtrim(char const *s1, char const *set);
<br><strong>Paramètres</strong>
#1. La chaine de caractères à trimmer.
#2. Le set de reference de caractères à trimmer.
<br><strong>Valeur de retour</strong>
La chaine de caractères trimmée. NULL si
l’allocation échoue.
<br><strong>Fonctions externes autorisées</strong>
malloc
<br><strong>Description</strong>
Alloue (avec malloc(3)) et retourne une copie de la
chaine de caractères donnée en argument, sans les
caractères spécifiés dans le set donné en argument
au début et à la fin de la chaine de caractères.
</li>

<li>
<strong>Function name</strong>
ft_split
<br><strong>Prototype</strong>
char **ft_split(char const *s, char c);
<br><strong>Paramètres</strong>
#1. La chaine de caractères à découper.
#2. Le caractère délimitant.
<br><strong>Valeur de retour</strong>
Le tableau de nouvelles chaines de caractères,
résultant du découpage. NULL si l’allocation
échoue.
<br><strong>Fonctions externes autorisées</strong>
malloc, free
<br><strong>Description</strong>
Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant s à
l’aide du caractère c, utilisé comme délimiteur. Le
tableau doit être terminé par NULL.
</li>

<li>
<strong>Function name</strong>
ft_ito
<br><strong>Prototype</strong>
char *ft_itoa(int n);
<br><strong>Paramètres</strong>
#1. l’integer à convertir.
<br><strong>Valeur de retour</strong>
La chaine de caractères représentant l’integer.
NULL si l’allocation échoue.
<br><strong>Fonctions externes autorisées</strong>
malloc
<br><strong>Description</strong>
Alloue (avec malloc(3)) et retourne une chaine de
caractères représentant l’integer reçu en argument.
Les nombres négatifs doivent être gérés.
</li>

<li>
<strong>Function name</strong>
ft_strmapi
<br><strong>Prototype</strong>
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
<br><strong>Paramètres</strong>
#1. La chaine de caractères sur laquelle itérer
#2. La fonction à appliquer à chaque caractère.
<br><strong>Valeur de retour</strong>
La chaine de caractères résultant des applications
successives de f. Retourne NULL si l’allocation
échoue.
<br><strong>Fonctions externes autorisées</strong>
malloc
<br><strong>Description</strong>
Applique la fonction f à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de f.
</li>

<li>
<strong>Function name</strong>
ft_putchar_fd
<br><strong>Prototype</strong>
void ft_putchar_fd(char c, int fd);
<br><strong>Paramètres</strong>
#1. Le caractère à écrire
#2. Le file descriptor sur lequel écrire.
<br><strong>Valeur de retour</strong>
None
<br><strong>Fonctions externes autorisées</strong>
write
<br><strong>Description</strong>
Écrit le caractère c sur le file descriptor donné.
</li>

<li>
<strong>Function name</strong>
ft_putstr_fd
<br><strong>Prototype</strong>
void ft_putstr_fd(char *s, int fd);
<br><strong>Paramètres</strong>
#1. La chaine de caractères à écrire
#2. Le file descriptor sur lequel écrire.
<br><strong>Valeur de retour</strong>
None
<br><strong>Fonctions externes autorisées</strong>
write
<br><strong>Description</strong>
Écrit la chaine de caractères s sur le file
descriptor donné.
</li>

<li>
<strong>Function name</strong>
ft_putendl_fd
<br><strong>Prototype</strong>
void ft_putendl_fd(char *s, int fd);
<br><strong>Paramètres</strong>
#1. La chaine de caractères à écrire
#2. Le file descriptor sur lequel écrire.
<br><strong>Valeur de retour</strong>
None
<br><strong>Fonctions externes autorisées</strong>
write
<br><strong>Description</strong>
Écrit La chaine de caractères s sur le file
descriptor donné, suivie d’un retour à la ligne.
</li>

<li>
<strong>Function name</strong>
ft_putnbr_fd
<br><strong>Prototype</strong>
void ft_putnbr_fd(int n, int fd);
<br><strong>Paramètres</strong>
#1. L’integer à écrire
#2. Le file descriptor sur lequel écrire
<br><strong>Valeur de retour</strong>
None
<br><strong>Fonctions externes autorisées</strong>
write
<br><strong>Description</strong>
Écrit l’integer n sur le file descriptor donné.
</li>

</ul>
