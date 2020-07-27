# Libft
*Ce projet a pour but de reimplementer C une bibliotheque de fonctions
de la librairie C standard, ainsi que d'autres fonctions utilitaires.*

## Partie 1
### Reproduction de fonctions de la lib C :
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memccpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_strlen
* ft_strdup
* ft_strcpy
* ft_strncpy
* ft_strcat
* ft_strncat
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strstr
* ft_strnstr
* ft_strcmp
* ft_strncmp
* ft_atoi
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower


## Partie 2
#### ft_memalloc
> Alloue (avec malloc(3)) et retourne une zone de mémoire
> “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
> échoue, la fonction renvoie NULL.
#### ft_memdel
> Prend en paramètre l’adresse d’un pointeur dont la zone pointée doit être libérée 
> avec free(3), puis le pointeur est mis à NULL.
#### ft_strnew
> Alloue (avec malloc(3)) et retourne une chaîne de caractère
> “fraiche” terminée par un ’\0’. Chaque caractère de la chaîne
> est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.
#### ft_strdel
> Prend en paramètre l’adresse d’une chaîne de caractères qui
> doit être libérée avec free(3) et son pointeur mis à NULL.
#### ft_strclr
> Assigne la valeur ’\0’ à tous les caractères de la chaîne passée
> en paramètre.
#### ft_striter
> Applique la fonction f à chaque caractère de la chaîne de
> caractères passée en paramètre. Chaque caractère est passé
> par adresse à la fonction f afin de pouvoir être modifié si
> nécessaire.
#### ft_striteri
> Applique la fonction f à chaque caractère de la chaîne de
> caractères passée en paramètre en précisant son indice en premier argument.
> Chaque caractère est passé par adresse à la
> fonction f afin de pouvoir être modifié si nécessaire.
#### ft_strmap
> Applique la fonction f à chaque caractère de la chaîne de caractères
> passée en paramètre pour créer une nouvelle chaîne
> “fraiche” (avec malloc(3)) résultant des applications successives de f.
#### ft_strmapi
> Applique la fonction f à chaque caractère de la chaîne de
> caractères passée en paramètre en précisant son indice pour
> créer une nouvelle chaîne “fraiche” (avec malloc(3)) résultant
> des applications successives de f.
#### ft_strequ
> Compare lexicographiquement s1 et s2. Si les deux chaînes
> sont égales, la fonction retourne 1, ou 0 sinon.
#### ft_strnequ
> Compare lexicographiquement s1 et s2 jusqu’à n caractères
> maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
> chaînes sont égales, la fonction retourne 1, ou 0 sinon.
#### ft_strsub
> Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
> tronçon de la chaîne de caractères passée en paramètre. Le
> tronçon commence à l’indice start et a pour longueur len. Si
> start et len ne désignent pas un tronçon de chaîne valide,
> le comportement est indéterminé. Si l’allocation échoue, la
> fonction renvoie NULL.
#### ft_strjoin
> Alloue (avec malloc(3)) et retourne une chaîne de caractères
> “fraiche” terminée par un ’\0’ résultant de la concaténation
> de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
#### ft_strtrim
> Alloue (avec malloc(3)) et retourne une copie de la chaîne
> passée en paramètre sans les espaces blancs au debut et à la
> fin de cette chaîne. On considère comme espaces blancs les
> caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
> blancs au début ou à la fin, la fonction renvoie une copie de
> s. Si l’allocation echoue, la fonction renvoie NULL.
#### ft_strsplit
> Alloue (avec malloc(3)) et retourne un tableau de chaînes de
> caractères “fraiches” (toutes terminées par un ’\0’, le tableau
> également donc) résultant de la découpe de s selon le caractère
> c. Si l’allocation echoue, la fonction retourne NULL.
#### ft_itoa
> Alloue (avec malloc(3)) et retourne une chaîne de caractères
> “fraiche” terminée par un ’\0’ représentant l’entier n passé
> en paramètre. Les nombres négatifs doivent être gérés.
> Si l’allocation échoue, la fonction renvoie NULL.
#### ft_putchar
> Affiche le caractère c sur la sortie standard.
#### ft_putstr
> Affiche la chaîne s sur la sortie standard.
#### ft_putendl
> Affiche la chaîne s sur la sortie standard suivi d’un ’\n’.
#### ft_putnbr
> Affiche l’entier n sur la sortie standard.
#### ft_putchar_fd
> Ecrit le caractère c sur le descripteur de fichier fd.
#### ft_putstr_fd
> Ecrit la chaîne s sur le descripteur de fichier fd.
#### ft_putendl_fd
> Ecrit la chaîne s sur le descripteur de fichier fd suivi d’un ’\n’.
#### ft_putnbr_fd
> Ecrit l’entier n sur le descripteur de fichier fd.


