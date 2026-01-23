#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int credits;
    float grade;
} AcademicRecord;

void save_data() {
    FILE *file = fopen("courses.dat", "wb");
    AcademicRecord record1 = {"Computer_Science_101", 15, 4.5};
    AcademicRecord record2 = {"Mathematics_Calculus", 10, 5.0};
    
    fwrite(&record1, sizeof(AcademicRecord), 1, file);
    fwrite(&record2, sizeof(AcademicRecord), 1, file);
    
    fclose(file);
    printf("Binary database 'courses.dat' created successfully.\n");
}

int main() {
    save_data();
    return 0;
}

