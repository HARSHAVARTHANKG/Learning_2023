/*
Data Parser:
   A data logger transmits the data in ascii format as shown below
   "S1-T:36.5-H:100-L:50"
   Write a function to populate all the data in an array of structure. The output should be like
   Sensor Info:
   ---------------------
   Sensor ID: S1
   Temperature: 36.5 C
   Humidity: 100
   Light Intensity: 50%
   ---------------------
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct DataLogger
{
    char sId[10];
    float temperature;
    int humidity;
    int LInt;
};
void separateDataLogger(char str[],struct DataLogger * ptr);
void printDataLogger(struct DataLogger * ptr);
int main()
{
    struct DataLogger d;
    char data[100];
    
    printf("Enter the Data Logger : ");

    fgets(data,100,stdin);
    data[strcspn(data, "\n")] = '\0';
    separateDataLogger(data,&d);

    printDataLogger(&d);
}

void printDataLogger(struct DataLogger * ptr)
{
    printf("Sensor Info: \n-------------------------------------------------------\n");

    printf("Sensor Id       : %s\n",ptr->sId);

    printf("Temperature     : %.2fC\n",ptr->temperature);

    printf("Humidity        : %d\n",ptr->humidity);

    printf("Light Intensity : %d%%\n",ptr->LInt);

    printf("-------------------------------------------------------");

}

void separateDataLogger(char data[],struct DataLogger * ptr)
{
    char arr[7][50];
    char * token = strtok(data,"-");

    int i=0;

    do
    {
        strcpy(arr[i],token);
        i++;
    }while((token=strtok(NULL,"-"))!=NULL);

    for(int i=0;i<4;i++)
    {
        
        if(i==0)
        {
           strcpy(ptr->sId,arr[i]);
        }

        else if(i==1)
        {
            char *str1 = strtok(arr[i],":");

            if(str1!=NULL)
            {
                char *str2 = strtok(NULL,":");
                if(str2!=NULL)
                {
                    ptr->temperature = atof(str2);
                }
            }
            
        }

        else if(i==2)
        {
            char *str3 = strtok(arr[i],":");

            if(str3!=NULL)
            {
                char *str4 = strtok(NULL,":");
                if(str4!=NULL)
                {
                    ptr->humidity = atoi(str4);
                }
            }
            
        }
        else
        {
            char *str5 = strtok(arr[i],":");

            if(str5!=NULL)
            {
                char *str6 = strtok(NULL,":");
                if(str6!=NULL)
                {
                     ptr->LInt = atoi(str6);
                }
            }
        }
    }
   
}