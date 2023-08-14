#include<stdio.h>
#include <string.h>
#include <stdlib.h>

union abc
{
    int a;
    long long int b;
};

int main(int argc, char *argv[])
{
    union abc blah;
    blah.a=65;
    printf("size of int: %lu\n", sizeof(int));
    printf("size of long: %lu\n", sizeof(long));
    printf("size of long long: %lu\n", sizeof(long long));
    printf("blah.a: %d\n", blah.a);
    printf("blah.b: %lld\n", blah.b);
    printf("size of blah: %lu\n", sizeof(blah));
}