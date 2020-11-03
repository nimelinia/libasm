/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scopycat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:42:06 by scopycat          #+#    #+#             */
/*   Updated: 2020/11/03 22:44:29 by scopycat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int     main(void)
{
	char *str;
	char *str1cmp;
	char *str2cmp;
	char *str2cpy;
	char *str1cpy;
	int fd;
	int fd1;
	int fd2;
	int fd3;
	char *buf;
	char *buf1;
	char *strdup1;
	char *strdup2;


	str = "lala\nlalalalalalal\0ljsdflja;dfj";
	str1cmp = "allla\n";
	str2cmp = "allla\0";
	str1cpy = (char *)malloc(1000);
	buf = (char *)malloc(100);
	buf1 = (char *)malloc(100);
	str2cpy = "stroka dlya copirovania\200lalalal\0lalala";
	fd = open("text.txt",  O_WRONLY | O_TRUNC | O_RDONLY);
	fd1 = open("text1.txt", O_WRONLY | O_RDONLY | O_TRUNC);
	fd2 = open("text.txt", O_RDONLY);
	fd3 = open("text1.txt", O_RDONLY);
	printf("STRLEN\n");
	printf("my strlen %zu\n", ft_strlen(str));
	printf("orig strlen %zu\n", strlen(str));
	// printf("STRCPY\n");
	// printf("my strcpy %s\n", ft_strcpy(str1cpy, str2cpy));
	// printf("orig strcpy %s\n", strcpy(str1cpy, str2cpy));
	// printf("STRCMP\n");
	// printf("my strcmp %i\n", ft_strcmp(str1cmp, str2cmp));
	// printf("orig strcmp %i\n", strcmp(str1cmp, str2cmp));
	// printf("WRITE\n");
	// ft_write(1, str, 5);
	// printf("my errno %i\n", errno);
	// printf("my error is: %s\n", strerror(errno));
	// // errno = 0;
	// write(fd1, str, 7);
	// printf("orig errno %i\n", errno);
	// printf("orig error is: %s\n", strerror(errno));
	// printf("READ\n");
	// ft_read(fd2, buf, 5);
	// printf("my read %s\n", buf);
	// // errno = 0;
	// printf("my errno %i\n", errno);
	// printf("my error is: %s\n", strerror(errno));
	// errno = 0;
	// read(fd3, buf1, 5);
	// printf("orig read %s\n", buf1);
	// printf("orig errno %i\n", errno);
	// printf("orig error is: %s\n", strerror(errno));
	// printf("STRDUP\n");
	// strdup1 = ft_strdup(str);
	// strdup2 = strdup(str);
	// printf("my strdup %s\n", strdup1);
	// printf("orig strdup %s\n", strdup2);
	// // printf("%zi", ft_read(0, buf, 5));
	// printf("%zi", read(0, buf, 5));
	}

