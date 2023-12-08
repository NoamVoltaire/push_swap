	/* I NEED
		-atoi++ that can take multiple numbers in a string
		-all the commands (pa,pb,ra,rb,etc...)
		-know how to make only 2 stacks (nodes stuff probably)
		-functions that sorts both stack
			-maybe needs 
			-needs to write command*/
	
	
	
	
	//1 faire un programme qui prend des arg et
		//  les transforme en int dans leur nodes respective
#include "push_swap_header.h"


void	ft_lstiter(t_block *lst, void (*f)(int))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}


void	print(int nb)
{
	ft_printf("nb = %d\n",nb);
}	

int	main(int ac, char **av)
{
	int		i;
	t_block	*node;
	t_block	*tmp;

	i = ac - 1;
	if (ac > 1)
	{
			node = ft_lstnew(ft_atoi(av[i]));
			i--;

		while (i > 0)
		{
			tmp = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_front(&node, tmp);
			i--;
		}
		ft_lstiter(node, print);
		sa(&node);
		ft_lstiter(node, print);
		ra(&node);
		ft_lstiter(node, print);
	}
}
// 2 Stack les trucs (nodes i guess) dans la stack A
