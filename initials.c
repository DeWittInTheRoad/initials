/**
  *
  * initials.c
  *
  * Brandon DeWitt
  *
  * More comfortable solution, deals with sloppy inputs (inconsistent spacing between words)
  *
  */

#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main (void) {



// printf("Enter your name: ");
string name = get_string();

int nlen = strlen(name);



for (int i = 0; i < nlen; i++){
    if (i == 0 && name[i] != ' ') printf("%c", toupper(name[i]));  //Print first character if it's not a space.
    if (i > 0 && name[i] != ' ' && name[i-1] == ' '){ //Print character if it is not a space and character before it is space
        printf("%c", toupper(name[i]));
    }
}

printf("\n");
}

