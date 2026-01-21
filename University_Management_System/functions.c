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