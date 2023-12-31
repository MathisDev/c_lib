/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:28:40 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 16:13:53 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../libft.h"

typedef struct element element;
struct	element
{
	int val;
	struct element *nxt;
};
typedef element* llist;

llist	add_end_list(llist liste, int valeur);
int	empty_list(llist liste);
llist	search_list(llist liste, int valeur);
void	show_list(llist liste);

