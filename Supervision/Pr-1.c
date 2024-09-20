#include <stdio.h>

// Structure to store student details
struct Student {
    int roll_no;
    char name[50];
    float c_marks;
    float javascript_marks;
    float nodejs_marks;
    float percentage;
};

// Function to calculate the percentage
void calculate_percentage(struct Student *s) {
    s->percentage = (s->c_marks + s->javascript_marks + s->nodejs_marks) / 3.0;
}

int main() {
    struct Student students[3]; // Array of 5 students

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Enter C Lanaguage Marks: ");
        scanf("%f", &students[i].c_marks);
        printf("Enter Javascript Marks: ");
        scanf("%f", &students[i].javascript_marks);
        printf("Enter NodeJs Marks: ");
        scanf("%f", &students[i].nodejs_marks);

        // Calculate percentage for each student
        calculate_percentage(&students[i]);
    }

    // Display the mark sheet for each student
    printf("\nMark Sheets:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d - Roll No: %d, Name: %s\n", i + 1, students[i].roll_no, students[i].name);
        printf("C lanaguage: %.2f, Javascript: %.2f, NodeJs: %.2f\n", students[i].c_marks, students[i].javascript_marks, students[i].nodejs_marks);
        printf("Percentage: %.2f%%\n\n", students[i].percentage);
    }

    return 0;
}
