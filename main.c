#include <stdio.h>

char studentName[50];
int knowledgePoints = 0;
int confidencePoints = 0;
int mistakesMade = 0;

/* Forward Declarations */
void legendaryStudentEnding();
void goodStudentEnding();
void averageStudentEnding();
void lostStudentEnding();
void plazaArea();
void printRoomMath();
void printRoomCipher();
void libraryScene();
void stairsPath();
void liftPath();
void academicBuilding();
void gateScene();
void startGame();
void showMenu();

/* Ending Functions */
void legendaryStudentEnding() {
    printf("\n\n");
    printf("========================================================\n");
    printf("          CONGRATULATIONS %s!                          \n", studentName);
    printf("========================================================\n\n");

    printf("YOU ACHIEVED: LEGENDARY STUDENT STATUS!\n\n");

    printf("Your NSU Adventure Report Card:\n");
    printf("===============================\n");
    printf("- Knowledge Gained: %d/10 points [PASS]\n", knowledgePoints);
    printf("- Confidence Level: %d/10 points [PASS]\n", confidencePoints);
    printf("- Campus Navigation: PERFECT!\n");
    printf("- Problem Solving: EXCELLENT!\n\n");

    printf("SPECIAL ACHIEVEMENTS UNLOCKED:\n");
    printf("  - Mastered NSU Campus Layout\n");
    printf("  - Solved All Campus Puzzles\n");
    printf("  - Made New Friends\n");
    printf("  - Found Important Locations\n\n");

    printf("Your Future at NSU Looks Bright!\n");
    printf("You're ready to ace CSE115 and all your courses!\n");
    printf("Professors will remember your name!\n\n");

    printf("*****  5-STAR STUDENT  *****\n");
}

void goodStudentEnding() {
    printf("\n\n");
    printf("========================================================\n");
    printf("               GOOD JOB %s!                            \n", studentName);
    printf("========================================================\n\n");

    printf("YOU COMPLETED YOUR FIRST DAY AT NSU!\n\n");

    printf("Your Progress Report:\n");
    printf("=====================\n");
    printf("- Knowledge: %d/10 points\n", knowledgePoints);
    printf("- Confidence: %d/10 points\n", confidencePoints);
    printf("- Mistakes Made: %d times\n\n", mistakesMade);

    printf("WHAT YOU LEARNED TODAY:\n");
    printf("  - How to navigate NSU campus\n");
    printf("  - Where important offices are\n");
    printf("  - How to ask for help when needed\n\n");

    printf("You're on the right track!\n");
    printf("Keep this up and you'll do great in CSE115!\n");
    printf("Remember: Office hours are your friend!\n\n");

    printf("Good luck with your studies!\n");
}

void averageStudentEnding() {
    printf("\n\n");
    printf("--------------------------------------------------------\n");
    printf("          FIRST DAY COMPLETE, %s!                      \n", studentName);
    printf("--------------------------------------------------------\n\n");

    printf("YOUR NSU JOURNEY BEGINS!\n\n");

    printf("Today's Summary:\n");
    printf("===============\n");
    printf("- You found your way around (mostly!)\n");
    printf("- You learned some campus locations\n");
    printf("- You made a few friends\n\n");

    printf("TIPS FOR TOMORROW:\n");
    printf("  - Download the NSU campus map\n");
    printf("  - Arrive 15 minutes early for classes\n");
    printf("  - Don't be afraid to ask for directions\n\n");

    printf("Remember: Every expert was once a beginner!\n");
    printf("You'll get better at navigating with time.\n");
    printf("See you in CSE115 class!\n");
}

