#include <stdio.h>
//this file intends to express a situation where a user needs to make use of
//file io.
//whether the following c functions cause the code to become platform dependent
//is unknown. however this should be a good basic starting point to get something
//rolling(good or bad) (:

// fopen()
// fclose()
// getc()
// putc()
// getw()
// putw()
// fprintf()
// fscanf()
// fgets()
// fputs()
// feof()

int main(){
	//create pointer
	file *filePointer
	
	//pass arguements to fopen. i assume those arguments will be held in
	//the pointer file pointer
	filePointer=fopen("testfile.txt", "w");
	
	//Pass 3 arguments to fprintf
	//(MEMORYPLACE OF THING,"DATA TYPE", TEXT TO BE SENT TO... IDK NARNIA
	fprintf(filePointer,"%s", "Hello world");
	
	//close filePointer
	fclose(filePointer);
	return 0;
}
