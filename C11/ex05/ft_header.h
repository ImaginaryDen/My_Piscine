/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:56:39 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/03 23:38:46 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_check_null(int i, int nbr_err);
int		add(char *str, int arg_1, int arg_2);
int		diff(char *str, int arg_1, int arg_2);
int		div(char *str, int arg_1, int arg_2);
int		mod(char *str, int arg_1, int arg_2);
int		mult(char *str, int arg_1, int arg_2);

#endif
