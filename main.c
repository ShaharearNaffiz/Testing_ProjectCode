/*
 * NSU CAMPUS ADVENTURE - IMPROVED VERSION (~250 lines)
 * Text-based adventure game for CSE115 group project.
 */

#include <stdio.h>
#include <string.h>

/* ========== GLOBAL VARIABLES ========== */
char playerName[50];
int knowledge = 0;
int confidence = 0;
int mistakes = 0;

/* ========== FUNCTION DECLARATIONS ========== */
void mainMenu();
void startGame();
void gate();
void academicBlock();
void libraryPuzzle();
void clubFair();
void plaza();
void showEnding();
int getChoice(int min, int max);

/* ========== INPUT VALIDATION FUNCTION ========== */
int getChoice(int min, int max) {
    int choice;
    while (1) {
        scanf("%d", &choice);
        if (choice >= min && choice <= max) {
            return choice;
        }
        printf("Invalid input! Enter between %d-%d: ", min, max);
    }
}

/* ========== ENDING FUNCTION ========== */
void showEnding() {
    printf("\n========================================\n");
    printf("         YOUR FIRST DAY AT NSU          \n");
    printf("========================================\n");
    printf("Knowledge: %d   Confidence: %d   Mistakes: %d\n", knowledge, confidence, mistakes);

    if (knowledge >= 6 && confidence >= 6) {
        printf("\n✨ LEGENDARY STUDENT! You dominated campus life!\n");
    }
    else if (knowledge >= 3 || confidence >= 3) {
        printf("\n👍 GOOD DAY! You're adapting well at NSU.\n");
    }
    else if (mistakes < 2) {
        printf("\n📚 NORMAL DAY. You'll improve with time.\n");
    }
    else {
        printf("\n😵 CHAOTIC DAY! But learning takes time.\n");
    }

    printf("\nThanks for playing, %s!\n", playerName);
}

/* ========== PLAZA SCENE ========== */
void plaza() {
    printf("\n--- NSU PLAZA ---\n");
    printf("Students are chatting near the fountain.\n");
    printf("1. Join conversation (confidence)\n");
    printf("2. Visit Registrar Office (knowledge)\n");
    printf("3. End the day\n");
    printf("Choice: ");

    int choice = getChoice(1, 3);

    if (choice == 1) {
        printf("\nYou make new friends from CSE department!\n");
        confidence += 3;
    }
    else if (choice == 2) {
        printf("\nYou learn important academic procedures.\n");
        knowledge += 3;
    }
    else {
        printf("\nYou decide to end your first day.\n");
    }

    showEnding();
}

/* ========== CLUB FAIR (NEW SCENE) ========== */
void clubFair() {
    printf("\n--- CLUB FAIR ---\n");
    printf("Many clubs are recruiting students.\n");
    printf("1. Join Programming Club\n");
    printf("2. Join Cultural Club\n");
    printf("3. Skip and go to Plaza\n");
    printf("Choice: ");

    int choice = getChoice(1, 3);

    if (choice == 1) {
        printf("\nYou join Programming Club and meet seniors!\n");
        knowledge += 2;
        confidence += 1;
    }
    else if (choice == 2) {
        printf("\nYou join Cultural Club and gain confidence!\n");
        confidence += 3;
    }
    else {
        printf("\nYou skip clubs and move ahead.\n");
    }

    plaza();
}

/* ========== LIBRARY PUZZLE ========== */
void libraryPuzzle() {
    printf("\n--- CENTRAL LIBRARY ---\n");
    printf("Solve this puzzle to print your schedule.\n");
    printf("If CSE115 has 3 credits and you take 4 courses,\n");
    printf("Total credits = ? (3 x 4)\n");
    printf("Answer: ");

    int ans;
    scanf("%d", &ans);

    if (ans == 12) {
        printf("\nCorrect! +2 Knowledge.\n");
        knowledge += 2;
    } else {
        printf("\nWrong answer! You ask librarian for help.\n");
        mistakes++;
    }

    clubFair();
}

/* ========== ACADEMIC BUILDING ========== */
void academicBlock() {
    printf("\n--- ACADEMIC BUILDING ---\n");
    printf("You need to reach your CSE115 class.\n");
    printf("1. Take Lift\n");
    printf("2. Take Stairs\n");
    printf("Choice: ");

    int choice = getChoice(1, 2);

    if (choice == 1) {
        printf("\nYou meet a senior who gives you tips!\n");
        confidence += 2;
    }
    else {
        printf("\nYou meet a professor on stairs.\n");
        printf("Professor asks: 'Where do programmers study?'\n");
        printf("1. Lab  2. Library  3. Cafeteria\n");
        printf("Answer: ");
        int q = getChoice(1, 3);
        if (q == 2) {
            printf("Correct! +2 Knowledge.\n");
            knowledge += 2;
        } else {
            printf("Wrong but professor guides you.\n");
            mistakes++;
        }
    }

    libraryPuzzle();
}

/* ========== GATE SCENE ========== */
void gate() {
    printf("\n--- NSU MAIN GATE ---\n");
    printf("Security: 'Where is your admission proof?'\n");
    printf("1. Be honest\n");
    printf("2. Show confidence\n");
    printf("3. Show email proof\n");
    printf("Choice: ");

    int choice = getChoice(1, 3);

    if (choice == 1) {
        printf("Honesty appreciated. You may enter.\n");
        confidence += 1;
    }
    else if (choice == 2) {
        printf("Confidence impresses security!\n");
        confidence += 2;
    }
    else {
        printf("Smart move showing email proof.\n");
        knowledge += 1;
        confidence += 1;
    }

    academicBlock();
}

/* ========== START GAME ========== */
void startGame() {
    printf("\nEnter your name: ");
    scanf("%s", playerName);

    knowledge = 0;
    confidence = 0;
    mistakes = 0;

    printf("\nWelcome %s to North South University!\n", playerName);
    printf("Your adventure begins now...\n");

    gate();
}

/* ========== MAIN MENU ========== */
void mainMenu() {
    int choice;

    do {
        printf("\n========================================\n");
        printf("        NSU CAMPUS ADVENTURE           \n");
        printf("========================================\n");
        printf("1. Start New Game\n");
        printf("2. How to Play\n");
        printf("3. About\n");
        printf("4. Exit\n");
        printf("Choice: ");

        choice = getChoice(1, 4);

        if (choice == 1) {
            startGame();
        }
        else if (choice == 2) {
            printf("\nChoose options by typing numbers.\n");
            printf("Your choices affect Knowledge & Confidence.\n");
        }
        else if (choice == 3) {
            printf("\nCSE115 Group Project: Text-Based Adventure Game.\n");
            printf("Explore NSU campus through interactive choices.\n");
        }
        else {
            printf("\nExiting... Best of luck at NSU!\n");
        }

    } while (choice != 4);
}

/* ========== MAIN FUNCTION ========== */
int main() {
    mainMenu();
    return 0;
}


