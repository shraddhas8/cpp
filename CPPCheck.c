#include <stdio.h>
#include <stdlib.h>
int*fetch();
int main()
{
    int*k;
    k=fetch();
    printf("Fetch called");

}
int*fetch()
{
    int val=20;
    return &val;
}
