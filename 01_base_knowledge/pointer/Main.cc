#include<iostream>
#include<string.h>
#include<stdio.h>

int main(){

	char *buffer = new char[8];
	memset(buffer, 0, 8);

	delete[] buffer;

	std::cout<<"print"<<std::endl;
	printf("%s", "Hello YCM!");


	std::cin.get();


}
