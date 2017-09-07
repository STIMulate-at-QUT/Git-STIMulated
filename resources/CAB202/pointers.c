#include <stdio.h>
#include <stdlib.h>

void change_value(char* param){
	param[1] = '5';
}

int main(){
	// my_pointer is the address of my_int
	int my_int = 10;
	int* my_pointer = &my_int;

	printf("My int = %d, my pointer = %p\n",my_int,my_pointer);

	printf("Dereferenced pointer: %d\n", *my_pointer);

	// Must have the NULL terminator '\0'
	char string[] = {'M','y',' ','S','t','r','i','n','g','\0'};


	// Arrays are just pointers to sequential sections of memory
	// eg: string[0] = *(string+0), string[1] = *(string+1)
	printf("%s\n",string);
	printf("%p\n",string);
	printf("string[3] vs *(string+3) : %c,%c\n",string[3],*(string+3));

	// char string[] is the same as char* string
	char* string_new = "My String";
	printf("%s\n",string_new);

	change_value(string);

	printf("%s\n",string);

	return 0;
}
