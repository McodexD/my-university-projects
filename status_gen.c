#include <stdio.h>
#include <time.h>

void generate_html_snippet(int file_count, float health) {
    FILE *f = fopen("status_snippet.html", "w");
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    fprintf(f, "<div style='border: 2px solid #00529b; padding: 15px; border-radius: 10px; background: #f0f4f8;'>\n");
    fprintf(f, "  <h3 style='color: #00529b;'>C-Engine System Status</h3>\n");
    fprintf(f, "  <p><strong>Last Sync:</strong> %d-%02d-%02d</p>\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
    fprintf(f, "  <p><strong>Files Monitored:</strong> %d</p>\n", file_count);
    fprintf(f, "  <p><strong>System Integrity:</strong> %.1f%%</p>\n", health);
    fprintf(f, "  <div style='width: 100%%; background: #ddd; height: 20px;'>\n");
    fprintf(f, "    <div style='width: %.0f%%; background: #4CAF50; height: 20px;'></div>\n", health);
    fprintf(f, "  </div>\n");
    fprintf(f, "</div>\n");

    fclose(f);
    printf("Innovation Success: status_snippet.html generated!\n");
}

int main() {
    // In a real app, this logic would scan the disk. 
    // For now, we simulate a check on your 5 core files.
    int files_found = 5; 
    float integrity = 98.5; 

    generate_html_snippet(files_found, integrity);
    return 0;
}