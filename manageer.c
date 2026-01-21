#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void logStudySession() {
    char course[50];
    int hours;
    
    // Open file in "append" mode to keep adding data
    FILE *file = fopen("study_log.txt", "a");
    
    if (file == NULL) {
        printf("Error opening database!\n");
        return;
    }

    printf("Enter Course Name (e.g., Data_Modeling): ");
    scanf("%s", course);
    printf("Enter Hours Studied: ");
    scanf("%d", &hours);

    // Write to the text file
    fprintf(file, "Course: %s | Hours: %d\n", course, hours);
    fclose(file);
    
    printf("Success! Session saved to study_log.txt\n");
}

void viewLogs() {
    char line[100];
    FILE *file = fopen("study_log.txt", "r");
    
    if (file == NULL) {
        printf("No logs found yet.\n");
        return;
    }

    printf("\n--- Your Study History ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Log Session\n2. View All Logs\n3. Exit\nSelection: ");
        scanf("%d", &choice);
        
        if(choice == 1) logStudySession();
        else if(choice == 2) viewLogs();
        else break;
    }
    return 0;
}