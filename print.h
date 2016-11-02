#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>

void print(dict *ptr){
	int i, j, fd, dpos, cnt, len, slen;
	len = (ptr->key) % 100;
	fd = open("src.txt", O_RDONLY);
	lseek(fd, ptr->fp, SEEK_SET);
	char c[100], d[16], ch, l[3];
	cnt = 0;
	read(fd, &dpos, 4);
	while(read(fd, &ch, 1) != 0 && ch != '\n')
		c[cnt++] = ch;
	c[cnt] = '\0';
	slen = strlen(c);
	for(i = 0; c[i] < '|'; i++)
		d[i] = c[i];
	d[i] = '\0';
	g_print("\n\n%s", d);
	i = len + 1;
	j = 0;
	while(c[i++] != '\0')
		l[j++] = c[i - 1];
	l[j] = '\0';
	int nol = atoi(l);
	close(fd);
	fd = open("dictionary.txt", O_RDONLY);
	lseek(fd, dpos, SEEK_SET);
	while(read(fd, &ch, 1) != 0 && ch != '\n')
 		continue;
 	g_print("\n");
	for(i = 0; i < nol; i++){
		while(read(fd, &ch, 1) != 0 && ch != '\n')
 			g_print("%c", ch);
 		g_print("\n");
	}
	g_print("\n\n");
}
