#include <iostream>
#include <cstring>
#include <cstdlib>
#include <list>

using namespace std;

class Player{
    private:
        char choice;
        int choiceInt;
    public:
        string selfPlayerName;
        int selfPlayerMoney, selfPlayerLives;

        Player(){
            selfPlayerName = "";
            selfPlayerLives = 3;
            selfPlayerMoney = 0;
        }

        string gettingPlayerName(){
            string inputName;
            cout << "Please Input your Name: ";
            cin >> inputName;
            selfPlayerName = inputName;
        }

        void introductionPane(){
            cout << "=====================================================\n"
                    "=====================================================\n"
                    "||                MALIGAYANG PAGDATING              ||\n"
                    "||                        SA                        ||\n"
                    "||                     JEOPARDY                     ||\n"
                    "=====================================================\n"
                    "=====================================================\n" << endl;
        }

        int welcomePlayer(){

            cout << "Mabuhay " << selfPlayerName << "!" << "Handa ka na bang maglaro ng Jeopardy? [y/n]" << endl;
            cin >> choice;
            if (choice == 'y'){
                choiceInt = 1;
                return choiceInt;
            }else if (choice == 'n'){
                choiceInt = 0;
                return choiceInt;
            }else{
                choiceInt = -1;
                return choiceInt;
            }

        }

        int correctAnsAddMoney(int prize){
            selfPlayerMoney += prize;
            return selfPlayerMoney;

        }
        int wrongAnsLoseLife(){
            selfPlayerLives -= 1;
            return selfPlayerLives;
        }
};
class Biology{
    public:
        string selftitleTopic;
        string selfQuestions[5];
        string selfAnswers[5];
        int selfPrizes[5] = {100, 200, 500, 1000, 5000};
        Biology(){
            selftitleTopic = "Biology ";
            selfQuestions[0] = "Mitocondria";
            selfQuestions[1] = "Ovum";
            selfQuestions[2] = "Kidneys";
            selfQuestions[3] = "Crustaceans";
            selfQuestions[4] = "Photosynthesis";

            selfAnswers[0] = "Powerhouse_of_the_Cell";
            selfAnswers[1] = "Female_Gametes";
            selfAnswers[2] = "Filtration";
            selfAnswers[3] = "Crabs";
            selfAnswers[4] = "Oxygen_and_Food";
        }

        string viewTopic(){
            return selftitleTopic;
        }
        int viewPrices(){
            int pickedPrice;
            cout << "PLEASE! IF THE VALUE IS ZERO YOU MUSN'T ACCESS THEM IT'S REMOVED" << endl;
            for (int i = 0; i < (int) sizeof(selfPrizes)/sizeof(selfPrizes[0]); i++){
                cout << selfPrizes[i] << endl;
            }
            cin >> pickedPrice;
            return pickedPrice;
        }

        string viewQuestions(int valuePicked){
                    string answerQuestion;
                    if(valuePicked == 100){
                        cout << "Question #1 (separate answers with underscore): ";
                        cout << selfQuestions[0] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 200){
                        cout << "Question #2 (separate answers with underscore): ";
                        cout << selfQuestions[1] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 500){
                        cout << "Question #3 (separate answers with underscore): ";
                        cout << selfQuestions[2] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 1000){
                        cout << "Question #4 (separate answers with underscore): ";
                        cout << selfQuestions[3] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 5000){
                        cout << "Question #5 (separate answers with underscore): ";
                        cout << selfQuestions[4] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else{
                        return "\0";
                    }

        }
        int* removePriceIfCorrect(int i){
         selfPrizes[i] = 0;
         return selfPrizes;
        }
};
class Physics{
    public:
        string selftitleTopic;
        string selfQuestions[5];
        string selfAnswers[5];
        int selfPrizes[5] = {100, 200, 500, 1000, 5000};
        Physics(){
            selftitleTopic = "Physics";
            selfQuestions[0] = "9.8 m/s^2";
            selfQuestions[1] = "Electron, Proton, and Neutron";
            selfQuestions[2] = "Battery";
            selfQuestions[3] = "Schrodingers Cat";
            selfQuestions[4] = "Photon";

            selfAnswers[0] = "Gravity";
            selfAnswers[1] = "Atom";
            selfAnswers[2] = "Voltage";
            selfAnswers[3] = "Quantum_Mehanics";
            selfAnswers[4] = "Light";

        }

