/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_end_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:47:48 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 11:55:48 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "list.h"

llist	add_end_list(llist liste, int valeur)
{
	/* On crée un nouvel élément */
	element* nouvelElement = malloc(sizeof(element));
	element* tmp = NULL;
	/* On assigne la valeur au nouvel élément */
	nouvelElement->val = valeur;
 	/* On ajoute en fin, donc aucun élément ne va suivre */
	nouvelElement->nxt = NULL;
 	if(liste == NULL)
	{
		return nouvelElement;
	}
	else
	{
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
	element* tmp=liste;
	while(tmp->nxt != NULL)
	{
		tmp = tmp->nxt;
	}
	tmp->nxt = nouvelElement;
	return liste;
	}
}
