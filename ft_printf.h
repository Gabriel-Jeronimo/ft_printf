/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:09:20 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/13 17:06:48 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

int			ft_printf(const char *input, ...);
int			print_char(int character);
int			match_flag(const char *character, va_list args);
int			print_number(unsigned long int number);
int			print_hexadecimal(unsigned int number, const char *type);
int			print_pointer(unsigned long int num);
int			print_string(char *string);
long int	ft_digits_len(long int n);
char		*ft_litoa(long int n);
size_t		ft_strlen(const char *str);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strchr(const char *string, int c);
int			convert_to_hexadecimal(unsigned long int number, const char *base);
#endif