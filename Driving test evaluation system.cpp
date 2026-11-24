#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Learner and test score variables
    string studentName;
    double theoryMarks;
    double practicalMarks;

    // Prompt instructor for marks
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate average score
    double averageScore = (theoryMarks + practicalMarks) / 2.0;

    // Determine pass/fail status (pass mark is 50 and above)
    string status = (averageScore >= 50.0) ? "Passed" : "Failed";

    // Display evaluation summary
    cout << fixed << setprecision(2);
    cout << "\n--- Rocky Driving School Result ---\n";
    cout << "Student Name   : " << studentName << "\n";
    cout << "Theory Marks   : " << theoryMarks << "\n";
    cout << "Practical Marks: " << practicalMarks << "\n";
    cout << "Average Score  : " << averageScore << "\n";
    cout << "Result         : " << status << "\n";
    cout << "----------------------------------\n";

    return 0;
}