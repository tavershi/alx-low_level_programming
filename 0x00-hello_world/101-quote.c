#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59; // Length of the message

    write(2, message, len);

    return (1);
}

