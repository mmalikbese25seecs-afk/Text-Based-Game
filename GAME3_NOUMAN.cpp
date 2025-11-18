#include<iostream>
#include<ctime>
using namespace std;

int accuracy = 30;
int trace = 0;

void start() {
    char key;
    cout << "Press any key to start the investigation:";
    cin >> key;
    cout << endl;
    cout << "The mansion looks empty after the demise of MR.SHAH JAHAN " << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Select a location to investigate" << endl;
    cout << "1.Study Room(Murder Place)" << endl;
    cout << "2.Garden" << endl;
    cout << "3.Kitchen" << endl;
}

void clues() {
    int loc = 0;
    cin >> loc;
    while (loc != 1 && loc != 2 && loc != 3) {
        cout << "Please enter a valid location '1','2' or '3'" << endl;
        cin >> loc;
    }
    if (loc == 1) {
        cout << "--STUDY ROOM--" << endl;
        int subsearch1;
        cout << "The body of Mr.Shah Jahan is lying on the ground \nThere are no BLOOD STAINS";
        cout << "\nThere is no MURDER WEAPON present!!!" << endl << endl;
        trace++;
        cout << "Do you want to investigate further in the study room?(1=Yes,2=No)";
        cin >> subsearch1;
        while (subsearch1 != 1 && subsearch1 != 0) {
            cout << "\nPlease enter a valid choice(1 or 0)";
            cin >> subsearch1;
        }
        if (subsearch1 == 1) {
            cout << "Several pieces of broken glass are present on the ground" << endl;
            cout << "\t\t\t\t================================" << endl;
            accuracy += 20;
            trace++;
        }
        else if (subsearch1 == 0) {
            accuracy -= 10;
        }
    }
    else if (loc == 2) {
        cout << "--GARDEN--" << endl;
        cout << "The garden has no such noticeable clue" << endl << endl;
        int subsearch2;
        cout << "Do you want to investigate further in the garden(1=Yes,2=No)";
        cin >> subsearch2;
        while (subsearch2 != 1 && subsearch2 != 0) {
            cout << "Please enter a valid input";
            cin >> subsearch2;
        }
        if (subsearch2 == 1) {
            cout << "\nThe flower pots look dry but other than that everything seems perfect" << endl;
            accuracy += 20;
             trace+= 2;
        }
        else if (subsearch2 == 0) {
            accuracy -= 20;
        }
    }
    else if (loc == 3) {
        cout << "--KITCHEN--" << endl;
        cout << "The Kitchen looks clean.A bottle of orange juice is lying on the shelf" << endl << endl;
        trace++;
        int subsearch3;
        cout << "Do you want to investigate further in the kitchen(1=Yes,2=No)";
        cin >> subsearch3;
        while (subsearch3 != 1 && subsearch3 != 0) {
            cout << "Please enter a valid input";
            cin >> subsearch3;
        }
        if (subsearch3 == 1) {
            cout << "\nThere is some whitepowder on the table.It looks like POISON!!!" << endl;
            cout << "There are footprints on ground as well" << endl;
            accuracy += 20;
        trace+=2;
        }
        else if (subsearch3 == 0) {
            cout << endl;
            accuracy -= 20;
        }
    }
}

