
#include <stdio.h>

struct emp {
    char name[50];
    int id;
    float salary;
};

int main() {
    //TALHA KHAN
    struct emp e;
    FILE *fp;
    int n, i;

    fp = fopen("employee.txt", "w");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, id and salary of employee %d:\n", i + 1);
        scanf("%s %d %f", e.name, &e.id, &e.salary);
        fprintf(fp, "%s %d %.2f\n", e.name, e.id, e.salary);
    }

    fclose(fp);

    fp = fopen("employee.txt", "r");

    printf("\nEmployee Database:\n");
    while (fscanf(fp, "%s %d %f", e.name, &e.id, &e.salary) != EOF) {
        printf("%s %d %.2f\n", e.name, e.id, e.salary);
    }

    fclose(fp);
    return 0;
}

