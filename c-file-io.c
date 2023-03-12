#include <stdio.h>
//this file intends to express a situation where a user needs to make use of
//file io.
//whether the following c functions cause the code to become platform dependent
//is unknown. however this should be a good basic starting point to get something
//rolling(good or bad) (:

// fopen(filename, mode) filename is probably some pointer thing, mode is standard rw(read or write)
// fclose(FILE *someFileStream) also is fclose type int?
// fgetc()
// fputc()
// fgetw()
// fputw()
// fprintf()
// fscanf()
// fgets()
// fputs()
// feof()
// FILE is aparently a built in thing in the standard library
// ^^ in words it seems as though FILE is like a tool (a struct which will take arguments) which is being called
// ^^ and loaded to a space in memory (which probably wont be known at load time by the dev)
// ^^ once the contents of FILE are available in memory a pointer should then be used (why?) because then a variable
// ^^ can be set ex: ""filePointer"" so the code can reference a smaller thing?.... its abstract. lets call it magic. (:
int main(){
	//create pointer
	FILE *filePointer;
	
	//pass arguements to fopen. i assume those arguments will be held in
	//the pointer file pointer
	filePointer=fopen("testfile.txt", "w");
	//once the file is created on the system it can be accessed by changing w to a then given additional char or int data
	
	//Pass 3 arguments to fprintf
	//(MEMORYPLACE OF THING,"DATA TYPE", TEXT TO BE SENT TO... IDK NARNIA
	fprintf(filePointer,"%s", "Hello world"); //this line printed string "hello world" to the buffer(i assume) of filePointer
	//because filePointer points to the magic struct of FILE which was opened with fopen in MODE write. because writing was already
	//going to happen additional write from frpint or anywhere else in the code would be unecessary (:? i assume... again (:
	
	//close filePointer
	fclose(filePointer);
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!^^^^^ that line is important. dont be a fool^^^^^^^^^^^!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return 0;
}
