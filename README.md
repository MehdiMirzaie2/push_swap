<h1 align="center">42-Push_Swap</h1>

# :pushpin: Index

* [What's this Repo?](#sparkles-What-is-Push_Swap?)
* [The Struct Used](#bookmark_Struct-used)
* [Technologies](#computer-Technologies)
* [How to Run](#construction_worker-How-to-Run)
* [Find a Bug? Or something needs to change?](#bug-Issues)

# :sparkles: What is Push_Swap?

Push_swap is an individual project I undertook at 42 School (42 Adelaide), where I developed an integer sorting program. The project challenged me to create the program using only two stacks, with stack "a" provided as standard input and stack "b" utilized as a buffer for storing and sorting the stack.

For this project, I chose to implement the stacks using linked lists. The sorting algorithm I employed was hard-coded, which means that each time a node was moved from either stack, the program recalculated the next best move. To determine the best move, the algorithm compared the indexes of each node, with the lowest index always winning. By utilizing this approach, I successfully completed the project and achieved a perfect score of 100% (less than 700 moves for 100 integers).

---

# :bookmark_tabs: Struct used
```
typedef struct s_node {
	long	        data;
	int		index;
	int		cost;
	struct s_node	*smallest_large;
	int             winner;
	t_bool          above_mid;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;
```
# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# :construction_worker: How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

$ ./push_swap <your integers>

```


# :bug: Issues

Please feel free **to create a new issue** with its title and description on the issues page of the [push_swap](https://github.com/MehdiMirzaie2/push_swap/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!


To help me out, and if you think this repo help give ⭐️
