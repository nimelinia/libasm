/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scopycat <scopycat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:42:06 by scopycat          #+#    #+#             */
/*   Updated: 2020/11/04 15:57:31 by scopycat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int   ft_strlen(const char *str);

int     main(void)
{
	char *str;


	str = "lala\nlalalalalalal\0ljsdflja;dfj";
	
	printf("STRLEN\n");
	printf("my strlen %d\n", ft_strlen(str));
	printf("orig strlen %lu\n", strlen(str));
	
}

