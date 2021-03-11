/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:56:39 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 21:59:11 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <string.h>
# include <stdlib.h>

void	print_str(char *str);
void	error_mcg(char *str);
void	print_error(char *f_name, char *tr_error);
int		ft_atoi(char *str);

#endif
