
#include <stdio.h>

struct student {
    //TALHA KHAN
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct student s[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name, roll number and total marks of student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nTopper:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll Number: %d\n", s[maxIndex].roll);
    printf("Total Marks: %d\n", s[maxIndex].marks);

    return 0;
}

