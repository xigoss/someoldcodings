#include <stdio.h>

void swap(int *a, int m, int n){
	int tmp;
	tmp = a[m];
	a[m] = a[n];
	a[n] = tmp;
}

void siftup(int a[], int i, int n){
	while(i>0){
		int j = (i&1==0?i-1:i+1);
		int p = (i-1)>>1;
		if(j<n && a[j]<a[i]){
			i = j;
		}
		if(a[i] < a[p]){
			swap(a, i, p);
		}
		i = p;
	}
}

void siftdown(int a[], int i, int n){
	while(2*i+1 < n){
		int l = 2*i + 1;
		if(l+1<n && a[l+1] <a[l]){
			l++;
		}
		if(a[l] < a[i]){
			swap(a, i, l);
		}
		i = l;
	}
}

void main(){
	int i;
	int a[] = {2,9,4,1,5,3,7,8};
	siftup(a, 5, 8);
	siftdown(a, 5, 8);
	for(i=0; i<8; i++){
		printf("%d ", a[i]);
	}
}