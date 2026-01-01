#include <iostream>
#include <string>

// Global rank list
// Holds all possible rank names
std::string Ranks[4] = {"Bronze", "Silver", "Gold", "Diamond"};

// Player-related global variables
std::string myRank;
std::string Nickname;
double XP = 0;
int Stage = 0;
int MainMenu;

// Assigns a rank based on the current stage
void Rank_System(){
    if(Stage == 1){
        myRank = Ranks[0]; // Assign Bronze rank
        std::cout << "Your new rank, " << Ranks[0] << " !" << std::endl;
    }
    if(Stage == 2){
        myRank = Ranks[1]; // Assign Silver rank
        std::cout << "Your new rank, " << Ranks[1] << " !" << std::endl;
    }
    if(Stage == 4){
        myRank = Ranks[2]; // Assign Gold rank
        std::cout << "Your new rank, " << Ranks[2] << " !" << std::endl;
    }
    if(Stage == 8){
        myRank = Ranks[3]; // Assign Diamond rank
        std::cout << "Your new rank, " << Ranks[3] << " !" << std::endl;
    }
}

// Increases stage when XP reaches specific milestones
void XP_System(){
    if(XP >= 50 && Stage == 0){
        Stage++; // Stage 1
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 100 && Stage == 1){
        Stage++; // Stage 2
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 200 && Stage == 2){
        Stage++; // Stage 3
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 400 && Stage == 3){
        Stage++; // Stage 4
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 800 && Stage == 4){
        Stage++; // Stage 5
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 1600 && Stage == 5){
        Stage++; // Stage 6
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 3200 && Stage == 6){
        Stage++; // Stage 7
        std::cout << "You won the stage!" << std::endl;
    }
    if(XP >= 6400 && Stage == 7){
        Stage++; // Stage 8
        std::cout << "You won the stage!" << std::endl;
    }
}

int main(){
    // Ask player for nickname
    std::cout << "Enter your nickname, ";
    getline(std::cin, Nickname);

    while(true){
        // Display player status
        std::cout << "-------------------------" << std::endl;
        std::cout << "Nickname: " << Nickname << std::endl;
        std::cout << "Rank: " << myRank << std::endl;
        std::cout << "Stage: " << Stage << std::endl;
        std::cout << "XP: " << XP << std::endl;
        std::cout << "-------------------------" << std::endl;

        // Main menu
        std::cout << "[1] - Work" << std::endl;
        std::cout << "[2] - Exit" << std::endl;
        std::cin >> MainMenu;

        switch(MainMenu){
            case 1:
                XP += 20; // Gain XP by working
                std::cout << "You worked hard!" << std::endl;
                XP_System();
                Rank_System();
                break;

            case 2:
                return 0;

            default:
                std::cout << "Invalid Selection" << std::endl;
        }
    }

    return 0;
}

