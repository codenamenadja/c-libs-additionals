additionals
===========

[SOURCE]: https://github.com/codenamenadja/c-libs-additionals

intro
-----

This packages is a project for to provide additional features of string manipulate functions.
many of them uses ``malloc`` ``free`` glibc functions.
outputs a static library of additional functions.

.. code-block:: bash

   make
   make clean
   make fclean

makefile
--------

   .. literalinclude:: Makefile
      :language: makefile
      :encoding: latin-1

header
______

.. code-block:: c

   char      *ft_substr(char const *s, unsigned int start, size_t len);
   char      *ft_strjoin(char const *s1, char const *s2);
   char      *ft_strtrim(char const *s1, char const *set);
   char      **ft_split(char const *s, char c);
   char      *ft_itoa(int n);
   char      *ft_itox(int n);
   char      *ft_utoa(unsigned int n);
   char      *ft_strmapi(char const *s, char (*f)(unsigned int, char));
   void      ft_putchar_fd(char c, int fd);
   void      ft_putstr_fd(char *s, int fd);
   void      ft_putendl_fd(char *s, int fd);
   void      ft_putnbr_fd(int n, int fd);
   int       **ft_intmapi(int **arr, int (*f)(unsigned int, int));
   void      *ft_realloc(void *ptr, size_t size);

functions
---------

``ft_substr``
   - DESC: copy string s, from ``start`` to ``start+len`` + ``'\0'``.
   - DEPENDS: stdlib.h/malloc, unsitd.h
   - RETURNS:
      - success: ``(char *)`` mallocated char pointer with proper values.
      - failure: ``(NULL)`` on malloc error or length error.

``ft_strjoin``
   - DESC: copy string with concatenate ``s1`` and ``s2``.
   - DEPENDS: stdlib.h/malloc, string.h/strlen.h
   - RETURNS:
      - success: ``(char *)`` mallocated char pointer with proper values.
      - failure: ``(NULL)`` on malloc error.

``ft_strtrim``
   - DESC: copy string s1 except pattern ``char *set``.
   - DEPENDS: string.h/strdup, stdio/BUFSIZ
   - RETURNS: 
      - success: ``(char *)`` copied string.
      - failure: ``(NULL)`` if s1 is NULL or strdup malloc error. 

``ft_split``
   - DESC: pointer array, string ``s`` divded by character ``c``.
   - DEPENDS: stdlib.h/malloc, strings.h/strdup&strlen, stdio.h/BUFSIZ
   - RETURNS:
      - success: ``(char **)`` with NULL-pointer terminated.
      - failure: ``(NULL)`` if ``!*s``.

``ft_itoa``
   - DESC: pointer of string, convert integer to string.
   - DEPENDS: string.h/strdup
   - RETURNS:
      - success: string alloced with strdup, with proper value.
      - failure: (NULL) on if strdup fails.

``ft_utoa``
   - DESC: pointer of string, convert integer as unsigned to string.
   - DEPENDS: string.h/strdup
   - RETURNS:
      - success: string alloced with strdup, with proper value.
      - failure: (NULL) on if strdup fails.

``ft_itox``
   - DESC: pointer of string, convert interger to hex-string.
      - Internally chages n to unsigned int to bit-wise operations
      - masks n from ``0b11110000...`` to ``0b0000...1111`` and convert to hexkey.
   - DEPENDS: string.h/strdup
   - RETURNS:
      - success: string alloced with strdup, with proper value.
      - failure: (NULL) on if strdup fails.

``ft_strmapi``
   - DESC: pointer of string, apply callback f to each apply callback f to strdup(s). 
   - DEPENDS: string.h/strlen, stdlib.h/malloc
   - RETURNS:
      - success: ``(char *)`` with f(index, value) applied.
      - failure: ``(NULL)`` on malloc error or !s.

``ft_intmapi``
   - DESC: pointer of integer, apply callback f to each pointer with index and alloc-initialize with new ``int **ret``
   - DEPENDS: stdlib.h/malloc
   - RETURNS:
      - success: ``(int **)`` with f(index, value) applied.
      - failure: ``(NULL)`` on malloc error or !arr or !*arr.

``ft_putchar_fd``
   - DESC: Outputs the character ``c`` to the given file descriptor.
   - DEPENDS: unistd.h/write
   - RETURNS: void

``ft_putstr_fd``
   - DESC: Outputs the string ``s`` to given file descriptor.
   - DEPENDS: unistd.h/write
   - RETURNS: void

``ft_putendl_fd``
   - DESC: Outputs the string ``s`` to the given file descriptor, followed by a new line.
   - DEPENDS: unistd.h/write, stdlib.h/malloc, stdlib.h/free
   - RETURNS: void

``ft_putnbr_fd``
   - DESC: Outputs the number ``n`` to the given file descriptor.
   - DEPENDS: unistd.h/write
   - RETURNS: void

``*ft_realloc``
   - DESC: Changes the size of the mem-block by ``ptr`` to ``size`` bytes.
   - DEPENDS: stdlib.h/free, stdlib.h/malloc
   - RETURNS:
      - success: ``NULL`` on size is 0 or valid memory pointer ``ret``
      - failure: ``NULL`` on mem alloc error.
