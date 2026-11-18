// ye student result aur grade system ka cod hai


#include <stdio.h>

int main() {
    char student_name[50];//ye array string h
    int marks[5], i, total = 0;
    float percentage;//decimal value ke liye

    printf("=== STUDENT RESULT & GRADE SYSTEM ===\n");//title ke liye

    // 1. Student ka naam lena
    printf("Student ka naam likhein: ");
    scanf("%s", student_name);

    // 2. 5 subjects ke marks input lena (Loop ka use)
    printf("5 subjects ke marks likhein (100 me se):\n");//subject count
    for(i = 0; i < 5; i++) { //loop ke liye
        printf("Subject %d ke marks: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i]; // Total marks jodna
    }

    // 3. Percentage nikalna
    percentage = (float)total / 5;

    // 4. Result aur Grade dikhana
    printf("\n--- FINAL REPORT CARD ---\n");//clear view
    printf("Student Name : %s\n", student_name);//student name ke liye
    printf("Total Marks  : %d / 500\n", total);//total marks
    printf("Percentage   : %.2f%%\n", percentage);//after decimal 2 value taken

    // 5. Grade check karna (If-Else ka use)
    if (percentage >= 75) { //condition check
        printf("Grade        : A (Distinction)\n");
    } else if (percentage >= 60) {
        printf("Grade        : B (First Division)\n");
    } else if (percentage >= 40) {
        printf("Grade        : C (Pass)\n");
    } else {
        printf("Grade        : F (Fail)\n");
    }

    return 0;
}