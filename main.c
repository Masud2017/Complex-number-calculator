#include<stdio.h>
#include<string.h>
#include"hash.h"
//#include<net/inet.h>
//#include<socket.h>
#include<stdlib.h>

#define true 1
#define false -1
#define normal 0

int main(void) {
char *ip;
printf("Hello world this is my first hands on software development projects");
printf("\nVersion of application : 1.0.2019");
printf("\nPlease enter your ip adress: ");
scanf("%s",&ip);
hash(0,ip);
return normal;
}
