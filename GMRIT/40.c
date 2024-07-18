#include <stdio.h>

struct student {
    char name[50];
    int rollNumber;
    int marks[3];
    int totalMarks;
    float averageMarks;
    float percentage;
};

void calculateResults(struct student *s) {
    s->totalMarks = s->marks[0] + s->marks[1] + s->marks[2];
    s->averageMarks = s->totalMarks / 3.0;
    s->percentage = (s->totalMarks / 300.0) * 100;
}

void printStudentDetails(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %d, %d, %d\n", s.marks[0], s.marks[1], s.marks[2]);
    printf("Total Marks: %d\n", s.totalMarks);
    printf("Average Marks: %.2f\n", s.averageMarks);
    printf("Percentage: %.2f%%\n", s.percentage);
}

int main() {
    struct student myStudent = {
        "Luffy",101,{85, 90, 88},0,0.0,0.0
    };
    calculateResults(&myStudent);
    printStudentDetails(myStudent);
    return 0;
}
