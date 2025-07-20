____________________________________________________________________________
📚 LIBFT :
____________________________________________________________________________

Libft stands for "Library of Functions".
Your goal is to recreate a selection of standard C library functions (like strlen, strcpy, atoi, etc.) and put them together in your own static library (libft.a).

You’ll learn:

  * Memory management.

  * String manipulation.

  * Pointers.

  * Function design.

  * Clean code practices.

___________________________________________________________________________
🧱 Project Structure :
___________________________________________________________________________

Part            :	 Description.
Part 1          :	 Recode standard C functions (from <ctype.h>, <string.h>, <stdlib.h>, etc.).
Part 2          :	 Create additional useful functions (like ft_substr, ft_strjoin, etc.).
Bonus(optional) :  Implement ft_lst* functions to manage linked lists.

___________________________________________________________________________
🧠 Examples of Functions You Must Recode :
___________________________________________________________________________

🧩 Part 1: Standard Lib Functions :

Function: ------------------------ Purpose:
  * ft_strlen	---------------> Length of string.
  * ft_memset ---------------> Fill memory with a value.
  * ft_bzero ----------------> Set memory to zero.
  * ft_memcpy ---------------> Copy memory.
  * ft_memmove --------------> Safe memory copy (handles overlap).
  * ft_strchr ---------------> Find a character in a string.
  * ft_strncmp --------------> Compare strings.
  * ft_atoi -----------------> Convert string to int.
  * ft_isalpha,ft_isdigit	---> Check character type.
  * ft_toupper,ft_tolower	---> Convert character case.

🧩 Part 2: Extra Functions :

Function: ----------------------	Purpose:
 * ft_substr --------------> Extract substring from string.
 * ft_strjoin -------------> Join two strings.
 * ft_split ---------------> Split a string by a delimiter.
 * ft_itoa ----------------> Convert int to string.
 * ft_strmapi -------------> Apply a function to each character of a string.
 * ft_strtrim -------------> Trim characters from start/end of string.

______________________________________________________________________________
🧩 Bonus: Linked List Functions (ft_lst*) :
______________________________________________________________________________

You implement your own linked list utilities:

    typedef struct s_list
    {
        void *content;
        struct s_list *next;
    } t_list;

Functions:

 * ft_lstnew ------------------> Create new node.
 * ft_lstadd_front ------------> Add node at beginning.
 * ft_lstsize -----------------> Count nodes.
 * ft_lstlast -----------------> Get last node.
 * ft_lstdelone,ft_lstclear ---> Free one/all nodes.
 * ft_lstiter,ft_lstmap -------> Apply a function to each node.

_____________________________________________________________________________
⚙️ How to Build Libft:
_____________________________________________________________________________

Your library compiles to:

    libft.a

    With a Makefile:

    NAME = libft.a
    SRC = ft_strlen.c ft_atoi.c ft_split.c ...
    OBJ = $(SRC:.c=.o)

    all: $(NAME)

    $(NAME): $(OBJ)
	    ar rcs $(NAME) $(OBJ)

You can then use your libft in other projects:

    #include "libft.h"

Compile with:

    gcc main.c -L. -lft

___________________________________________________________________________
✅ Evaluation Checklist:
___________________________________________________________________________

  * Does your ft_ function behave exactly like the original?

  * Do you handle NULL and edge cases?

  * Are you using good C practices (no memory leaks, clean code)?

  * Is the Makefile working correctly?

__________________________________________________________________________
📘 Why Libft Matters:
__________________________________________________________________________

Every 42/1337 student must pass Libft to unlock other projects like:

    ft_printf

    get_next_line

    so_long

    philosophers

It becomes your personal standard library, and you’ll use it throughout the curriculum.
