#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float energy = 100, reputation = 50;


void scenario1(){

    char subsearch, subsearch1, subsearch2;
    char search, note, breaker, breaker1, decision;
    bool loop = true, loop1 = true;


    cout << "\t\t\t\tProfessor Ahmed reports a robbery at his home." << endl;
    cout << "\tHis wife claims she was asleep, and the only neighbour nearby is someone who works night shifts." << endl;
    cout << "\t\tYou, Detective, must find out whos telling the truth before evidence is lost." << endl;
    cout << "\t --------------------------------------------------------------------------------------------------------";
    cout << endl;


    //SETTING UP THE CONDITION OF ENERGY LEVEL 


    while (energy >= 20) {
        // the function start here



     // The functions starts with asking the user where to go

        cout << "\t --------------------------------------------------------------------------------------------------------";
        cout << endl;
        cout << " Now you have three option," << endl;
        cout << "1. Check House, 2. Interview Wife , 3. Interview Neighbour" << endl << endl;
        cin >> search;


        while (search != '1' && search != '2' && search != '3') {
            // if user gets wrong input, it is not considered

            cout << "Invalid input. Please enter '1' or '2' or '3' again: " << endl;
            cin >> search;
        }
        if (search == '1') {

            energy -= 10;  // energy decreases 10 % per going

            while (loop == true) {

                // the user enters house and further has choice

                cout << "\t\tNow you are checking the house" << endl << endl;

                cout << "You can see 1. the living room, 2. Study room, 3. Roof " << endl;

                cin >> subsearch;

                // wrong input will enforce user to input again

                while (subsearch != '1' && subsearch != '2' && subsearch != '3') {
                    cout << "Invalid input. Please enter '1' or '2' or '3'again: " << endl;
                    cin >> subsearch;
                }

                //enter the living room and clue of broken window

                if (subsearch == '1') {

                    energy -= 10;

                    cout << "\t The window of the living room is broaken.\n \t Do you want to note this down?(Y/N) ";
                    cout << endl << endl;
                    cin >> note;
                    // the user is checked if he notes useful clue

                    while (note != 'Y' && note != 'N') {
                        cout << "Invalid input. Please enter 'Y' or 'N' again: " << endl;
                        cin >> note;
                    }
                    if (note == 'Y') {
                        // noting down clue increases reputation
                        cout << "You availed the clue\n" << endl;
                        reputation += 5;

                    }
                    else if (note == 'N') {
                        //other wise it decreases
                        cout << "You wasted the clue\n" << endl;
                        reputation -= 5;

                        energy -= 10;
                    }

                }

                // STUDY ROOM AND MISSING PAPERS

                else if (subsearch == '2') {

                    energy -= 10;

                    cout << "\t The drawer of the study room is open and the papers of property missing." << endl << endl;

                    cout << "\t Do you want to note this down?(Y/N)" << endl;

                    cin >> note;


                    while (note != 'Y' && note != 'N') {
                        cout << "Invalid input. Please enter 'Y' or 'N' again: " << endl;
                        cin >> note;
                    }

                    if (note == 'Y') {
                        cout << "You availed the clue\n" << endl;
                        reputation += 5;

                    }

                    else if (note == 'N') {
                        cout << "You wasted the clue\n" << endl;
                        reputation -= 5;
                        energy -= 10;
                    }
                }

                // the roof with no link of robbery

                else if (subsearch == '3') {

                    energy -= 10;

                    cout << "Checking the roof" << endl;
                    cout << "Nothing found, you wasted energy." << endl << endl;
                    energy -= 10;
                }

                // To leave the house, the break ststemen is used 

                cout << "\t \t Do you want to leave house (Y) or search more(N)?(Y/N)" << endl;

                cin >> breaker;

                while (breaker != 'Y' && breaker != 'N') {
                    cout << "Invalid input. Please enter 'Y' or 'N' again: " << endl;
                    cin >> breaker;
                }

                if (breaker == 'Y') {
                    break;
                }

                else if (breaker == 'N') {
                    continue;
                }

            }
        }

        // option 2 of investigating wife

        else if (search == '2') {
            energy -= 10;    // the energy decreases as you inqire wife


            cout << "YOU ARE INQUIRING THE WIFE OF PROFESSOR \n" << endl;
            cout << "YOU CAN CHOSE AN OPTION \n" << endl;

            cout << "1. WHERE DO YOU WORK." << endl;
            cout << "2. WHERE WERE YOU AT THE TIME OF ROBBERY." << endl;
            cout << "3. HOW MUCH YOU EARN." << endl;

            // the user can avail 3 options or questions

            cin >> subsearch1;

            while (subsearch1 != '1' && subsearch1 != '2' && subsearch1 != '3') {
                cout << "Invalid input. Please enter '1' or '2' or '3' again: " << endl;
                cin >> subsearch1;
            }
            if (subsearch1 == '2') {


                cout << " \"I was asleep but heard some sound \" " << endl;
                cout << "She hesitated and refrained eye contact." << endl;
                cout << "Do you want to note this?" << endl;

                cin >> note;

                while (note != 'Y' && note != 'N') {

                    cout << "Invalid input. Please enter 'Y' or 'N' again: " << endl;


                }

                if (note == 'Y') {

                    cout << "You availed the clue\n" << endl;
                    reputation += 5;
                    // you noted the hesitation of wife so
                }

                else if (note == 'N') {

                    cout << "You wasted the clue\n" << endl;
                    reputation -= 5;
                    energy -= 10;
                }



            }

            else if (subsearch1 == '1') {

                cout << "An invalid question to ask" << endl;
                reputation -= 5;
                energy -= 10;
            }

            else if (subsearch1 == '3') {

                cout << "An invalid question to ask" << endl;
                energy -= 10;
                reputation -= 5;
            }

            cout << "\t --------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t --------------------------------------------------------------------------------------------------------";
            cout << endl;
        }
        //option 3 of investigating neighbour

        else if (search == '3') {
            energy -= 10;


            cout << "What you will want to investigate from neighbour?" << endl << endl;
            cout << "1. Where were you at the time of robbery?" << endl;
            cout << "2. Where you earn from?" << endl;
            cout << "3. Where do you live?" << endl << endl;

            cin >> subsearch2;

            while (subsearch2 != '1' && subsearch2 != '2' && subsearch2 != '3') {
                cout << "Invalid input. Please enter '1' or '2' or '3' again: " << endl;
                cin >> subsearch2;
            }

            if (subsearch2 == '1') {

                cout << " \"I was out from home but saw a man with red coat \" " << endl << endl;

                cout << "He is injured and injury seems quite new and refrained eye contact." << endl << endl;

                cout << "Do you want to note this?";
                cin >> note;

                while (note != 'Y' && note != 'N') {

                    cout << "Invalid input. Please enter 'Y' or 'N' again: " << endl;


                }

                if (note == 'Y') {

                    cout << "You availed the clue\n";
                    reputation += 5;
                }

                else if (note == 'N') {

                    cout << "You wasted the clue\n";
                    reputation -= 5;
                }



            }

            else if (subsearch2 == '2') {

                cout << "An invalid question to ask" << endl;
                reputation -= 5;

            }
            else if (subsearch2 == '3') {
                cout << "An invalid question to ask" << endl;
                reputation -= 5;
            }
            cout << "\t --------------------------------------------------------------------------------------------------------";
            cout << "\t --------------------------------------------------------------------------------------------------------";
            cout << endl;

        }
        cout << "\t --------------------------------------------------------------------------------------------------------";
        cout << "\t --------------------------------------------------------------------------------------------------------";
        cout << endl;
        cout << "Want more search (Y/N)" << endl;
        cin >> breaker1;
        while (breaker1 != 'Y' && breaker1 != 'N') {
            cout << "Invalid input. Please enter 'Y' or 'N' again: ";
            cout << endl;
            cin >> breaker1;
        }
        if (breaker1 == 'Y') {
            continue;

        }
        else if (breaker1 == 'N') {
            break;
        }
        if (energy == 20) {    //Theuser fails as the energy is less than 20
            cout << endl;
            cout << endl;
            cout << "\t \t You Failed,energy too low";
            cout << "\t \t Reputation = " << reputation << endl;
            return;
        }
    }
    cout << "Based on invetigation, Who is the culprit" << endl;
    cout << "1. The wife, 2. The neighbour, 3. Both" << endl << endl;
    cin >> decision;
    while (decision != '1' && decision != '2' && decision != '3') {
        cout << "Invalid input. Please enter '1' or '2' or '3' again: " << endl;
        cout << endl;
        cin >> decision;
    }
    if (decision == '1' || decision == '2') {
        cout << "you failed";
        cout << endl;
        reputation -= 20;
    }
    else if (decision == '3') {
        cout << "You Won!!" << endl;
        cout << "\t --------------------------------------------------------------------------------------------------------";
        cout << "\t --------------------------------------------------------------------------------------------------------";
        cout << endl;
        cout << "THE WIFE MADE PLAN WITH NEIGHBOUR TO ROB HER OWN HUSBAND \n";
        cout << endl;
        reputation += 20;
    }
    cout << "\t\t Your Reputation = " << reputation;
    cout << endl;
    cout << "\t\t Energy remaining = " << energy;
    cout << endl;
    cout << "\t --------------------------------------------------------------------------------------------------------";
    cout << endl;
}


