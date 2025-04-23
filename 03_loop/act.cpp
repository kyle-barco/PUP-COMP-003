#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Print header
    cout << " XYZ International College" << endl;
    cout << " Makati, City" << endl << endl;

    int totalPassed = 0;
    int totalFailed = 0;
    int totalProcessed = 0;
    char processAnother = 'Y';

    // Process students using a for loop with break condition
    for (int i = 0; processAnother == 'Y' || processAnother == 'y'; i++) {
        string studentNumber, studentName, subject;
        float midtermGrade, finalGrade;

        // Input student data
        cout << " Student Number: ";
        getline(cin, studentNumber);
        cout << " Student Name: ";
        getline(cin, studentName);
        cout << " Subject: ";
        getline(cin, subject);
        cout << " Midterm Grade: ";
        cin >> midtermGrade;
        cout << " Final Grade: ";
        cin >> finalGrade;
        cin.ignore(); // Clear input buffer

        // Calculate average and determine remark
        float average = (midtermGrade + finalGrade) / 2;
        string remark = (average <= 3.0) ? "Passed" : "Failed";

        // Update counters
        if (remark == "Passed") totalPassed++;
        else totalFailed++;
        totalProcessed++;

        // Display results
        cout << fixed << setprecision(2);
        cout << "\n \t\t\tStudent Number: " << studentNumber << endl;
        cout << " \t\t\tStudent Name: " << studentName << endl;
        cout << " \t\t\tSubject: " << subject << endl;
        cout << " \t\t\tAverage Grade: " << average << endl;
        cout << " \t\t\tRemark: " << remark << endl << endl;

        // Ask to process another student
        cout << " \t\t\tProcess Another? Y/N: ";
        cin >> processAnother;
        cin.ignore(); // Clear input buffer
        cout << endl;
    }

    // Display summary
    cout << "\n\t\t\tTotal No. of Student Passed: " << totalPassed << endl;
    cout << "\t\t\tTotal No. of Student Failed: " << totalFailed << endl;
    cout << "\t\t\tTotal No. of Student Processed: " << totalProcessed << endl << endl;

    // Programmer's name
    cout << " Programmer's Name: Kyle Barco" << endl;

    return 0;
}
