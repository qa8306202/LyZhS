#if 0
//pyramid game
#include<stdio.h>
int main()
{
	char ch;
	int a,i,j;
	printf("input a word:");
	scanf("%c",&ch);
	if ("A">=ch && ch<="Z")
		a = ch+32-96;
	else
		a=ch-96;//get A\a=1;B\b=2....
//	printf("%d",a);
	for (i=1;i<=a;i++)//the decline is a
	{
		switch(i)
		{	
	case 1:
		printf("A\n");
		break;
	case 2:
		printf("ABA\n");
		break;
	case 3:printf("ABCBA\n");
		   break;
	case 4:printf("ABCDCBA\n");
		   break;
	case 5:printf("ABCDEDCBA\n");
		   break;
		}
	}	
	return 0;
}

#endif


/*use for circle.the extern cortrol line ,
  the smaller circle cortrol output*/

#include<stdio.h>
int main ()
{
	char ch;
	int a,i,j,k;
	printf("input the word:");
	scanf("%c",&ch);
	if ('A'<=ch && ch<'a')         ///"a" !='a'
		a = ch+32-96;
	else
		a=ch-96;//get A\a=1;B\b=2....
	for (i=1;i<=a;i++)
	{
		for (j=a-i;j>=0;j--)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			ch ='A'+k-1;
			printf("%c",ch);
		}
		for (k=i;k>=2;k--)
		{
			ch='A'+k-2;
			printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}







