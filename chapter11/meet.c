//meet.c#include <stdio.h> // needed for screen printing
#include <string.h>
greeting(char *temp1,char *temp2){ // greeting function to say hello
    char name[400]; // string variable to hold the name
    strcpy(name, temp2); // copy the function argument to name
    printf("Hello %s %s\n", temp1, name); //print out the greeting
}

unsigned int get_sp()
{
        __asm__("movl %esp, %eax");
}


main(int argc, char * argv[]){ //note the format for arguments
    //unsigned int stackaddr = get_sp();
    //printf("Stack Pointer ESP value is 0x%x\n", get_sp());
    greeting(argv[1], argv[2]); //call function, pass title & name
    printf("Bye %s %s\n", argv[1], argv[2]); //say "bye"
} //exit program
