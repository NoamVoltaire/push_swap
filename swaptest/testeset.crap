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
	int i = 6; // 

	while (i--)
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
	// int	nb_of_nodes = 0;;
	t_block	*node;
	t_block	*bnode = NULL;
	t_block	*tmp;

	int nbrof_args = 0;
	i = ac - 1;
	if (ac > 1)
	{
			node = ft_lstnew(ft_atoi(av[i]));
			i--;
			nbrof_args++;
			// nb_of_nodes++;
		while (i > 0)
		{
			tmp = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_front(&node, tmp);
			i--;
			nbrof_args++;
			// nb_of_nodes++;
		}
		// ft_lstiter(node, print);
		// sa(&node);
		ft_lstiter(node, print);

		// ra(&node);

		sort(&node, &bnode, nbrof_args, 0); // !!!! TODO


		pa(&node, &bnode);
		pa(&node, &bnode);
		ft_printf("	BBBBB\n");
		ft_lstiter(bnode, print);
		ft_printf("AAAA\n");
		ft_lstiter(node, print);
		pb(&node, &bnode);
		ft_printf("AAAA\n");
		ft_lstiter(node, print);
		ft_printf("	BBBBB\n");
		ft_lstiter(bnode, print);

	}
}
// 2 Stack les trucs (nodes i guess) dans la stack A
//done ig

//2.5 fonction pour trier en desous de 3

//



// 3 LE TRI (MERGE)
//todo
	//-inclure index
	//-repenser les fonction rah et tt
	/*
	
	*/

void	sort(t_block **a, t_block **b, int nbrelmnt, int i)
{
	// if (nbrelmnt > i)
	// 	sort(&(*a), &(*b), nbrelmnt/2, i)

	if (i != nbrelmnt/2)
	{

	}
	// if()
	// if(cmp_lst(*a) && cmp_lst(*b))
	// {
	// 	ss(&(*a), &(*b));
	// 	rr(&(*a), &(*b));
	// 	i = 0;
	// }
	// else if(cmp_lst(*a))
	// {
	// 	sa(&(*a));
	// 	ra(&(*a));
	// 	i = 0;
	// sort(&(*a), &(*b), nbrelmnt, i + 1)
	// }
	// else if(cmp_lst(*b))
	// {
	// 	sa(&(*b));
	// 	ra(&(*b));
	// 	i = 0;
	// }
	else if (i != nbrelmnt/2)
	{

	}


}