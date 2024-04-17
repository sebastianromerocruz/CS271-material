#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Get length of name from user
    int name_length;

    printf("How long is your name? ");
    scanf("%d", &name_length);

    // Allocate that many char-sized chunks of data
    char *name = (char *) calloc(name_length + 1, sizeof(char));

    // Get name from user as a string
    // We are guaranteed to have enough space for it
    // since we dynamically allocated `name` according
    // to the expected size of name
    printf("What is your name? ");
    scanf("%s", name);

    // print name
    for (int i = 0; i < name_length; i++) printf("%c", name[i]);

    // free data allocated for `name`
    // and set free `name` pointer to
    // NULL
    free(name);
    name = NULL;

    return 0;
}