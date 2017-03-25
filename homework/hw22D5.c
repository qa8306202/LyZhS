//this project aim at to divide different score.
//if >90 is excellent, 90> >80 is good,80> >60 is pass and <60 is fail
//input which number ,show the day .
#include<stdio.h>
int main()
{
#if 0
	int s;
	printf("please input the score:");
	scanf("%d",&s);
	switch(s/10){
	case 10:
	case 9:printf("this score is excellent.\n");
		   break;
	case 8:printf("this score is good.\n");
		   break;
	case 7:
	case 6:printf("this score is pass.\n");
		   break;
	default:printf("this score is failed.\n");
					break;
	}
#endif
	int d;
	printf("input the day:");
	scanf("%d",&d);
	switch(d){
	case 1:printf("Today is Monday.\n");
		   break;
	case 2:printf("Today is Tuesday.\n");
		   break;
	case 3:printf("Today is Wednesday.\n");
		   break;
	case 4:printf("Today is Thurday.\n");
		   break;
	case 5:printf("Today is Friday.\n");
		   break;
	case 6:printf("Today is Saturday.\n");
		   break;
	case 7:printf("Today is Sunday.\n");
		   break;
	
	
	}

	
	return 0;

}
