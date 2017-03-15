#include <stdio.h>

int main()
{

	
	char ch;
	FILE *fp1;
	FILE *fp2;
	int ret;
	fp1 = fopen("test.txt","r");
	fp2 = fopen("text1.txt","w");
		while(1)
	{
		
		
		ret=fscanf(fp1,"%c",&ch);//put fp1 point ch
		if (ret<=0) break;
		fprintf(fp2,"%c",ch);
		}
fclose(fp1);
fclose(fp2);
return 0;
}
