/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaakrab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:53:45 by zaakrab           #+#    #+#             */
/*   Updated: 2024/08/14 17:54:28 by zaakrab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_div_zero(void);
void	ft_mod_zero(void);
int		add(int i, int j);
int		subtract(int i, int j);
int		multiply(int i, int j);
int		divide(int i, int j);
int		mod(int i, int j);

#endif
