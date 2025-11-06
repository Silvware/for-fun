//No library dependency Hello World in C.
	//Code made by Silv-ware Inspired on OMYaC (Old Man Yells at Code)'s Work.

/*Reference OG code with C Pre-def libraries:
#include <stdio.h>
int main(){
	printf("Hello World");
	return 0;
}*/ 

/*the #include <library> line is the one who includes the library, so for us to reach our goal, this line is erased completely*/

/*However and this is really important to mention is that most of this will
include some level of ASM_x86 knowledge, since C itself is based on it)?

i still quite dont get it.*/

//Main C code:
int _start(void) {
	const char hw_var[] = "Hello, Paisano!\n";
//hw syscall
	asm volatile (
		"mov $1, %%rax\n\t" //system call number for write.
		"mov $1, %%rdi\n\t" //assembly representation of standard output. (file descriptor(fd) = 1)
		"lea %0, %%rsi\n\t" //address of message.
		"mov $17, %%rdx\n\t" //message length (on this case 17.)
		"syscall\n\t"
		:
		:"m"(hw_var)
		:"%rax","%rdi","%rsi","%rdx"
);		
//exit system call
	asm volatile (
		"mov $60, %%rax\n\t" //syscall for exit.
		"mov $69, %%rdi\n\t" //assembly representation for exit code.
		"syscall\n\t"
		:::"%rax","%rdi"				
);
//return and end
	return 0;
}
