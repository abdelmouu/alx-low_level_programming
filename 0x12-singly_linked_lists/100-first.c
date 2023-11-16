#include <stdio.h>

/**
 * before_main - Function executed before the main function
 *
 * Description: This function is executed before the main function is called.
 * It prints the message "You're beat! and yet, you must allow,
 * I bore my house upon my back!" to the standard output.
 */
void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
