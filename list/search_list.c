/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:10:01 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 16:11:30 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "list.h"

llist search_list(llist liste, int valeur)
{
    element *tmp=liste;
    while(tmp != NULL)
    {
        if(tmp->val == valeur)
        {
            return (tmp);
        }
        tmp = tmp->nxt;
    }
    return NULL;
}
