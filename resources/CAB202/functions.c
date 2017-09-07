#include <stdio.h>

// Function prototypes
// Functions have to appear before they are used, like variables
// so prototypes are defined at the top (or in header files)

void void_func();

int sum_me(int x, int y);

// No need for a prototype
void im_before(){
	printf("I\'m before!\n");
}

// The entry point of the program is defined as the function int main()
int main(){
	//This is a function already

	void_func();

	printf("%d\n",sum_me(1,5));

	im_before();

	return 0;
}

void void_func(){
	//This function has no return value, hence the void type
	printf("Hello World\n");
}


/*
 * This Function sums the two parameters and returns an int type
 */
int sum_me(int x, int y){
	return x+y;
}
