#include <iostream>  //using replit.com as my IDE
using namespace std;


class Ball {
public:
    int x_position;
    int y_position;
    bool inOrOut; // in court or not 

    bool checkInOrOut();    //check if the ball is in or out
    void awardPoints(int& playerScore);  //  award points to a player, passing player score by ref
};


class Player {
public:
    int playerScore;  // score
    int highScore;
    int x_position;
    int y_position; // pos on the court
    string side;      // which team/side 

    Player();  // Constructor method
    void move(string& newPosition);  // move the player 
    void hit(Ball& ball, string& newPosition);  // hitting the ball 
};


class Mode {
public:
    virtual void SelectMode() = 0;  
    virtual void startGame() = 0;  // defined in subclass of pvp pvc
};


class PlayerVsComputer : public Mode {
public:
    string Difficulty;  // Difficulty level: easy, medium or hard

    void startGame() override;   // start the game
};


class PlayerVsPlayer : public Mode {
public:
    void startGame() override;   //start the game 
};


int main ()  {

    cout << "ze code has compiled succesfully";
    return 0;
    
}