/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gihkim <kgh06079@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:49:26 by gihkim            #+#    #+#             */
/*   Updated: 2020/10/12 16:11:45 by gihkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define no1 "1️⃣"
#define no2 "2️⃣"
#define no3 "3️⃣"
#define no4 "4️⃣"
#define no5 "5️⃣"
#define no6 "6️⃣"
#define no7 "7️⃣"
#define no8 "8️⃣"
#define no9 "9️⃣"
#define no10 "🔟"

#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"
#define C_PRPL "\033[35m"
#define C_AQUA "\033[36m"


size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int     ft_strcmp(char *s1, char *s2);

#endif