void lostStudentEnding() {
    printf("\n\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("          OOPS! CAMPUS CONFUSION                       \n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");

    printf("Oh dear %s,\n", studentName);
    printf("It seems NSU's large campus got the better of you today!\n\n");

    printf("Don't worry - this happens to many new students!\n");
    printf("NSU can be confusing at first with all its buildings.\n\n");

    printf("QUICK TIPS FOR NEXT TIME:\n");
    printf("  1. Look for campus maps near entrances\n");
    printf("  2. Ask security guards for directions\n");
    printf("  3. Follow other students to classes\n");
    printf("  4. Use Google Maps on campus\n\n");

    printf("Remember: Getting lost is part of the NSU experience!\n");
    printf("You'll laugh about this during your graduation!\n");
}

/* Plaza Area Scene - Final Scene */
void plazaArea() {
    int choice;

    printf("\n====================================================\n");
    printf("              WELCOME TO NSU PLAZA!                \n");
    printf("====================================================\n\n");

    printf("You made it to the heart of campus, %s!\n", studentName);
    printf("Students are everywhere - chatting, studying, eating.\n");
    printf("The famous NSU fountain is in the center.\n\n");

    printf("Where would you like to go?\n");
    printf("1. Visit Cafeteria (Make friends, eat lunch)\n");
    printf("2. Registrar Office (Get student ID card)\n");
    printf("3. Library (Study for CSE115)\n");
    printf("4. Go Home (End campus tour)\n");
    printf("\nEnter choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nCAFETERIA VISIT:\n");
        printf("You meet some CSE115 classmates!\n");
        printf("You exchange phone numbers and form a study group.\n");
        confidencePoints += 3;
        printf("+3 Confidence Points! Total: %d\n\n", confidencePoints);

        printf("They tell you about the best teachers and study spots.\n");
        printf("This will really help in your first semester!\n");
    }
    else if(choice == 2) {
        printf("\nREGISTRAR OFFICE:\n");
        printf("After a short wait, you get your official NSU ID card!\n");
        printf("Your student ID is: 221-XXX-XXX\n");
        printf("Now you can access all campus facilities!\n");
        knowledgePoints += 3;
        printf("+3 Knowledge Points! Total: %d\n\n", knowledgePoints);
    }
    else if(choice == 3) {
        printf("\nLIBRARY STUDY SESSION:\n");
        printf("You find a quiet corner and review C programming basics.\n");
        printf("You feel more prepared for your CSE115 class tomorrow.\n");
        knowledgePoints += 2;
        confidencePoints += 1;
        printf("+2 Knowledge, +1 Confidence Points!\n");
    }
    else if(choice == 4) {
        printf("\nHEADING HOME:\n");
        printf("You decide to call it a day. What a first day at NSU!\n");
    }
    else {
        printf("\nInvalid choice! You wander around confused.\n");
        mistakesMade++;
    }

    /* Calculate and show ending based on points */
    printf("\n\nYOUR FIRST DAY AT NSU IS COMPLETE!\n");
    printf("====================================\n");

    if(knowledgePoints >= 8 && confidencePoints >= 8) {
        legendaryStudentEnding();
    }
    else if(knowledgePoints >= 5 || confidencePoints >= 5) {
        goodStudentEnding();
    }
    else if(mistakesMade < 3) {
        averageStudentEnding();
    }
    else {
        lostStudentEnding();
    }
}

/* Print Room - Math Path */
void printRoomMath() {
    int answer1, answer2;

    printf("\n====================================================\n");
    printf("           FIND THE PRINT ROOM - MATH TEST          \n");
    printf("====================================================\n\n");

    printf("The library staff gives you a simple math test:\n\n");

    printf("QUESTION 1: Basic Arithmetic\n");
    printf("If CSE115 has 3 lectures per week and 1 lab,\n");
    printf("how many total sessions? (3 + 1 = ?)\n");
    printf("Enter answer: ");
    scanf("%d", &answer1);

    printf("\nQUESTION 2: Simple Multiplication\n");
    printf("NSU has 5 academic buildings with 8 floors each.\n");
    printf("Approximate total floors? (5 x 8 = ?)\n");
    printf("Enter answer: ");
    scanf("%d", &answer2);

    if(answer1 == 4 && answer2 == 40) {
        printf("\nCORRECT! The print room is on 3rd Floor, Room 302.\n");
        printf("You successfully print your admission documents!\n");
        knowledgePoints += 2;
        printf("+2 Knowledge Points! Great job!\n");
        plazaArea();
    } else {
        printf("\nWrong answers. You'll need to ask for help again.\n");
        mistakesMade++;
        plazaArea();
    }
}

/* Print Room - Simple Cipher */
void printRoomCipher() {
    int choice;

    printf("\n====================================================\n");
    printf("            SIMPLE CODE DECODING                   \n");
    printf("====================================================\n\n");

    printf("The librarian gives you this coded message:\n");
    printf("PRINT ROOM IS ON THIRD FLOOR\n");
    printf("CODED AS: 16-18-9-14-20  18-15-15-13  9-19  15-14  20-8-9-18-4  6-12-15-15-18\n\n");

    printf("HINT: A=1, B=2, C=3, ... Z=26\n");
    printf("So 1=A, 2=B, 3=C, etc.\n\n");

    printf("What floor is the print room on?\n");
    printf("1. Second Floor\n");
    printf("2. Third Floor (Correct)\n");
    printf("3. Fourth Floor\n");
    printf("4. Fifth Floor\n");
    printf("\nEnter choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 2) {
        printf("\nEXCELLENT DECODING!\n");
        printf("You correctly decoded 'THIRD FLOOR'!\n");
        printf("The print room is indeed on 3rd floor, Room 302.\n");
        knowledgePoints += 3;
        printf("+3 Knowledge Points! You're a natural at codes!\n");
        plazaArea();
    } else {
        printf("\nWrong floor. Try decoding carefully next time!\n");
        mistakesMade++;
        plazaArea();
    }
}

