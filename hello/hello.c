#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name?\n"); // Ask name
    printf("hello, %s\n", name); // Greet user
}