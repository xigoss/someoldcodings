#include <stdio.h>

int helper(int a[], int s, int e){
	int i = e-1;
	int k;
	if(s == e){
		return 1;
	}	
	if(s > e){
		return 0;
	}

	while(i>=s && a[i]>a[e]){
		i--;
	}
	if(!helper(a, i+1, e-1)){
		return 0;
	}
	
	k = i;
	while(i>=s && a[i]<a[e]){
		i--;
	}
	if(i != s-1){
		return 0;
	}
	return helper(a, s, k);
}

int isPostorderResult(int a[], int n){
	return helper(a, 0, n-1);
}

int main(){
	int a[] = {5,7,6,9,11,10,8};
	int b[] = {7,4,6,5};
	int flag1 = isPostorderResult(a, 7);
	int flag2 = isPostorderResult(b, 4);
	printf("%d\n", flag1);
	printf("%d\n", flag2);
}
