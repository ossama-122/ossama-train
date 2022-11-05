#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // to ask you about your name

    string name = get_string("What's your name? ");

    // to print hello and (your name)

    printf("hello, %s\n", name);

}