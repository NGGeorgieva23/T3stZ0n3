#include <iostream>
#include <string>
#include "../Header/quiz.h"

using namespace std;

int askQuestion(string question, string options[], char correct) {
    cout << question << endl;
    for (int i = 0; i < 4; i++) {
        cout << char('A' + i) << ". " << options[i] << endl;
    }
    cout << "Your answer: ";
    char ans;
    cin >> ans;
    ans = toupper(ans);
    return ans == correct ? 1 : 0;
}

int runQuiz() {
    int score = 0;

    string q1 = "What is the correct file extension for C++ source files?";
    string o1[] = { ".cp", ".c++", ".cpp", ".c" };
    score += askQuestion(q1, o1, 'C');

    string q2 = "Which keyword is used to create a class in C++?";
    string o2[] = { "function", "class", "struct", "object" };
    score += askQuestion(q2, o2, 'B');

    string q3 = "What does HTML stand for?";
    string o3[] = { "Hyper Trainer Marking Language", "Hyper Text Markup Language", "Hyper Text Marketing Language", "Hyper Tool Multi Language" };
    score += askQuestion(q3, o3, 'B');

    string q4 = "Which tag is used for inserting an image in HTML?";
    string o4[] = { "<img>", "<image>", "<src>", "<pic>" };
    score += askQuestion(q4, o4, 'A');

    string q5 = "Which company developed JavaScript?";
    string o5[] = { "Microsoft", "Sun Microsystems", "Netscape", "IBM" };
    score += askQuestion(q5, o5, 'C');

    string q6 = "What is used to declare a variable in JS?";
    string o6[] = { "v", "var", "int", "let" };
    score += askQuestion(q6, o6, 'B');

    return score;
}