        string viewTopic(){
        return selftitleTopic;
        }
        int viewPrices(){
            int pickedPrice;
            cout << "PLEASE! IF THE VALUE IS ZERO YOU MUSN'T ACCESS THEM IT'S REMOVED" << endl;
            for (int i = 0; i < (int) sizeof(selfPrizes)/sizeof(selfPrizes[0]); i++){
                cout << selfPrizes[i] << endl;
            }
            cin >> pickedPrice;
            return pickedPrice;
        }

        string viewQuestions(int valuePicked){
                    string answerQuestion;
                    if(valuePicked == 100){
                        cout << "Question #1 (separate answers with underscore): ";
                        cout << selfQuestions[0] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 200){
                        cout << "Question #2 (separate answers with underscore): ";
                        cout << selfQuestions[1] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 500){
                        cout << "Question #3 (separate answers with underscore): ";
                        cout << selfQuestions[2] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 1000){
                        cout << "Question #4 (separate answers with underscore): ";
                        cout << selfQuestions[3] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 5000){
                        cout << "Question #5 (separate answers with underscore): ";
                        cout << selfQuestions[4] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else{
                        return "\0";
                    }

        }
        int* removePriceIfCorrect(int i){
         selfPrizes[i] = 0;
         return selfPrizes;
        }
};

class Mathematics{
    public:
        string selftitleTopic;
        string selfQuestions[5];
        string selfAnswers[5];
        int selfPrizes[5] = {100, 200, 500, 1000, 5000};
        Mathematics(){
            selftitleTopic = "Math";
            selfQuestions[0] = "d/dx";
            selfQuestions[1] = "Bell Curve";
            selfQuestions[2] = "Physics and Engineering";
            selfQuestions[3] = "Matrix";
            selfQuestions[4] = "Vector";

            selfAnswers[0] = "Derivative";
            selfAnswers[1] = "Curve";
            selfAnswers[2] = "Application";
            selfAnswers[3] = "Transformation";
            selfAnswers[4] = "Linear_Algebra";

        }

        string viewTopic(){
        return selftitleTopic;
        }
        int viewPrices(){
            int pickedPrice;
            cout << "PLEASE! IF THE VALUE IS ZERO YOU MUSN'T ACCESS THEM IT'S REMOVED" << endl;
            for (int i = 0; i < (int) sizeof(selfPrizes)/sizeof(selfPrizes[0]); i++){
                cout << selfPrizes[i] << endl;
            }
            cin >> pickedPrice;
            return pickedPrice;
        }

