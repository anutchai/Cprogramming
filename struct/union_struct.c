#include <stdio.h>
union unionJob
{
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main()
{
    printf("\nsize of structure = %d bytes", sizeof(sJob));
    printf("\nsize of union = %d bytes", sizeof(uJob));
    return 0;
}