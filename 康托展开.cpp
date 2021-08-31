#include<stdio.h>
#define Max 100
 
int fact(int num)
{
	if(num <= 1)
		return 1;
	else
		return (factorial_function(num-1)*num);
}
 
int main()
{
	int num[Max];
	char s[Max];
	int i=0,j=0,k=0,count=0;
	char val;
	int sum = 0;
 
	while(scanf("%c",&val))
	{
		if(val == '\n')
			break;
		else
		{
			s[count] = val;
			count ++;
		}
	}
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(s[i]>s[j])
			{
				k ++;
			}
			
		}
		num[i] = k;
		k = 0;
	}
	for(j=count-1;j>=0;j--)
	{
		sum += fact(j) * num[k];
		k++;
	}
	printf("是第%d大数\n",sum+1);
 
	return 0;
}
