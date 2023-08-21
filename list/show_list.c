/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:24:32 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 11:37:03 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"

void	show_list(llist liste)
{
	element *tmp = NULL;
	
	element *tmp = liste;
	while(tmp != NULL)
	{
		ft_printf("%d ", tmp->val);
		/* On avance d'une case */
		tmp = tmp->nxt;
	}
}
