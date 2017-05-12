/*
 * Olivia Vasquez + Maya Shanmugam
 * shell program
 * 5/8/17
 */
#include <stdio.h>
#include <ctype.h>

int main(){
    /* array to store input lines up 1024 characters long */
    char input[1025]; 
     /* to store each line */
    char* iLines[1024]; 
    /* count index of iLines */
    int i = 0;
    /* while loop to read in input until EOF */
    while( fgets(input,1024,stdin)!= NULL){
	iLines[i] = input;
	i++; 
    }
}

