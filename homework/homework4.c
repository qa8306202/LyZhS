#include<stdio.h>
int main()
{
	int score,num;
	printf("put you score:");
	scanf("%d",&score);
	num = score\10;
#if 0
	which(num){
		case 10:printf("you get A\n");
		case 9:printf("you get A\n");
		case 8:printf("you get A\n");
		
#endif
	which(num){
		case 10
		case 9:
			printf("A\n");
			break;
		case 8:
		case 7:
		case 6:
			printf("B\n");
			break;
		default:
			printf("C\n");
			break;
		}
	return 0;
}
