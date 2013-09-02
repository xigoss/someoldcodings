/*************************************************************************
    > File Name: MS17.c
    > Author: Conan
    > Mail: xigoss@163.com 
    > Created Time: 2013年05月31日 星期五 16时34分55秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char firstsingle(const char *str){
	int a[255];
	char *p = str;
	memset(a, 0, 255*sizeof(int));
	while(*p != '\0'){
		a[*p]++;
		p++;
	}
	while(*str){
		if(a[*str] == 1){
			return *str;
		}
		str++;
	}
}

void main(){
	char *str = "asddsfddsa";
	printf("%c\n", firstsingle(str));
}
