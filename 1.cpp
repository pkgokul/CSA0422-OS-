//1.Create a new process by invoking the appropriate systemcall. Get theprocess identifier of the currently running process and its respectiveparent using system calls and display the same using a C program. #include<stdio.h>
#include<unistd.h>
int main()
{
printf("Process ID: %d\n", getpid() );
printf("Parent Process ID: %d\n", getpid() );
return 0;
}
