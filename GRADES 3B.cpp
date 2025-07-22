// Abir Seth
// PRN-24070123003
// Entc A1
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float avg;

    cout << "Enter marks for subject 1: ";
    cin >> m1;

    cout << "Enter marks for subject 2: ";
    cin >> m2;

    cout << "Enter marks for subject 3: ";
    cin >> m3;

    cout << "Enter marks for subject 4: ";
    cin >> m4;

    cout << "Enter marks for subject 5: ";
    cin >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout << "Percentage: " << avg << "%" << endl;

    if (avg >= 90) {
        cout << "Grade: O" << endl;
    } else if (avg >= 85 && avg < 90) {
        cout << "Grade: A+" << endl;
    } else if (avg >= 75 && avg < 85) {
        cout << "Grade: A" << endl;
    } else if (avg >= 60 && avg < 75) {
        cout << "Grade: B" << endl;
    } else if (avg >= 50 && avg < 60) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

Enter marks for subject 1: 46
Enter marks for subject 2: 67
Enter marks for subject 3: 78
Enter marks for subject 4: 65
Enter marks for subject 5: 75
Percentage: 66.2%
Grade: B

