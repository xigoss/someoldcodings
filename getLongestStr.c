/*************************************************************************
    > File Name: getLongestStr.c
    > Author: Conan
    > Mail: xigoss@163.com 
    > Created Time: 2013年06月28日 星期五 10时20分50秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char *s, *p;
	int max = 0;
	int len = 0;
	s = (char*)malloc(sizeof(char)*1000);
	p = (char*)malloc(sizeof(char)*1000);
	while(gets(p) != NULL){
		printf("%s\n", p);
		len = strlen(p);
		if(len > max){
			max = len;
			strcpy(s, p);
		}
	}
	printf("%s\n", s);
	free(s);
	free(p);
}
