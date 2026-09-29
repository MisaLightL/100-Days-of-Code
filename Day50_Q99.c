/* Q99 Change the date formate from dd/04/yyyy to dd-Apr-yyyy. 
ANSWER: */

#include<stdio.h>
int main(){
int d,m,y;
printf("Enter date in dd/mm/yyyy format: ");
scanf("%d / %d / %d",&d,&m,&y);
printf("\n%02d-",d);
switch(m){
    case 1:
        printf("Jan");
        break;
    case 2:
        printf("Feb");
        break;
    case 3:
        printf("Mar");
        break;
    case 4:
        printf("Apr");
        break;
    case 5:
        printf("May");
        break;
	case 6:
		printf("JUn");
		break;
	case 7:
		printf("Jul");
		break;
	case 8:
		printf("Aug");
		break;
	case 9:
		printf("Sept");
		break;
	case 10:
		printf("Oct");
		break;
	case 11:
		printf("Nov");
		break;
	case 12:
		printf("Dec");
		break;
	default:
		printf("Check again, this date doesn't exist");
}
printf("-%d\n",y);
return 0;
}
