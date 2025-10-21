/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <rydelepi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:27:32 by rydelepi          #+#    #+#             */
/*   Updated: 2025/10/21 15:55:58 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}	t_list;

/**
 * @details
 * @brief char -> int
 * @param char*str chaine de caractere
 * @return int sign * total
 */
int				ft_atoi(char *str);
/**
 * @details
 * @brief Met tout a zero
 * @param void*s adresse zone memoire  
 * @param size_tn nombre d'octets a 0 
 * @return s (zone memoire)
 */
void			ft_bzero(void *s, size_t n);
/**
 * @details
 * @brief Contiguous allocation (alloue et init a 0)
 * @param size_t count, size_t size 
 * @return ptr = malloc(total)
 */
void			*ft_calloc(size_t count, size_t size);
/**
 * @details
 * @brief est alphanumerique 
 * @param int c caractere a verifier
 * @return 1 ou 0
 */
int				ft_isalnum(int c);
/**
 * @details
 * @brief est une lettre 
 * @param int c caractere a verifier
 * @return 1 ou 0
 */
int				ft_isalpha(int c);
/**
 * @details
 * @brief est ascii 
 * @param int c caractere a verifier
 * @return 1 ou 0
 */
int				ft_isascii(int c);
/**
 * @details
 * @brief est un chiffre 
 * @param int c caractere a verifier
 * @return 1 ou 0
 */
int				ft_isdigit(int c);
/**
 * @details
 * @brief est printable 
 * @param int c caractere a verifier
 * @return 1 ou 0
 */
int				ft_isprint(int c);
/**
 * @details
 * @brief int -> char 
 * @param int.n caractere a transformer
 * @return chaine de caractere
 */
char			*ft_itoa(int n);
/**
 * @details
 * @brief scanne les n premiers byte d'une zone mem pointee par s
 * @param const.void.*s la zone memoire
 * @param int.c caractere a trouver
 * @param size_t.n nombre de bytes a scanner
 * @return pointeur vers l'octet find
 */
void			*ft_memchr(const void *s, int c, size_t n);
/**
 * @details
 * @brief compare les n premiers bytes de deux strings
 * @param const.void.*s1 chaine 1
 * @param const.void.*s2 chaine 2
 * @param size_t.n nombre de bytes a comparer
 * @return int (difference ascii des 2 chaines)
 */
int				ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @details
 * @brief copie les n premiers byte de deux strings
 * @param const.void.*src source
 * @param void.*dest destination
 * @param size_t.n nombre de bytes a copier
 * @return dest
 */
void			*ft_memcpy(void *dest, const void *src, size_t n);
/**
 * @details
 * @brief deplace une memoire tampon vers une autre
 * @param const.void.*src source
 * @param void.*dest destination
 * @param size_t.n nombre de bytes a deplacer
 * @return dest
 */
void			*ft_memmove(void *dest, const void *src, size_t n);
/**
 * @details
 * @brief definit n premiers caracteres de dest en fonction de c
 * @param void.*b destination
 * @param int.c caractere a definir
 * @param size_t.len nombres de caracteres a changer
 * @return destination (b)
 */
void			*ft_memset(void *b, int c, size_t len);
/**
 * @details
 * @brief affiche un caractere 
 * @param char.c caractere a afficher
 * @param int.fd file descriptor , definit la sortie
 * @return void
 */
void			ft_putchar_fd(char c, int fd);
/**
 * @details
 * @brief definit n premiers caracteres de dest en 
 * fonction de c et saute une ligne
 * @param char.c caractere a definir
 * @param int.fd file descriptor , definit la sortie
 * @return void
 */
void			ft_putendl_fd(char *s, int fd);
/**
 * @details
 * @brief definit n premiers caracteres de dest en 
 * fonction de c et saute une ligne
 * @param int.nb caractere a definir
 * @param int.fd file descriptor , definit la sortie
 * @return void
 */
void			ft_putnbr_fd(int nb, int fd);
/**
 * @details
 * @brief lit une chaine de caractere
 * @param char.*str chaine de caractere
 * @param int.fd file descriptor , definit la sortie
 * @return void
 */
void			ft_putstr_fd(char *str, int fd);
/**
 * @details
 * @brief decoupe une chaine *s en "mots" separes par le caractere c
 * @param char.const.*s chaine de caaracteres
 * @param char.c separateur
 * @return tableau de char termine par NULL
 */
char			**ft_split(char const *s, char c);
/**
 * @details
 * @brief duplique une chaine de caractere dans une var dest
 * @param char.src chaine de caractere a dupliquer
 * @return dest
 */
char			*ft_strdup(char *src);
/**
 * @details
 * @brief applique une fonction sur chaque bytes de *s
 * @param char.s 
 * @param void.(*f).(unsigned int, char *) fonction a appliquer
 * @return void
 */
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
 * @details
 * @brief met bout a bout deux chaines
 * @param int.size 
 * @param char.const.*s1 chaine 1
 * @param char.const.*s2 chaine 2
 * @return return une chaine de caractere contenant les deux chaines
 */
char			*ft_strjoin(char const *s1, char const *s2);
/**
 * @details
 * @brief concatene des elements d'un tableau src vers dest en fonction de size
 * @param char *d destination 
 * @param const.char.*s source
 * @param size_t.dstsize taille des elements a concatener
 * @return taille totale de la string qu'elle cree
 */
