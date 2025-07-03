# Quiz Application

This is a console-based quiz program written in C++. It tests users on various subjects such as English, Physics, Computer Science, and Mathematics through multiple-choice questions. The program keeps track of the user's score and provides feedback based on their performance.

---

## Features

- Multiple-choice questions from different subjects (English, Physics, Computer Science, Math).
- Real-time input without needing to press Enter after each answer (using `getch()`).
- User details (Name and Registration Number) are taken and saved to a text file (`test.txt`).
- Score calculation and pass/fail feedback.
- Option to retake the quiz.
- Loading effects using pauses for better user experience.

---

## How to Use

1. Run the program.
2. Enter your **Name** and **Registration Number** when prompted.
3. Answer each question by pressing the key corresponding to the correct option (a, b, c, or d).  
   *(No need to press Enter after each answer.)*
4. After completing the quiz, your result (pass/fail) and score will be displayed.
5. Your name, registration number, and results will be saved in `test.txt`.
6. You can choose to retake the quiz by pressing `C` or `c` when prompted.

---

## Requirements

- A C++ compiler that supports the following headers:
  - `<iostream>`
  - `<conio.h>`
  - `<windows.h>`
  - `<fstream>`

- This program is designed to run on Windows OS because it uses Windows-specific headers (`conio.h` and `windows.h`).

---

## Code Overview

- **Student Structure**: Stores user name and registration number.
- **Main Loop**: Runs the quiz questions in a `do-while` loop.
- **Questions**: Implemented using a `switch` statement to display 40 questions across different subjects.
- **Scoring**: Increments marks for each correct answer.
- **File Handling**: Saves user data and results in a text file.

---

## Notes

- The program clears the screen between questions for a clean interface.
- The quiz includes questions from multiple subjects to test general knowledge.
- Sleep and delay functions are used to simulate loading and improve UX.

---

## Sample Output

Enter your name: John Doe
Registration No: 12345

Question no: 1
Your English Test is Start
He is _ to school.
a) go
b) going
c) gone
d) gone

(press 'b')

...

Please wait for Result...
Name is: John Doe
Registration No is: 12345
Congratulations! You have passed.
Your Score is: 32 out of 40
