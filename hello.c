#include <stdio.h>

#define MAX_STUDENTS 100

// Function prototypes
float calculateAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);

int main() {
    int marks[MAX_STUDENTS];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Input marks
    for(i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Output results
    printf("\n--- Results ---\n");
    printf("Average marks: %.2f\n", calculateAverage(marks, n));
    printf("Highest marks: %d\n", findHighest(marks, n));
    printf("Lowest marks : %d\n", findLowest(marks, n));

    return 0;
}

// Function to calculate average
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

// Function to find highest marks
int findHighest(int marks[], int n) {
    int max = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}

// Function to find lowest marks
int findLowest(int marks[], int n) {
    int min = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] < min) {
            min = marks[i];
        }
    }
    return min;
}

