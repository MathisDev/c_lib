/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:58:55 by mamottet          #+#    #+#             */
/*   Updated: 2023/08/21 11:59:41 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	empty_list(llist liste)
{
	return (liste == NULL)? 1 : 0;
}