void interview() {
    int intr;
    cout << "There are 3 suspects.Whom do you want to interview" << endl;
    cout << "1.Gardner=AKBAR" << endl;
    cout << "2.Maid=Azha" << endl;
    cout << "3.Bussiness partner=Mr.Aurangzeb" << endl << endl;
    cin >> intr;
    if (intr == 1) {
        int intr1;
        cout << "AKBAR is looking a bit TERRIFIED" << endl;
        cout << "Select a Qestion to ask(1 or 2)" << endl;
        cout << "1.Where were you Mr.Akbar when the murder happened?" << endl;
        cout << "2.How much do you earn?" << endl << endl;
        cin >> intr1;
        while (intr1 != 1 && intr1 != 2) {
            cout << "Please enter a valid input";
            cin >> intr1;
        }
        if (intr1 == 1) {
            accuracy += 10;
            cout << "I am taking care of plants in the garden since morning " << endl;
            cout << "         Believe me,I did not do anything" << endl;
        }
        else if (intr1 == 2) {
            accuracy -= 10;
            cout << "Irrelevant Question!Warning" << endl;
            cout << "\nI earned sufficient sir!";
        }
    }
    else if (intr == 2) {
        int intr2;
        cout << "Azha is looking FEARED and SHAKING" << endl;
        cout << "Select a Qestion to ask(1 or 2)" << endl;
        cout << "1.Where were you AZHA when the murder happened?" << endl;
        cout << "2.What did you serve to Mr.SHAH JAHAN last night?" << endl << endl;
        cin >> intr2;
        while (intr2 != 1 && intr2 != 2) {
            cout << "Please enter a valid input";
            cin >> intr2;
        }
        if (intr2 == 1) {
            accuracy += 10;
            cout << "I was in the kitchen whole day I just went to study room to clean book shelves " << endl;
            cout << "After that,sir called me to serve -ORANGE- juice to his bussiness partner" << endl;
            cout << "Sir always drank juice in a large mug" << endl;
        }
        else if (intr2 == 2) {
            accuracy -= 10;
            cout << "Irrelevant Question!Warning" << endl;
            cout << "\nI served him apple juice last night!";
        }
    }
    else if (intr == 3) {
        int intr3;
        cout << "Mr.Aurangzeb is looking Confident" << endl;
        cout << "Select a Qestion to ask(1 or 2)" << endl;
        cout << "1.Where were you Mr.Aurangzeb when the murder happened?" << endl;
        cout << "2.What did Mr.SHAH JAHAN like ?" << endl << endl;
        cin >> intr3;
        while (intr3 != 1 && intr3 != 2) {
            cout << "Please enter a valid input";
            cin >> intr3;
        }
        if (intr3 == 1) {
            accuracy += 10;
            cout << "I was sitting with sir and discussing business matters " << endl;
            cout << "  Maid served us orange juice I drank it but SIR did not do so " << endl;
            cout << "DETECTIVE:Why Mr.Shah Jahan did not drink the juice" << endl;
            cout << "Mr.Aurangzeb:He said that he will drink it later because of his mood.Then I came back home" << endl;
        }
        else if (intr3 == 2) {
            accuracy -= 10;
            cout << "Irrelevant Question!Warning" << endl;
            cout << "\nHe liked fruit juices" << endl;
        }
    }
}

void culprit() {
    int accused;
    cout << endl;
    cout << "It is now time to FIND THE KILLER" << endl;
    cout << "Select whom you want to accuse" << endl;
    cout << "1=Maid(Azha)" << endl;
    cout << "2=Gardner(Akbar)" << endl;
    cout << "3=Bussiness Partner(Mr.Aurangzeb)" << endl;
    cin >> accused;
    while (accused != 1 && accused != 2 && accused != 3) {
        cout << "Please enter a valid input '1','2','3'";
        cin >> accused;
    }

    if (accused != 2) {
        cout << "You accused the wrong person " << endl;
        cout << "Shame on you!!!!" << endl;
        cout << "The GARDNER mixed poison in the large mug of Mr.SHAH JAHAN when maid went to clean the book shelves in the study room" << endl;
        cout << "When Mr.Shah JAHAN drank juice he was standing,He fell down and the glass shattered and he DIED on spot!!" << endl;
        cout << "\t\t\t\t============================================" << endl;
    }
    else {
        cout << "Congratulations!You're a real detective" << endl;
        cout << "The GARDNER mixed poison in the large mug of Mr.SHAH JAHAN when maid went to clean the book shelves in the study room" << endl;
        cout << "When Mr.Shah JAHAN drank juice he was standing,He fell down and the glass shattered and he DIED on spot!!" << endl;
        cout << "============================================" << endl;
        cout << "\t\t\t\tCASE SUMMARY" << endl;
        cout << "Accuracy= " << accuracy << endl;
        cout << "Clues found= " << trace << endl;
    }
}

void scenario3() {
    start();  // Start the game
    for (int i = 1; i <= 3; i++) {
        cout << "\t\t\t\tInvestigation#" << i << endl;
        clues();  // Investigate clues
    }
    cout << "=========================================================" << endl;
    for (int i = 1; i <= 3; i++) {
        cout << "\t\t\t\tInterviewing Suspects#" << i << endl;
        interview();  // Interview suspects
        cout << "\t\t\t\t========================" << endl;
    }
    if (accuracy < 0) accuracy = 0;
if (accuracy > 100) accuracy = 100;
    culprit();  // Find the culprit
}

int main() {
    scenario3();  
    return 0;
}

