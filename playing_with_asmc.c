//Start of the C-ASM code.
int _start(void) {
	const char message1[]= "I ";
	const char message2[]= "Don't Understand\n";
	/*int number1 = 5;
	int number2 = 10; */
//message1 syscall
	asm volatile (
		"mov $1, %%eax\n\t" //-syscall for writting
		"mov $1, %%edi\n\t" //-standard output
		"lea %0, %%rsi\n\t" //-load effective address
		"mov $2,  %%edx\n\t" //number of characters 
		"syscall\n\t"
		:
		:"m"(message1)
		:"%eax","%edi","%rsi","%edx"		
);
//message2 syscall
	asm volatile (
		"mov $1, %%eax\n\t"
		"mov $1, %%edi\n\t"
		"lea %0, %%rsi\n\t"
		"mov $18,  %%edx\n\t"
		"syscall\n\t"
		:
		:"m"(message2)
		:"%eax","%edi","%rsi","%edx"   
);
/*
//n1 syscall
	asm volatile (
);
//n2 syscall
	asm volatile ( 
);*/
//exit system_call
	asm volatile (
	"mov $60, %%eax\n\t"
	"mov $69, %%edi\n\t"
	"syscall"
	:::"%eax","%edi"
);
	return 0;	
}
