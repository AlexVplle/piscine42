
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:24:00 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 19:33:52 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_linked_list
{
	void	*data;
	t_list	*next;
}	t_list;

t_list	*ft_create_elem(void *data)
{
	t_list	*element;
	
	element = malloc(sizeof(t_list));
	if (!element)
		return ((void *) 0);
	element = (t_list){data, (void *) 0};
	return (element);
}
