/*
 Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------

EntryNo,sensorNo,Temperature,Humidity,Light,

1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------

a. Write a function to extract each line in the .csv file and store it in an array of structures. 

b. Also implement functions to display the contents of the array of structures.
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

void extractData(LogEntry entries[], int *numEntries) {
    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open data.csv.\n");
        *numEntries = 0;
        return;
    }

    char line[100];
    char *token;
    int entryCount = 0;

    
    while (fgets(line, sizeof(line), file) != NULL) {
    
        token = strtok(line, ",");
        
       
        entries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        entries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].timestamp, token);

        entryCount++;
    }

    *numEntries = entryCount;

    fclose(file);
}

void displayData(LogEntry entries[], int numEntries) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%-8d %-9s %-12.1f %-9d %-6d %s\n",
               entries[i].entryNo, entries[i].sensorNo, entries[i].temperature,
               entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}

int main() {
    LogEntry entries[MAX_ENTRIES];
    int numEntries = 0;

    extractData(entries, &numEntries);
    displayData(entries, numEntries);

    return 0;
}
