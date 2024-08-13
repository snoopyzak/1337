/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:02:20 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/11 16:40:35 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define EVEN_MSG = "I have an even number of arguments."
# define ODD_MSG = "I have an odd number of arguments."
# define SUCCESS 0
# define TRUE 1
# define FALSE 0
# define EVEN(nbr) ((nbr) % 2 == 0)

#endif
