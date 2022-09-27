#include<stdio.h>
int main()
{
	int A[100],flag=0,i,n,first,last,mid,key;
	printf("enter n & key");
	scanf("%d%d",&n,&key);
	printf("enter the array elements");
	for(i=0;i<=n;i++)
	scanf("%d",&A[i]);
    for(i=0;i<=n;i++)
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(A[mid]==key)
		{
			printf("flag=1 and key element found");
			     break;
			     
		}
		else if(A[mid]>key)
		{
			last=mid-1;
			printf("flag=1 and key element found");
			break;
			
		}
		else if(A[mid]<key)
		first=mid=1;
		printf("flag=1 and key element found");
		break;
	}	
}
