#include <stdio.h>

struct car
{
    char* name;
    int speed;
    int price;
};


int main(int argc, char *argv[])
{
    struct car avante;
    avante.name = argv[2];
    printf("Hello haoun23432235!  %s \n", avante.name);
    return 0;
}
