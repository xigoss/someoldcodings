/*************************************************************************
    > File Name: longestValidParentheses.c
    > Author: Conan
    > Mail: xigoss@163.com 
    > Created Time: 2013年06月23日 星期日 10时41分22秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int longestValidParentheses(char *s){
	int longest = 0;
	int left = 0, sum = 0,flag = 0;
	while(*s != '\0'){
		if(*s == '('){
			left++;
		}
		if(*s == ')'){
			if(left > 0){
				if(left == 1){
					flag = -1;
				}
				left--;
				sum ++;
			}else{
				left = 0;
				sum = 0;
			}
		}
		if(sum > longest){
			longest = sum;
		}
		if(flag == -1){
			sum = 0;
			flag = 0;
		}
		s++;
	}
	return longest*2;
}

void main(){
	char *s = ")()())";
	printf("%d", longestValidParentheses(s));
}
