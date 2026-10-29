
#include "libft.h"
#include<stdio.h>
#include <stdlib.h>

void del(void* content){
    (void)content;
}
void print_lstcontent(void *content)
{

    printf("%s\n", (char *)content);
}
int	main(void)
{
	t_list *nodea =ft_lstnew("noad a");
	t_list *nodeb=ft_lstnew("noad b");
	t_list *nodec=ft_lstnew("noad c");
	t_list *new=ft_lstnew("noad new");
	t_list **lst;
	t_list *print;
	lst = &nodea;
	print = *lst;
	while (print != NULL)
	{
		printf("%s\n", (char *)print->content);
		print = print->next;
	}

	ft_lstadd_front(lst, nodeb);
	printf("--ft_lstadd_front--nodeb--\n");
	print = *lst;
	while (print != NULL)
	{
		printf("%s\n", (char *)print->content);
		print = print->next;
	}
    ft_lstadd_back(lst, nodec);
    printf("--ft_lstadd_back--nodec--\n");
	print = *lst;
	while (print != NULL)
	{
		printf("%s\n", (char *)print->content);
		print = print->next;
	}
    // ft_lstdelone(nodec,del);
    // printf("--ft_lstdelone--nodec--\n");
	// print = *lst;
	// while (print != NULL)
	// {
	// 	printf("%s\n", (char *)print->content);
	// 	print = print->next;
	// }
    printf("--ft_lstiter--\n");
    ft_lstiter(*lst, print_lstcontent);



     ft_lstclear(lst,del);
    printf("--ft_lstclear--\n");
	print = *lst;
	while (print != NULL)
	{
		printf("%s\n", (char *)print->content);
		print = print->next;
	}
    
    
}