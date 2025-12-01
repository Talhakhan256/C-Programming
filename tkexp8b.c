
#include <stdio.h>

int main() {
    //TALHA KHAN
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

