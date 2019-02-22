#include <stdio.h>
#include <stdlib.h>
int fetch();
int main()
{
    int k;
    k=fetch();
    printf("val=%d",k);

}
int fetch()
{
    int val=20;
    return val;
}
