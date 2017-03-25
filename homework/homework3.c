#include<stdio.h>
int main()
{
#if 0
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);

	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	printf("a=%c,b=%c,c=%c\n",a,b,c);

#endif


	char a,ch;
	printf("please input an char");
	scanf("%c",&a);
	if (a>'A' &&a<'a')
	ch = a + 32;
	else 
	ch = a;
	printf("%c\n",ch); 	
return 0;

}
