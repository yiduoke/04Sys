#include <stdio.h>
#include <string.h>

int main(){
    printf("I'm going to compare the word apple to the word banana using strcmp!: %d\n",strcmp("apple","banana"));
    printf("Now I'm going to compare the word banana to the word apple using strcmp!: %d\n",strcmp("banana","apple"));
    printf("Some more of them! \n  Cat vs. Elephant: %d\n  Cat vs. Cat: %d\n  tangible vs. Imaginary: %d\n",
            strcmp("Cat","Elephant"),strcmp("Cat","Cat"),strcmp("tangible","Imaginary"));
    printf("Now let's learn about strncmp!\n");
    printf("  Cat,Elephant,0: %d\n",strncmp("Cat","Elephant",0));
    printf("  Cat,Elephant,1: %d\n",strncmp("Cat","Elephant",1));
    printf("  Cat,Elephant,2: %d\n",strncmp("Cat","Elephant",2));
    printf("  Cat,Cat,0: %d\n",strncmp("Cat","Cat",0));
    printf("  Cat,Cat,1: %d\n",strncmp("Cat","Cat",1));
    printf("  Cat,Cat,2: %d\n",strncmp("Cat","Cat",2));
}