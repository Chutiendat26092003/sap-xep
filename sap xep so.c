#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,l;
	int i,j,k;
	int temp;
	int num[100];
	int desnum[100];
	printf("Nhap so gia tri cho mang: ");
	scanf("%d",&n);
	for(l=0;l<n;l++)
	{
		printf("Nhap gia thu %d: ",l+1);
		scanf("%d",&num[l]);
		
	}
	for(k=0;k<n;k++)
	    desnum[k]=num[k];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++);
		{
			if(desnum[i] < desnum[j])
			{
				temp = desnum[i];
				desnum[i]=desnum[j];
				desnum[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("\n so lon thu [%d] la %d",i,desnum[i]);
	 
	return 0;
}