// scenario two of SYED USMAN BUKHARI MUDER DETECTIVE GAME

bool visited[6] = { false };
void clue(int choice, int score, int energytotal, int culprit);
int energytotal = 100, score = 0;
void summary(int energytotal, int score)
{

    cout << "Your Energy after this investigation is: " << energytotal << endl;
    cout << "Your Reputation after this investigation is: " << score << endl;
    cout << "-------------------------------------" << endl;
    cout << "             GOOD BYE!" << endl;
    cout << "-------------------------------------" << endl;
    exit(0);
}
void investigation(int choice)
{
    switch (choice)
    {
    case 4:
        cout << "-------------------------------------" << endl;
        cout << "Reply by Sophine Maid" << endl;
        cout << "I am not Culprit" << endl;
        cout << "I dont even know Mr. James Lara" << endl;
        cout << "-------------------------------------" << endl;
        break;
    case 5:
        cout << "-------------------------------------" << endl;
        cout << "Reply by Electrician Jake" << endl;
        cout << "I am not Culprit" << endl;
        cout << "Who is Mr. James Lara I dont even know him" << endl;
        cout << "-------------------------------------" << endl;
        break;
    case 6:
        cout << "-------------------------------------" << endl;
        cout << "Reply by Clara the Guest" << endl;
        cout << "He was my Business Partner" << endl;
        cout << "We have a meeting" << endl;
        cout << "But I am not Culprit" << endl;
        cout << "I have not Murdered him" << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
}
void scenario2()
{
    cout << endl;
    cout << "=====================================" << endl
        << endl;
    cout << "     MURDER INVESTIGATION GAME!" << endl;
    cout << endl
        << "=====================================";
    cout << endl;
    cout << "-------------------------------------" << endl;
    cout << "|        GAME INSTRUCTIONS...       |" << endl;
    cout << "-------------------------------------" << endl
        << endl;
    cout << "A Crime has been ocurred in Serena Hotel!" << endl;
    cout << "Someone killed Business Tycon Mr. James Lara" << endl;
    cout << "You are the Detective in Charge of Solving it" << endl;
    cout << "Find clues,question suspects,and catch the culprit" << endl
        << endl;
    cout << "-------------------------------------" << endl;
    cout << "|             SUSPECTS!             |" << endl;
    cout << "-------------------------------------" << endl
        << endl;
    cout << "These are the three suspects" << endl;
    cout << "During the incident" << endl;
    cout << "Sophie(Maid) found the body of Mr. James Lara" << endl;
    cout << "Jake(Electrician) was fixing lights in Hallway" << endl;
    cout << "Clara(Guest) met Mr. James Lara for business meeting" << endl
        << endl;
    cout << "-------------------------------------" << endl;
    if (energytotal < 20)
    {
        cout << "-------------------------------------" << endl;
        cout << "Sorry Detective does not have enough energy" << endl;
        cout << "This Detective is not able to do this investegation" << endl;
        cout << "-------------------------------------" << endl;
        summary(energytotal, score);
    }
    // Culprit is generated as random
    int collectedclues = 0;
    srand(time(0));
    int culprit = 1 + rand() % 3;
    int choice;
    cout << "|  where do you wanna investigate   |" << endl;
    cout << "-------------------------------------" << endl
        << endl;
    while (energytotal > 20)
    {
        if (!visited[1])
            cout << "For Bedroom select(1)" << endl;
        if (!visited[2])
            cout << "For Hallway select(2)" << endl;
        if (!visited[3])
            cout << "For Backyard select(3)" << endl
            << endl;
        if (!visited[4])
            cout << "Investigation from the Sophie Press(4)" << endl;
        if (!visited[5])
            cout << "Investigation from the Jake Press(5)" << endl;
        if (!visited[6])
            cout << "Investigation from the Clara Press(6)" << endl
            << endl;
        cout << "Guess Directly the Culprit Press(0)  : ";
        cin >> choice;
        if (choice < 0 || choice > 6)
        {
            cout << "Invalid Input" << endl;
            cout << "Please Select the correct input!" << endl;
            continue;
        }

        if (choice != 0 && visited[choice])
        {
            cout << "You have already investigated this place";
            cout << "Select a different input" << endl;
        }
        if (choice != 0)
        {
            visited[choice] = true;
        }
        if (choice == 1)
        {
            energytotal -= 10;
            collectedclues++;
            clue(choice, score, energytotal, culprit);
        }
        else if (choice == 2 || choice == 3)
        {
            energytotal -= 10;
            collectedclues++;
            clue(choice, score, energytotal, culprit);
        }
        else if (choice == 4 || choice == 5 || choice == 6)
        {
            collectedclues++;
            energytotal -= 15;
            score += 15;
            investigation(choice);
        }

        else if (choice == 0)
        {

            int guess;
            cout << "-------------------------------------" << endl;
            cout << "|          who is Culprit?          |" << endl;
            cout << "-------------------------------------" << endl;
            cout << "1.Sophie\n2.Jake\n3.Clara " << endl;
            cout << "Press (1,2,3)" << endl;
            cin >> guess;
            if (guess == culprit)
            {
                score += 50;
                cout << "-------------------------------------" << endl;
                cout << "Congratulations" << endl;
                cout << "You have guessed it Correct" << endl;
                cout << "You have won the game!" << endl;
                cout << "-------------------------------------" << endl;

                summary(energytotal, score);
            }
            else if (guess != culprit)
            {
                cout << "-------------------------------------" << endl;
                cout << "SORRY! " << endl;
                cout << "You Guessed it Wrong." << endl;
                if (culprit == 1)
                {
                    cout << "Culprit was Sophie the Maid!" << endl;
                }
                else if (culprit == 2)
                {
                    cout << "Culprit was Jake the Electrician!" << endl;
                }
                else if (culprit == 3)
                {
                    cout << "Culprit was Clara the Guest!" << endl;
                }
                cout << "-------------------------------------" << endl;
                summary(energytotal, score);
            }
        }

        cout << "Collected Clues = " << collectedclues << endl;
        cout << "Remaing Energy = " << energytotal << endl;
        cout << "-------------------------------------" << endl;
        continue;
    }
}
void clue(int choice, int reputation, int energy, int culprit)
{
    int initialclue = 0;
    initialclue++;
    cout << endl
        << "-------------------------------------" << endl;
    cout << "Detective started looking for clues" << endl;
    cout << "-------------------------------------" << endl
        << endl;
    energy = energy - 20;

    if (choice == 1)
    {
        int hint;
        srand(time(0));
        hint = 1 + rand() % 3;
        if (hint == 1)
        {
            cout << "You just discovered a mystery Handkrchiff and Syrup" << endl;
            reputation = reputation + 10;
        }
        else if (hint == 2)
        {
            cout << "You discovered Toren invitation card of a meeting" << endl;
            reputation = reputation + 30;
        }
        else if (hint == 3)
        {
            cout << "You discovered an expensive mystery Knife stained with blood" << endl;
            reputation = reputation + 40;
        }
    }
    else if (choice == 2)
    {
        cout << "You discovered nothing" << endl;
        reputation = reputation - 10;
    }
    else if (choice == 3)
    {
        cout << "You discovered Broken Pieces of Wine Glass" << endl;
        reputation = reputation + 20;
    }
    cout << endl
        << "-------------------------------------" << endl;
}

//Code by Noman Majeed Secreats Behind the study Room
int accuracy = 30;
int trace = 0;

void start() {
    cout << "===============================" << endl;
    cout << "Secrets Behind the Study Room" << endl;
    cout << "===============================" << endl;
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
        cout << "Do you want to investigate further in the study room?(1=Yes,0=No)";
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
        cout << "Do you want to investigate further in the garden(1=Yes,0=No)";
        cin >> subsearch2;
        while (subsearch2 != 1 && subsearch2 != 0) {
            cout << "Please enter a valid input";
            cin >> subsearch2;
        }
        if (subsearch2 == 1) {
            cout << "\nThe flower pots look dry but other than that everything seems perfect" << endl;
            accuracy += 20;
            trace += 2;
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
        cout << "Do you want to investigate further in the kitchen(1=Yes,0=No)";
        cin >> subsearch3;
        while (subsearch3 != 1 && subsearch3 != 0) {
            cout << "Please enter a valid input";
            cin >> subsearch3;
        }
        if (subsearch3 == 1) {
            cout << "\nThere is some whitepowder on the table.It looks like POISON!!!" << endl;
            cout << "There are footprints on ground as well" << endl;
            accuracy += 20;
            trace += 2;
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
    int selection;
    cout << "-------------------------------------" << endl;
    cout << "           DETECTIVE GAMES   " << endl;
    cout << "-------------------------------------" << endl;
    cout << "      Powered by FELON GAMES     " << endl;
    cout << "      Please Select Your Game         " << endl;
    cout << "=====================================" << endl;
    cout << "1. Theif Mystery\n2. Murder Mystery\n3. Secrets Behind Study Room" << endl;
    cout << "Press(1 or 2 or 3)" << endl;
    cin >> selection;
    if (selection == 1)
    {
        scenario1();
    }
    else if (selection == 2)
    {
        scenario2();
    }
    else if (selection == 3)
    {
        scenario3();
    }
    return 0;
}



