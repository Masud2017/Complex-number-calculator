#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char ans;
	int num,mod;
redo: //Tag for endless loop;
printf("\nPlease enter your number for find the modulus value: ");
scanf("%d",&num);
mod = num%4;
printf("\nModulus of %d is : %d\n\n",num,mod);
switch(mod){
	case 0:
		printf("This value is unknown");
		break;
	case -1:
		printf("This is a negetive value so syntax error");
		break;
	case 1:
		printf("Value of i is : i");
		break;
	case 2:
		printf("Value of i is : -1");
		break;
	case 3:
		printf("Value of i is : -i");
		break;
	case 4: 
		printf("Value of i is : 1");
		break;
	default:
		printf("\nYour value is underneath\n");
}
printf("Port is enhancing");
system("apt-get update");

	goto redo; //Jump into redo tag;
return 0;
}
