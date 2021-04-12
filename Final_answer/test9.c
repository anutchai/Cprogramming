#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    char buf[100] = "My name is Anutchai Chutipascharoen. \nI love this subject.\n";
    f = fopen("string.txt", "w");
    fputs(buf, f);
    fclose(f);
    return 0;
}