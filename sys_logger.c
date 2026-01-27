#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* * SYSTEM LOGGER v1.0
 * Purpose: Tracks university system performance and 
 * logs metadata for the C-Powered Dashboard.
 */

void log_system_activity(const char *event) {
    FILE *log_file = fopen("system_activity.log", "a");
    if (log_file == NULL) return;

    time_t now;
    time(&now);
    
    // ctime adds a newline, so we format it professionally
    fprintf(log_file, "[%ld] EVENT: %s | TIMESTAMP: %s", (long)now, event, ctime(&now));
    fclose(log_file);
}

void check_system_resources() {
    printf("\n--- C-Engine Resource Check ---\n");
    // Simulating memory check logic
    int total_memory = 1024; // MB
    int used_memory = rand() % 512;
    
    printf("Total Buffer: %d MB\n", total_memory);
    printf("Used Buffer: %d MB\n", used_memory);
    printf("Status: OPTIMAL\n");
    
    log_system_activity("Resource check completed successfully.");
}

int main() {
    srand(time(NULL));
    printf("Initializing System Logger...\n");
    
    log_system_activity("System Boot Sequence Started");
    check_system_resources();
    log_system_activity("System Shutdown Cleanly");
    
    return 0;
}
