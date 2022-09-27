#include<stdio.h>
int main()
{
	int i,n,A[90],flag=0,key;
	printf("enter n & key");
	scanf("%d%d",&n,&key);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		
		if(A[i]==key)
	    	{
		
		    flag=1;
			break;
	    	}
	       
    	
	}
	
	if(flag==0)
		printf("NOT FOUND");
	else
		printf("FOUND");
}