## Partie Bonus
#### ft_lstnew
> Alloue (avec malloc(3)) et retourne un maillon “frais”. Les
> champs content et content_size du nouveau maillon sont initialisés par
> copie des paramètres de la fonction. Si le paramètre content est nul,
> le champs content est initialisé à NULL et le champs content_size est
> initialisé à 0 quelque soit la valeur du paramètre content_size. Le champ next
> est initialisé à NULL. Si l’allocation échoue, la fonction renvoie NULL.
#### ft_lstdelone
> Prend en paramètre l’adresse d’un pointeur sur un maillon et
> libère la mémoire du contenu de ce maillon avec la fonction
> del passée en paramètre puis libère la mémoire du maillon
> en lui même avec free(3). La mémoire du champ next ne
> doit en aucun cas être libérée. Pour terminer, le pointeur sur
> le maillon maintenant libéré doit être mis à NULL (de manière
> similaire à la fonction ft_memdel de la partie obligatoire).
#### ft_lstdel
> Prend en paramètre l’adresse d’un pointeur sur un maillon et libère la mémoire
> de ce maillon et celle de tous ses successeurs l’un après l’autre avec del et free(3).
> Pour terminer, le pointeur sur le premier maillon maintenant libéré doit être
> mis à NULL (de manière similaire à la fonction ft_memdel de la partie obligatoire).
#### ft_lstadd
> Ajoute l’élément new en tête de la liste.
#### ft_lstiter
> Parcourt la liste lst en appliquant à chaque maillon la fonction f.
#### ft_lstmap
> Parcourt la liste lst en appliquant à chaque maillon la fonction f et crée
> une nouvelle liste “fraiche” avec malloc(3) résultant des applications successives.
> Si une allocation échoue, la fonction renvoie NULL.


## Get_next_line
Retourne une ligne lue depuis un file descriptor (gestion de plusieurs file descriptors simultanément).


## Ft_printf
Reproduction de la fonction printf
* Conversion gérés: cspdiuoXxfr%*.
* Ajout de la conversion b pour base binaire.
* Flags gérés: h,hh,l,ll,L,z,j,#,0,-,+
* Precision et taille minimum de champs.
* Fonctions ft_dprintf et ft_asprintf.
* Gestion des couleurs.


## Partie Personnelle
### #String Vectors (Amartino/Fkante)
Un vecteur est ici un conteneur qui peut contenir une string.
Toutes les allocations, redimensionnements et optimisations de la taille du conteneur
sont gérés en interne par les fonctions elle-mêmes.
Ils sont definis par la structure suivante:

    typedef struct	s_vector
    {
	      char      *str;
          size_t    len;
	      size_t    size;
	      size_t    scale;
    }               t_vector;

