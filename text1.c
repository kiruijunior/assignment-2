#include <stdio.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

struct Student {
    char name[NAME_LENGTH];
    int marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    FILE *file;
    int i;

 
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

 
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }


    for (i = 0; i < MAX_STUDENTS; i++) {
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }


    fclose(file);
    printf("Data has been written to students.txt\n");

    return 0;
}