/* Library Scene */
void libraryScene() {
    int choice;

    printf("\n====================================================\n");
    printf("            NSU CENTRAL LIBRARY                    \n");
    printf("====================================================\n\n");

    printf("Wow %s! The library is HUGE!\n", studentName);
    printf("So many books, computers, and quiet study areas.\n");
    printf("You need to print your admission documents.\n\n");

    printf("What do you do?\n");
    printf("1. Ask at Help Desk\n");
    printf("2. Look for signs\n");
    printf("3. Ask another student\n");
    printf("\nEnter choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 3) {
        printf("\nGood choice asking for help!\n");
        printf("They give you a simple code to solve.\n");
        printRoomCipher();
    }
    else if(choice == 2) {
        printf("\nYou try to find it yourself.\n");
        printf("After getting lost, you ask a library staff member.\n");
        printRoomMath();
    }
    else {
        printf("\nYou wander around confused.\n");
        mistakesMade++;
        libraryScene();
    }
}

/* Stairs Path - Simple Riddle */
void stairsPath() {
    int answer;

    printf("\n====================================================\n");
    printf("           MEET A HELPFUL PROFESSOR                \n");
    printf("====================================================\n\n");

    printf("Professor: 'Hello! You look new. Need help finding something?'\n");
    printf("You: 'Yes sir, I need to find the library to print documents.'\n\n");

    printf("Professor: 'I will help you! Answer this simple riddle:\n");
    printf("I am full of books but I am not a bookstore,\n");
    printf("Students come to me when they want to score more.\n");
    printf("What am I?'\n\n");

    printf("1. Classroom\n");
    printf("2. Library (Correct)\n");
    printf("3. Computer Lab\n");
    printf("4. Teacher's Office\n");
    printf("\nEnter answer (1-4): ");
    scanf("%d", &answer);

    if(answer == 2) {
        printf("\nProfessor: 'Correct! The library is straight ahead.\n");
        printf("Take the first right, then left at the fountain.'\n");
        confidencePoints += 2;
        printf("+2 Confidence Points! Good thinking!\n");
        libraryScene();
    } else {
        printf("\nProfessor: 'Not quite. The answer was Library.\n");
        printf("But I will show you the way anyway. Follow me.'\n");
        mistakesMade++;
        libraryScene();
    }
}

/* Lift Path - Simple Puzzle */
void liftPath() {
    int choice;

    printf("\n====================================================\n");
    printf("           MEET A FRIENDLY SENIOR                  \n");
    printf("====================================================\n\n");

    printf("Senior: 'Hey freshman! You look lost. Need help?'\n");
    printf("You: 'Yes! I need to find the library.'\n\n");

    printf("Senior: 'Sure! But first, help me with this quick puzzle:\n");
    printf("To get to library from here, which direction first?\n\n");

    printf("You are at Academic Building. Library is:\n");
    printf("1. Go North, then West\n");
    printf("2. Go South, then East (Correct)\n");
    printf("3. Go East, then North\n");
    printf("4. Go West, then South\n");
    printf("\nEnter choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 2) {
        printf("\nSenior: 'Perfect! You have good sense of direction!\n");
        printf("Here is a campus map. Library is marked with a star.'\n");
        knowledgePoints += 2;
        printf("+2 Knowledge Points! You are learning the campus!\n");
        libraryScene();
    } else {
        printf("\nSenior: 'Actually, it is South then East.\n");
        printf("But do not worry, here is the map anyway.'\n");
        mistakesMade++;
        libraryScene();
    }
}

/* Academic Building Scene */
void academicBuilding() {
    int choice;

    printf("\n====================================================\n");
    printf("           NSU ACADEMIC BUILDINGS                  \n");
    printf("====================================================\n\n");

    printf("You are standing between NAC and SAC buildings.\n");
    printf("So many students rushing to classes!\n");
    printf("The lifts have long lines, and stairs are empty.\n\n");

    printf("How do you want to proceed?\n");
    printf("1. Wait for NAC lift (Meet a senior)\n");
    printf("2. Wait for SAC lift (Meet a senior)\n");
    printf("3. Take the stairs (Meet a professor)\n");
    printf("\nEnter choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 2) {
        printf("\nYou wait in line for the lift.\n");
        printf("A friendly senior student starts talking to you!\n");
        liftPath();
    }
    else if(choice == 3) {
        printf("\nGood choice! Stairs are faster and healthier.\n");
        printf("On the stairs, you meet a professor!\n");
        stairsPath();
    }
    else {
        printf("\nYou stand confused and miss all opportunities.\n");
        mistakesMade++;
        academicBuilding();
    }
}

