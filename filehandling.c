#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // 1. CREATE AND WRITE TO FILE
    fp = fopen("myfile.txt", "w"); // open file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "this is my internship question and i have to submit it in github\n");
    fclose(fp); // close file

    // 2. READ THE FILE
    fp = fopen("myfile.txt", "r"); // open file for reading
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Reading from file:\n");
    while (fgets(data, sizeof(data), fp)) {
        printf("%s", data);
    }
    fclose(fp);

    // 3. APPEND DATA TO FILE
    fp = fopen("myfile.txt", "a"); // open file for appending
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "This line is appended to the file.\n");
    fclose(fp);

    // 4. READ AGAIN AFTER APPENDING
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\n\nReading after appending:\n");
    while (fgets(data, sizeof(data), fp)) {
        printf("%s", data);
    }
    fclose(fp);

    return 0;
}