        string viewQuestions(int valuePicked){
                    string answerQuestion;
                    if(valuePicked == 100){
                        cout << "Question #1 (separate answers with underscore): ";
                        cout << selfQuestions[0] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 200){
                        cout << "Question #2 (separate answers with underscore): ";
                        cout << selfQuestions[1] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 500){
                        cout << "Question #3 (separate answers with underscore): ";
                        cout << selfQuestions[2] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 1000){
                        cout << "Question #4 (separate answers with underscore): ";
                        cout << selfQuestions[3] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else if (valuePicked == 5000){
                        cout << "Question #5 (separate answers with underscore): ";
                        cout << selfQuestions[4] << endl;
                        cin >> answerQuestion;
                        return answerQuestion;
                    }else{
                        return "\0";
                    }

                }
        int* removePriceIfCorrect(int i){
         selfPrizes[i] = 0;
         return selfPrizes;
        }
};
void choicesPart();
int displayTopics();
void processOfGameplayBIO();
void processOfGameplayP6();
void processOfGameplayMATH();
void checkifCorrectOrNotBIO(int i, string answer);
void checkifCorrectOrNotP6(int i, string answer);
void checkifCorrectOrNotMATH(int i, string answer);
Player player1;
Biology bayology;
Physics pisiks;
Mathematics math;

int main()
{
    player1.gettingPlayerName();
    player1.introductionPane();
    if (player1.welcomePlayer() == 1){
            choicesPart();
    }else{
        cout << "Adios" << endl;
    }

    return 0;
}
void choicesPart(){
int result = displayTopics();
    if (result == 1){
        processOfGameplayBIO();
    }else if (result == 2){
        processOfGameplayP6();
    }else if (result == 3){
        processOfGameplayMATH();
    }else if(result == 0){
        cout << "CONGRATSSSSSSSSSS!!!" << endl;
    }else if (result < 0){
        cout << "KEywordERROR"<< endl;
    }

}
int displayTopics(){
    int choicebeingPicked;
    cout << "Hello again "<< player1.selfPlayerName << endl;
    cout << "Here are your choices: " << endl;
    if (bayology.selfPrizes[0] <= 0 && bayology.selfPrizes[1] <= 0 && bayology.selfPrizes[2] <= 0 && bayology.selfPrizes[3] <= 0 && bayology.selfPrizes[4] <= 0 ){
        cout << "DO NOT ENTER 1, YOU'VE ALREADY FINISHED IT!" << endl;
    }
    if (pisiks.selfPrizes[0] <= 0 && pisiks.selfPrizes[1] <= 0 && pisiks.selfPrizes[2] <= 0 && pisiks.selfPrizes[3] <= 0 && pisiks.selfPrizes[4] <= 0 ){
        cout << "DO NOT ENTER 2, YOU'VE ALREADY FINISHED IT!" << endl;
    }
    if (math.selfPrizes[0] <= 0 && math.selfPrizes[1] <= 0 && math.selfPrizes[2] <= 0 && math.selfPrizes[3] <= 0 && math.selfPrizes[4] <= 0 ){
        cout << "DO NOT ENTER 3, YOU'VE ALREADY FINISHED IT!" << endl;
    }
    if (player1.selfPlayerMoney == 20400){
        cout << "CONGRATULATIONS YOU WON!!!" << endl;
        return 0;
    }
    cout << "1 - " << bayology.viewTopic() << endl;
    cout << "2 - " << pisiks.viewTopic() << endl;
    cout << "3 - " << math.viewTopic() << endl;
    cout << "What's your choice? ";
    cin >> choicebeingPicked;

    if (choicebeingPicked == 1){
        return 1;
    }else if (choicebeingPicked == 2){
        return 2;
    }else if(choicebeingPicked == 3){
        return 3;
    }else if (player1.selfPlayerMoney == 20400){
       return 0;
    }else{
        return -1;
    }
}
void processOfGameplayBIO(){
    while(player1.selfPlayerLives > 0){
        if (bayology.selfPrizes[0] <= 0 && bayology.selfPrizes[1] <= 0 && bayology.selfPrizes[2] <= 0 && bayology.selfPrizes[3] <= 0 && bayology.selfPrizes[4] <= 0 ){
            cout << "CONGRATS YOU'VE MADE IT!" << endl;
            choicesPart();
    }
        int resultPrices = bayology.viewPrices();
        string resultsAnswer = bayology.viewQuestions(resultPrices);
        cout << resultsAnswer << endl;
        checkifCorrectOrNotBIO(resultPrices, resultsAnswer);

    }
    if(player1.selfPlayerLives <=0){
        cout << "Game Over" << endl;
    }
}

void processOfGameplayP6(){
    while(player1.selfPlayerLives > 0){
        if (pisiks.selfPrizes[0] <= 0 && pisiks.selfPrizes[1] <= 0 && pisiks.selfPrizes[2] <= 0 && pisiks.selfPrizes[3] <= 0 && pisiks.selfPrizes[4] <= 0 ){
            cout << "CONGRATS YOU'VE MADE IT!" << endl;
            choicesPart();
    }
        int resultPrices = pisiks.viewPrices();
        string resultsAnswer = pisiks.viewQuestions(resultPrices);
        cout << resultsAnswer << endl;
        checkifCorrectOrNotP6(resultPrices, resultsAnswer);

    }
    if(player1.selfPlayerLives <=0){
        cout << "Game Over" << endl;
    }
}

void processOfGameplayMATH(){
    while(player1.selfPlayerLives > 0){
        if (math.selfPrizes[0] <= 0 && math.selfPrizes[1] <= 0 && math.selfPrizes[2] <= 0 && math.selfPrizes[3] <= 0 && math.selfPrizes[4] <= 0 ){
            cout << "CONGRATS YOU'VE MADE IT!" << endl;
            choicesPart();
    }
        int resultPrices = math.viewPrices();
        string resultsAnswer = math.viewQuestions(resultPrices);
        cout << resultsAnswer << endl;
        checkifCorrectOrNotMATH(resultPrices, resultsAnswer);

    }
    if(player1.selfPlayerLives <=0){
        cout << "Game Over" << endl;
    }

}

void checkifCorrectOrNotBIO(int i, string answer){
    int index[5] = {0,1,2,3,4};
    if (i == 100){
        if(answer == bayology.selfAnswers[index[0]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            bayology.removePriceIfCorrect(0);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 200){
        if(answer == bayology.selfAnswers[index[1]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            bayology.removePriceIfCorrect(1);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 500){
        if(answer == bayology.selfAnswers[index[2]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            bayology.removePriceIfCorrect(2);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 1000){
        if(answer == bayology.selfAnswers[index[3]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            bayology.removePriceIfCorrect(3);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 5000){
        if(answer == bayology.selfAnswers[index[4]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            bayology.removePriceIfCorrect(4);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else{
        cout << "Wrong Keyword" << endl;
    }

}

void checkifCorrectOrNotP6(int i, string answer){
    int index[5] = {0,1,2,3,4};
    if (i == 100){
        if(answer == pisiks.selfAnswers[index[0]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            pisiks.removePriceIfCorrect(0);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 200){
        if(answer == pisiks.selfAnswers[index[1]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            pisiks.removePriceIfCorrect(1);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 500){
        if(answer == pisiks.selfAnswers[index[2]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            pisiks.removePriceIfCorrect(2);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 1000){
        if(answer == pisiks.selfAnswers[index[3]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            pisiks.removePriceIfCorrect(3);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 5000){
        if(answer == pisiks.selfAnswers[index[4]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            pisiks.removePriceIfCorrect(4);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else{
        cout << "Wrong Keyword" << endl;
    }

}

void checkifCorrectOrNotMATH(int i, string answer){
    int index[5] = {0,1,2,3,4};
    if (i == 100){
        if(answer == math.selfAnswers[index[0]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            math.removePriceIfCorrect(0);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 200){
        if(answer == math.selfAnswers[index[1]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            math.removePriceIfCorrect(1);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 500){
        if(answer == math.selfAnswers[index[2]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            math.removePriceIfCorrect(2);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 1000){
        if(answer == math.selfAnswers[index[3]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            math.removePriceIfCorrect(3);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else if (i == 5000){
        if(answer == math.selfAnswers[index[4]]){
            cout << "Correct answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(i) << endl;
            cout << "LIVES: " << player1.selfPlayerLives << endl;
            math.removePriceIfCorrect(4);
        }else{
            cout << "Wrong Answer" << endl;
            cout << "MONEY: " << player1.correctAnsAddMoney(0) << endl;
            cout << "LIVES: " << player1.wrongAnsLoseLife() << endl;
            }
    }else{
        cout << "Wrong Keyword" << endl;
    }

}
