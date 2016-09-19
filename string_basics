#include <stdio.h>
#include <stdlib.h>

// This program shows a basic use of strings
// read more: https://linux.die.net/man/3/gets
// http://stackoverflow.com/questions/3302255/c-scanf-vs-gets-vs-fgets
// http://stackoverflow.com/questions/1252132/difference-between-scanf-and-fgets
void print_strings();
void find_null_terminator();
void character_by_character();

    // globals strings
    char i;
    char basic_string[] = "This is a simple string";
    char *pointer_string = "A vector is an address of memory like a pointer";
    char one_by_one_string [4] = {'G','I','T','\0'}; // "\0" null character will not appear on printf
    char overflow_string [16] = "You can read me. You can't read me";
    char garbage_string [50] = "The rest of the string is garbage ";
    char matrix_string[2][21] = {"First element", "Second element"}; // two vectors of twenty character more null character

int main()
{

    print_strings();
    find_null_terminator();
    character_by_character();
#if 1
    char name[20];
    printf("\n\nName and last name: ");
   // gets(name); // capture the keyboard

     fgets(name, 19, stdin); // variable, limit - null character, input from the keyboard

    // scanf("%19s", name); // scanf capture everything until find , the character new line \n, tab, space or ENTER.
    // ex: "Dollynho da Silva", only Dollynho will be save on the variable with scanf
   // scanf("\n%[^\n]", name);  // if use the scanf with "[^\n]", it will work like the gets.
    //scanf ("%20[^\n]", name); // the twenty limit the numbers of character by 19
    fflush(stdin); // clean the keyboard buffer (windows)
   // __fpurge(stdin); // clean the keyboard buffer (linux)

    printf("\nName: %s ", name);
    puts(name);
#endif

    return 0;
}

void print_strings(){
    printf("\n1 - %s", basic_string);
    printf("\n2 - %s", pointer_string);
    printf("\n3 - %s", one_by_one_string);
    printf("\n4 - %s", overflow_string);
    printf("\n5 - %s", garbage_string);
    printf("\n6 - ");
    for(i = 0; i <= 1; i++){
        printf("%s ", matrix_string[i]);
    }
}

void find_null_terminator(){
    //for(i = 0; i != '\0'; i++){
    for(i = 0; basic_string[i] != '\0'; i++){
    }
    printf("\nNull terminator is at %d position of the string", i);
}

void character_by_character(){
    printf("\n");
    for(i = 0; basic_string[i] != '\0'; i++){
        printf("%c", basic_string[i]);
    }


}
