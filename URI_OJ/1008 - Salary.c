/*
1008 - Salary
SUBMISSION:
2/3/18, 11:20:48 AM
*/

#include <stdio.h>
 
int main() {
 
    int employeeNumber, workedHour;
    float receivedPerHour;
    scanf("%d %d %f", &employeeNumber, &workedHour, &receivedPerHour);
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", workedHour * receivedPerHour);
 
    return 0;
}