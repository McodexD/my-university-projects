#include <stdio.h>
#include <string.h>
#include "database.h"

Course list[MAX_COURSES];
int total = 0;

void add_university_course() {
    if (total < MAX_COURSES) {
        printf("\nEnter Course Name (use_underscores): ");
        scanf("%s", list[total].name);
        printf("Enter Credits: ");
        scanf("%d", &list[total].credits);
        printf("Is it completed? (1 for Yes, 0 for No): ");
        scanf("%d", &list[total].is_completed);
        total++;
        printf("Course successfully recorded!\n");
    }
}

void display_portfolio() {
    printf("\n--- University Academic Portfolio ---\n");
    for (int i = 0; i < total; i++) {
        printf("%d. [%s] %s - %d credits\n", 
               i+1, list[i].is_completed ? "PASSED" : "ACTIVE", 
               list[i].name, list[i].credits);
    }
}
void search_course() {
    char search_name[100];
    int found = 0;

    printf("\nEnter the name of the course to search for: ");
    scanf("%s", search_name);

    for (int i = 0; i < total; i++) {
        // strcmp returns 0 if the strings match exactly
        if (strcmp(list[i].name, search_name) == 0) {
            printf("\n--- Course Found! ---");
            printf("\nName: %s", list[i].name);
            printf("\nCredits: %d", list[i].credits);
            printf("\nStatus: %s\n", list[i].is_completed ? "Passed" : "Active");
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("\nCourse '%s' not found in the system.\n", search_name);
    }
}