#### vct_addchar
> Ajoute un caractère à la fin du vecteur.
#### vct_addchar_at
> Remplace un caractère à l'indice donné.
#### vct_addnb
> Transforme un nombre en string et l'ajoute à la fin du vecteur.
#### vct_addnstr
> Ajoute une string sur n octets à la fin du vecteur.
#### vct_addstr
> Ajoute une string à la fin du vecteur.
#### vct_addstr_at
> Ajoute une string à l'indice donné en décalacant les caractères présents si ceux-ci existent.
#### vct_apply
> Applique une fonction de test (ex: is_upper) ou de modification (to_upper) à un vecteur.
#### vct_bzero
> Remplit le vecteur d'octets contenant '\0'.
#### vct_cat
> Concatène deux vecteurs.
#### vct_chr
> Renvoie l'indice de la première occurence du caractère recherché ou -1 si celui-ci n'a pas été trouvé.
#### vct_chr_count
> Renvoie le nombre d'occurence d'un caractère dans un vecteur.
#### vct_chr_str
> Renvoie l'indice du début de la string recherchée dans un vecteur ou -1 si celle-ci n'a pas été trouvée
#### vct_chr_str_count
> Renvoie le nombre d'occurence d'une string dans un vecteur.
#### vct_del
> Supprime un vecteur (free et assigne à NULL).
#### vct_del_tab
> Supprime un tableau de vecteurs (free et assigne à NULL).
#### vct_del_tab_content
> Supprime le contenu d'un tableau de vecteurs (free et assigne à NULL).
#### vct_dprint
> Imprime le vecteur sur le fd donné et retourne le nombre de bytes écrits ou -1 en cas d'erreur.
#### vct_dprint_debug
> Imprime le vecteur sur le fd donné avec des info de debug.
#### vct_dup
> Duplique un vecteur.
#### vct_dup_from
> Duplique un vecteur depuis l'indice donné.
#### vct_fill_after
> Ajoute n fois le caractère c à la fin du vecteur.
#### vct_fill_before
> Ajoute n fois le caractère c au début du vecteur.
#### vct_get_file
> Stock dans un vecteur un fichier donné.
#### vct_getchar_at
> Renvoie le caractère de l'indice donné.
#### vct_getstr
> Renvoie un pointeur sur la string du vecteur.
#### vct_increase_scale
> Augmente la taille du bloc allouée pour le vecteur.
#### vct_join
> Joins les chaines contenues dans deux vecteurs dans un nouveau vecteur.
#### vct_joinfree
> Joins les chaines contenues dans deux vecteurs dans un nouveau vecteur et libère l'un, l'autre ou les deux.
#### vct_len
> Renvoie la taille de la chaine contenue dans un vecteur.
#### vct_ndup
> Duplique un vecteur sur au maximum n octets.
#### vct_ndup_from
> Duplique un vecteur sur au maximum n octets depuis l'indice donné.
#### vct_new
> Initialise un nouveau vecteur de la taille passée en paramètre.
> Si la taille est de 0, la taille sera initialisée à la valeur définie par VCT_DEFAULT_SIZE.
#### vct_newstr
> Initialise un nouveau vecteur avec la chaine passée en paramètre.
#### vct_pop
> Supprime un nombre de charactères passé en paramètre de la fin du vecteur.
#### vct_pop_from
> Supprime un nombre de charactères passé en paramètre à l'indice donné du vecteur.
#### vct_print
> Ecrit sur la sortie standard un vecteur.
#### vct_print_nl
> Ecrit sur la sortie standard un vecteur avec un '\n'.
#### vct_print_tab
> Ecrit sur la sortie standard un tableau de vecteurs avec un '\n'.
#### vct_pushstr
> Ajoute une chaine de caractère au début du vecteur.
#### vct_read_line
> Alloue une ligne lue depuis un file descriptor.
#### vct_replace_char
> Remplace tous les charactères donnés dans une string par le charactère passé en paramètre.
#### vct_replace_char_at
> Remplace le charactères à l'indice donné dans une string par le charactère passé en paramètre.
#### vct_replace_str
> Remplace toutes les occurences de la chaine de caractère donnée 'str' d'un vecteur par la chaine de caractère passée en paramètre 'replace'.
#### vct_split
> Divise la chaine de caractère contenue dans le vecteur à chaque occurence du caractère passé en paramètre. La fonction retourne un pointeur sur le tableau de vecteurs crée.
#### vct_strequ
> Compare les chaines de caractère de deux vecteurs.
#### vct_strnequ
> Compare les chaines de caractère de deux vecteurs jusqu'à l'indice donné.
#### vct_sub
> Renvoie un nouveau vecteur étant la suvdivision d'un autre.

### #Dynamic Arrays (Amartino/Fkante)
Les tableaux dynamiques sont agnostiques de ce qu'il y a dans le contenu.\
Vous devrez lui passer en paramètre la fonction de nettoyage appropriée. AUCUNE FUITE NE PEUT ÊTRE TOLÉRÉE.\
Il faut ajouter la fonction dans `del_function.c`. Lorsque vous appelez `darray_clear_content` ou `darray_clear_destroy`, transmettez la fonction del que vous avez créée.\

`max` est le nombre de bloc initialement malloc
`end` est l'index qui définit le dernier élément attribué
`sizeof_elem` est la taille d'octet de chaque élément du contenu
`expand_rate` quand `end` >= `max`, alors nous étendons le tableau par le `expand_rate`

	typedef struct	s_darray
	{
		size_t		end;
		size_t		max;
		size_t		sizeof_elem;
		size_t		expand_rate;
		void		**contents;
    }               t_darray;

### #Autres Fonctions
Reproduction de fonctions de la lib C :

#### ft_itoa_base
> Alloue (avec malloc(3)) et retourne une chaîne de caractères
> “fraiche” terminée par un ’\0’ représentant l’entier value passé
> en paramètre dans la base donné. Les nombres négatifs doivent être gérés.
> Si l’allocation échoue, la fonction renvoie NULL.
#### ft_pow
> Renvoie le nombre n à la puissance p.
#### ft_abs
> Renvoie la valeur absolue d'un nombre.
#### ft_sqrt
> Renvoie la racine carré du nombre passé en paramètre.
