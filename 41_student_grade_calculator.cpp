#include <iostream>
using namespace std;

float calculatePercentage(int m1, int m2, int m3, int m4, int m5) {
    int total = m1 + m2 + m3 + m4 + m5;
    return total / 5.0;
}

char calculateGrade(float percentage) {
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    string name;
    int m1, m2, m3, m4, m5;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float percentage = calculatePercentage(m1, m2, m3, m4, m5);
    char grade = calculateGrade(percentage);

    cout << "\n----- Result -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}