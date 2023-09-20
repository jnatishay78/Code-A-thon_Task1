#include <stdio.h>
#include <string.h>
void StrRev(char str[]) {
    int len = strlen(str);
    int i, j;
    for (i = 0,j=len-1; i<j; i++,j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    StrRev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}