size_t			ft_strlcat(char *dst, const char *src, size_t size);
/**
 * @details
 * @brief copie des elements d'un tableau src vers dest en fonction de size
 * @param char *dst destination 
 * @param const.char.*src source
 * @param size_t.dstsize taille des elements a copier
 * @return taille totale de la string qu'elle cree
 */
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @details
 * @brief compte le nombre d'element d'une chaine de caractere
 * @param const.char.*str chaine de caractere
 * @return taille de src
 */
size_t			ft_strlen(const char *str);
/**
 * @details
 * @brief compare deyx chaines de caracteres sur n caracteres
 * @param const.char.*s1 chaine 1
 * @param const.char.*s2 chaine 2
 * @param unsigned.int.n nombre de caracteres a comparer
 * @return 0 ou la difference asqii des caracteres des deux chaines
 */
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
/**
 * @details
 * @brief prends un extrait de texte a partir de start, 
 * en copiant n caracteres
 * @param const.char.*s chaine de caractere a parcourir
 * @param unsigned.int.start caractere de depart de la lecture
 * @param size_t.len taille de la chaine a renvoyer
 * @return une chaine malloc sub renvoyant les caracteres 
 * depuis start en fonction de n
 */
char			*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @details
 * @brief applique un +32 a chaque caractere c
 * @param int.c caractere a modifier
 * @return le caractere modifie
 */
int				ft_tolower(int c);
/**
 * @details
 * @brief applique un -32 a chaque caractere c
 * @param int.c caractere a modifier
 * @return le caractere modifie
 */
int				ft_toupper(int c);
/**
 * @details
 * @brief cherche la premiere occurence de needle dans h
 *  en fonction de len
 * @param const.char.*haystack meule de foin
 * @param const.char.*needle aiguille
 * @param size_t.len nombres de caracteres a lire 
 * dans haystack
 * @return char , pointeur sur le debut de l'occurence sinon NULL
 */
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
/**
 * @details
 * @brief applique une fonction qui applique la fonction f 
 * aux caracteres d'une chaine s
 * @param char.const.*s chaine de caractere
 * @param char.(*f)(unsigned int, char) fonction a appliquer
 * a chque caracters
 * @return nouvelle chaine de caractere avec les caracteres modifies
 */				
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @details
 * @brief renvoie toute la chaine de caractere depuis la premiere 
 * occurence de c 
 * @param char.const.*s chaine de caractere
 * @param int.c caractere a trouver 
 * @return nouvelle chaine de caractere s depuis 
 * le premier c rencontre sinon NULL
 */	
char			*ft_strchr(const char *s, int c);
/**
 * @details
 * @brief cherche la derniere occurence et renvoie un pointeur
 * vers cette position 
 * @param char.const.*s chaine de caractere
 * @param int.c caractere a trouver 
 * @return nouvelle chaine de caractere s depuis 
 * le premier c rencontre sinon NULL
 */	
char			*ft_strrchr(const char *s, int c);
/**
 * @details
 * @brief Nettoie une chaine (supprime tous les caracteres 
 * non presents dans set)
 * @param char.const.*s1 chaine de caractere
 * @param char.const.*set caracteres a nottoyer
 * @return nouvelle chaine contenant s1 sans les aracteres de set
 */	
char			*ft_strtrim(char const *s1, char const *set);
/**
 * @details
 * @brief cree un nouveau noeud avec la struct t_list
 * @param void.*content contenu du nouveau noeud
 * @return node
 */
t_list			*ft_lstnew(void *content);
/**
 * @details
 * @brief ajoute un nouveau noeud en tete (new->a->b)
 * @param t_list.**lst liste
 * @param t_list.*new le nouveau noeud de tete
 * @return void
 */
void			ft_lstadd_front(t_list **lst, t_list *new);
/**
 * @details
 * @brief ajoute un nouveau noeud a la fin (a->b->new)
 * @param t_list.**lst liste des noeuds
 * @param t_list.*new le nouveau noeud de tete
 * @return void
 */
void			ft_lstadd_back(t_list **lst, t_list *new);
/**
 * @details
 * @brief obtient le dernier element
 * @param t_list.*lst noeud
 * @return lst (dernier element)
 */
t_list			*ft_lstlast(t_list *lst);
/**
 * @details
 * @brief compte les elements de la list
 * @param t_list.*lst noeud
 * @return taille de la liste
 */
int				ft_lstsize(t_list *lst);
/**
 * @details
 * @brief Supprime un noeud
 * @param t_list.*lst noeud
 * @param void.(*del)(void *) fonction del pour effacer le contenu puis le noeud
 * @return void
 */
void			ft_lstdelone(t_list *lst, void (*del)(void *));
/**
 * @details
 * @brief Supprime la liste
 * @param t_list.**lst liste
 * @param void.(*del)(void *) fonction del pour effacer le contenu puis le noeud
 * @return void
 */
void			ft_lstclear(t_list **lst, void (*del)(void *));
/**
 * @details
 * @brief applique une fonction a chaque element
 * @param t_list.*lst noeud
 * @param void.(*f)(void *) fonction a appliquer a chaque elements
 * @return void
 */
void			ft_lstiter(t_list *lst, void (*f)(void *));
/**
 * @details
 * @brief applique une fonction a chaque element et cree une 
 * nouvelle liste avec les resultats si malloc echoue , on applique del
 * @param t_list.*lst noeud
 * @param void.(*del)(void *) fonction del pour effacer le contenu puis le noeud
 * @param void.(*f)(void *) fonction a appliquer a chaque elements
 * @return la nouvelle list
 */
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
