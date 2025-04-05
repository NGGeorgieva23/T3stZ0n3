#include <iostream>
#include "../Header/utils.h"

using namespace std;

void clearScreen() {
    system("cls"); // Replace with "clear" if you're on Linux/macOS
}

void pause() {
    cout << "\nPress enter to continue...";
    cin.ignore();
    cin.get();
}

int calculateGrade(int correctAnswers, int totalQuestions) {
    double percent = (double)correctAnswers / totalQuestions * 100;
    if (percent < 50) return 2;
    if (percent < 60) return 3;
    if (percent < 70) return 4;
    if (percent < 80) return 5;
    return 6;
}