/* Gate Scene - First Decision */
void gateScene() {
    int choice;

    printf("\n====================================================\n");
    printf("           NSU GATE NO: 1                          \n");
    printf("====================================================\n\n");

    printf("Security Guard: 'Welcome to NSU! May I see your admission letter?'\n");
    printf("You realize you forgot to bring it! Oh no!\n\n");

    printf("What do you do?\n");
    printf("1. Be honest: 'Sorry sir, I forgot my documents.'\n");
    printf("2. Be confident: 'I am a new student, my ID is coming.'\n");
    printf("3. Show phone: 'I have email proof on my phone.'\n");
    printf("\nEnter choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nSecurity Guard: 'Honesty is good. Since you are honest,\n");
        printf("I will let you in. Visit registrar office first thing.'\n");
        confidencePoints += 1;
        printf("+1 Confidence Point for honesty!\n");
    }
    else if(choice == 2) {
        printf("\nSecurity Guard: 'You seem confident for a new student!\n");
        printf("Welcome to NSU! Go ahead.'\n");
        confidencePoints += 2;
        printf("+2 Confidence Points!\n");
    }
    else if(choice == 3) {
        printf("\nSecurity Guard: 'Smart thinking using technology!\n");
        printf("That email is enough proof. Welcome to NSU!'");
        knowledgePoints += 1;
        confidencePoints += 1;
        printf("+1 Knowledge, +1 Confidence Points!\n");
    }
    else {
        printf("\nYou panic and do not say anything.\n");
        printf("Security Guard lets you in anyway with a warning.\n");
        mistakesMade++;
    }

    printf("\nYou are inside NSU campus! Let the adventure begin!\n");
    academicBuilding();
}

/* Start Game Function */
void startGame() {
    printf("\n\n");
    printf("========================================================\n");
    printf("      WELCOME TO NORTH SOUTH UNIVERSITY!               \n");
    printf("                                                        \n");
    printf("        The Centre of Excellence in                    \n");
    printf("          Higher Education!                            \n");
    printf("========================================================\n\n");

    printf("Your Virtual NSU Adventure Begins!\n");
    printf("===================================\n\n");

    printf("IMPORTANT: Your choices will shape your experience!\n");
    printf("   Choose wisely or you might get lost on campus!\n\n");

    printf("Press Enter to start your journey...");
    getchar();
    getchar();

    printf("\nFirst, let's get to know you!\n");
    printf("==============================\n");
    printf("What is your name? ");
    scanf("%s", studentName);

    printf("\nNice to meet you, %s! Ready for your NSU adventure?\n", studentName);
    printf("Remember: This is practice for your real first day!\n\n");

    gateScene();
}

/* Main Menu */
void showMenu() {
    int choice;

    printf("\n========================================================\n");
    printf("            NSU CAMPUS ADVENTURE GAME                  \n");
    printf("                  (CSE115 Edition)                      \n");
    printf("========================================================\n");
    printf("                                                        \n");
    printf("  1. Start New Game                                     \n");
    printf("  2. How to Play                                        \n");
    printf("  3. About This Game                                    \n");
    printf("  4. Exit                                               \n");
    printf("                                                        \n");
    printf("========================================================\n\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 1) {
        startGame();
    }
    else if(choice == 2) {
        printf("\nHOW TO PLAY:\n");
        printf("============\n");
        printf("- Use numbers 1, 2, 3 to make choices\n");
        printf("- Read each situation carefully\n");
        printf("- There are no wrong answers - just different experiences!\n");
        printf("- Try to collect Knowledge and Confidence points\n");
        printf("- Different endings based on your choices\n");
        printf("\nPress Enter to continue...");
        getchar(); getchar();
        showMenu();
    }
    else if(choice == 3) {
        printf("\nABOUT THIS GAME:\n");
        printf("================\n");
        printf("Created for CSE115 students at NSU!\n");
        printf("Practice navigating campus before your first day.\n");
        printf("Learn about important locations and campus culture.\n");
        printf("\nPerfect for new NSU students!\n");
        printf("\nPress Enter to continue...");
        getchar(); getchar();
        showMenu();
    }
    else if(choice == 4) {
        printf("\nThank you for playing!\n");
        printf("Good luck with your studies at NSU!\n");
        printf("See you in CSE115 class!\n");
    }
    else {
        printf("\nPlease enter 1, 2, 3, or 4.\n");
        showMenu();
    }
}

/* Main Function */
int main() {
    printf("\n");
    printf("========================================================\n");
    printf("        NORTH SOUTH UNIVERSITY CAMPUS ADVENTURE        \n");
    printf("               Perfect for New Students!               \n");
    printf("========================================================\n");

    showMenu();

    return 0;
}
