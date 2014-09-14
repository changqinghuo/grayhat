//dtor.c
#include <stdio.h>
static void goodbye(void) __attribute__ ((destructor));
main(){
printf("During the program, hello\n");
exit(0);
}
void goodbye(void){
printf("After the program, bye\n");
}
