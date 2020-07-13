# c-libs-additionals
additional libs depends to string.h

## Usage

- Make
    - all(default):
    - clean:
    - fclean:

## Members

```additinals.h
char        *ft_substr(char const *s, unsigned int start, size_t len);
char        *ft_strjoin(char const *s1, char const *s2);
char        *ft_strtrim(char const *s1, char const *set);
char        **ft_split(char const *s, char c);
char        *ft_itoa(int n);
char        *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

- ft_substr
    - DESC: copy string s, from ``start`` to ``start+len`` + ``'\0'``.
    - DEPENDS: stdlib.h/malloc, unsitd.h
    - RETURNS:
        - success: ``(char *)`` mallocated char pointer with proper values.
        - failure: ``(NULL)`` on malloc error or length error.

- ft_strjoin
    - DESC: copy string with concatenate ``s1`` and ``s2``.
    - DEPENDS: stdlib.h/malloc, string.h/strlen.h
    - RETURNS:
        - success: ``(char *)`` mallocated char pointer with proper values.
        - failure: ``(NULL)`` on malloc error.

- ft_strtrim
    - DESC: copy string s1 except pattern ``char *set``.
    - DEPENDS: string.h/strdup, stdio/BUFSIZ
    - RETURNS: 
        - success: ``(char *)``copied string.
        - failure: ``(NULL)`` if s1 is NULL or strdup malloc error. 

- ft_split
    - DESC: pointer array, string ``s`` divded by character ``c``.
    - DEPENDS: stdlib.h/malloc, strings.h/strdup&strlen, stdio.h/BUFSIZ
    - RETURNS:
        - success: ``(char **)`` with NULL-pointer terminated.
        - failure: ``(NULL)`` if ``!*s``.

- ft_itoa
    - DESC: pointer of string, convert interger to string.
    - DEPENDS: string.h/strdup
    - RETURNS:
        - success: string alloced with strdup, with proper value.
        - failure: (NULL) on if strdup fails.

- ft_itox
    - DESC: pointer of string, convert interger to hex-string.
    - DEPENDS: string.h/strdup
    - RETURNS:
        - success: string alloced with strdup, with proper value.
        - failure: (NULL) on if strdup fails.


- ft_strmapi
    - DESC: pointer of string, apply callback f to *s-each apply callback f to strdup(s). 
    - DEPENDS: string.h/strlen, stdlib.h/malloc
    - RETURNS:
        - success: ``(char *)`` with f(index, value) applied.
        - failure: ``(NULL)`` on malloc error or !s.

