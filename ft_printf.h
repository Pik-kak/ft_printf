/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkauhane <kkauhane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:14:49 by kkauhane          #+#    #+#             */
/*   Updated: 2023/11/28 15:06:43 by kkauhane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		parse_format(char *format, char c, va_list args, int temp);
int		check_type(char *format, va_list args, char c);
int		print_str(char *string);
int		ft_printchar(char c);
int		print_hex(unsigned int n, char c);
int		put_hex(unsigned int n, char c, char *string, int i);
char	*create_string(unsigned int n, int *pointer);
int		print_nbr(int n);
int		ft_putnbr(int n);
int		numcount(int n);
int		print_pointer(va_list args);
int		put_ptr(unsigned long pointer);
int		ptr_len(unsigned long num);
int		print_unsigned_nbr(unsigned int n);
char	*unsigned_itoa(unsigned int n);
int		unsigned_num_len(unsigned int n);

#endif
