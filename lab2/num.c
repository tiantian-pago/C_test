#include<stdio.h>

int main()
{
	int i,n,j;

	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(n=1;n<5;n++){
				if(i!=j&&i!=n&&n!=j)
					printf("%d%d%d\t",i,j,n);
			}
		}
	}
return 0;
}
