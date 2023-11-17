#include<stdio.h>
int ls(int k,int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]==k)
			return i;
	}
	return -1;
}
int main(){
	int n;
	printf("enter the length of the reference string:");
	scanf("%d",&n);
	int a[100],f[10];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k,l,hit=0;
	printf("enter the size of the framesize:");
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		f[i]=-1;
	}
	for(int i=0;i<k;i++){
		f[i]=a[i];
		printf("%d ",f[i]);
		printf("\n");
	}
	for(int i=k;i<n;i++){
		l=ls(a[i],f,k);
		if(l!=-1)
			hit++;
		else{
			int m=a[i-k];
			l=ls(m,f,k);
			f[l]=a[i];
			
		}
		for(int j=0;j<k;j++){
				printf("%d ",f[j]);
			}
		printf("\n");
	}
	printf("%d",hit);
}
		
			
	
