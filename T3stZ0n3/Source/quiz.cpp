#include <iostream>  // Include the iostream library for input/output operations
#include <string>  // Include the string library to use string objects
#include "../Header/quiz.h"  // Include the header file for quiz-related functions

using namespace std;  // Use the standard namespace to avoid needing to prefix "std::"

// Function to ask a multiple-choice question and check the user's answer
int askQuestion(string question, string options[], char correct) {
    cout << question << endl;  // Display the question
    for (int i = 0; i < 4; i++) {  // Loop through the options and display them
        cout << char('A' + i) << ". " << options[i] << endl;  // Display each option with corresponding letter (A, B, C, D)
    }
    cout << "Your answer: ";  // Prompt the user to input their answer
    char ans;  // Variable to store the user's answer
    cin >> ans;  // Read the user's input
    ans = toupper(ans);  // Convert the answer to uppercase to handle both uppercase and lowercase inputs
    return ans == correct ? 1 : 0;  // Return 1 if the answer is correct, otherwise return 0
}

// Function to run the quiz and calculate the score
int runQuiz() {
    int score = 0;  // Initialize the score to 0

    // Define the first question, its options, and the correct answer ('C')
    string q1 = "What is the correct file extension for C++ source files?";
    string o1[] = { ".cp", ".c++", ".cpp", ".c" };
    score += askQuestion(q1, o1, 'C');  // Ask the question and add to the score if the answer is correct

    // Define the second question, its options, and the correct answer ('B')
    string q2 = "Which keyword is used to create a class in C++?";
    string o2[] = { "function", "class", "struct", "object" };
    score += askQuestion(q2, o2, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the third question, its options, and the correct answer ('B')
    string q3 = "What does HTML stand for?";
    string o3[] = { "Hyper Trainer Marking Language", "Hyper Text Markup Language", "Hyper Text Marketing Language", "Hyper Tool Multi Language" };
    score += askQuestion(q3, o3, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the fourth question, its options, and the correct answer ('A')
    string q4 = "Which tag is used for inserting an image in HTML?";
    string o4[] = { "<img>", "<image>", "<src>", "<pic>" };
    score += askQuestion(q4, o4, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the fifth question, its options, and the correct answer ('C')
    string q5 = "Which company developed JavaScript?";
    string o5[] = { "Microsoft", "Sun Microsystems", "Netscape", "IBM" };
    score += askQuestion(q5, o5, 'C');  // Ask the question and add to the score if the answer is correct

    // Define the sixth question, its options, and the correct answer ('B')
    string q6 = "What is used to declare a variable in JS?";
    string o6[] = { "v", "var", "int", "let" };
    score += askQuestion(q6, o6, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the seventh question, its options, and the correct answer ('A')
    string q7 = "Which of the following is the correct syntax for declaring a variable in C++ and JavaScript?";
    string o7[] = { "int x = 10; (C++) and var x = 10; (JavaScript)", "var x = 10; (C++) and let x = 10; (JavaScript)", "let x = 10; (C++) and int x = 10; (JavaScript)", "int x = 10; (C++) and const x = 10; (JavaScript)" };
    score += askQuestion(q7, o7, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the eighth question, its options, and the correct answer ('A')
    string q8 = "What is the correct tag for a hyperlink in HTML?";
    string o8[] = { "<a>", "<link>", "<button>", "<href>" };
    score += askQuestion(q8, o8, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the ninth question, its options, and the correct answer ('A')
    string q9 = "Which JavaScript method is used to output to the console?";
    string o9[] = { "console.log()", "print()", "echo()", "log.console()" };
    score += askQuestion(q9, o9, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the tenth question, its options, and the correct answer ('B')
    string q10 = "Which HTML tag is used to define a paragraph?";
    string o10[] = { "<text>", "<p>", "<div>", "<section>" };
    score += askQuestion(q10, o10, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the eleventh question, its options, and the correct answer ('C')
    string q11 = "Which C++ operator is used for adding two numbers?";
    string o11[] = { "-", "*", "+", "/" };
    score += askQuestion(q11, o11, 'C');  // Ask the question and add to the score if the answer is correct

    // Define the twelfth question, its options, and the correct answer ('B')
    string q12 = "How do you create a function in JavaScript?";
    string o12[] = { "function myFunction(){}", "func myFunction(){ }", "def myFunction(){}", "create myFunction(){}" };
    score += askQuestion(q12, o12, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the thirteenth question, its options, and the correct answer ('A')
    string q13 = "Which symbol is used for multiplication in JavaScript?";
    string o13[] = { "*", "%", "&", "@" };
    score += askQuestion(q13, o13, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the fourteenth question, its options, and the correct answer ('C')
    string q14 = "Which tag is used to define a list item in HTML?";
    string o14[] = { "<li>", "<ol>", "<ul>", "<item>" };
    score += askQuestion(q14, o14, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the fifteenth question, its options, and the correct answer ('C')
    string q15 = "Which of the following is used to repeat a block of code in C++?";
    string o15[] = { "while", "do-while", "for", "foreach" };
    score += askQuestion(q15, o15, 'C');  // Ask the question and add to the score if the answer is correct

    // Define the sixteenth question, its options, and the correct answer ('D')
    string q16 = "Which of these is a correct way to add a comment in C++?";
    string o16[] = { "<!-- comment -->", "/* comment */", "# comment", "// comment" };
    score += askQuestion(q16, o16, 'D');  // Ask the question and add to the score if the answer is correct

    // Define the seventeenth question, its options, and the correct answer ('B')
    string q17 = "What is the correct syntax for an 'if' statement in JavaScript?";
    string o17[] = { "if x > 10 { }", "if (x > 10) { }", "if x > 10 then { }", "if (x > 10) then { }" };
    score += askQuestion(q17, o17, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the eighteenth question, its options, and the correct answer ('A')
    string q18 = "What does CSS stand for?";
    string o18[] = { "Cascading Style Sheets", "Coded Style Sheets", "Color Style Sheets", "Creative Style Sheets" };
    score += askQuestion(q18, o18, 'A');  // Ask the question and add to the score if the answer is correct

    // Define the nineteenth question, its options, and the correct answer ('B')
    string q19 = "What is the default value of a boolean in JavaScript?";
    string o19[] = { "undefined", "false", "true", "null" };
    score += askQuestion(q19, o19, 'B');  // Ask the question and add to the score if the answer is correct

    // Define the twentieth question, its options, and the correct answer ('B')
    string q20 = "Which of the following is correct for creating a comment in HTML?";
    string o20[] = { "// comment", "<!-- comment -->", "# comment", "/* comment */" };
    score += askQuestion(q20, o20, 'B');  // Ask the question and add to the score if the answer is correct

    return score;  // Return the final score after all questions have been answered
}
