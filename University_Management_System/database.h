#ifndef DATABASE_H
#define DATABASE_H

#define MAX_COURSES 50
#define NAME_LEN 100

typedef struct {
    char name[NAME_LEN];
    int credits;
    int is_completed;
    char term[20];
} Course;

// Function prototypes to be used across the project
void add_university_course();
void display_portfolio();
void save_data();

#endif