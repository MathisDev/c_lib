/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:28:40 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 11:35:31 by mamottet         ###   ########.fr       */
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

