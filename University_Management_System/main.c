#include <stdio.h>
#include "database.h"

int main() {
    int choice;
    while(1) {
        printf("\n=== University Management System ===");
        printf("\n1. Add Course\n2. View Portfolio\n3. Search Course\n4. Exit\nSelection: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            add_university_course();
        } else if(choice == 2) {
            display_portfolio();
        } else if(choice == 3) {
            search_course();
        } else if(choice == 4) {
            break;
        } else {
            printf("Invalid selection.\n");
        }
    }
    printf("Exiting system. Work hard!\n");
    return 0;
}