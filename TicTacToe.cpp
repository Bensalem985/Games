#include<iostream>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Function to return the game status
int checkWin() {
    if(square[1] == square[2] && square[2] == square[3] || square[4] == square[5] && square[5] == square[6] || square[7] == square[8] && square[8] == square[9] || square[1] == square[4] && square[4] == square[7] || square[2] == square[5] && square[5] == square[8] || square[3] == square[6] && square[6] == square[9] || square[1] == square[5] && square[5] == square[9] || square[3] == square[5] && square[5] == square[7]) {
        return 1;
    } else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {
        return 0;
    } else {
        return -1;
    }
}

// This function will show the board with the players' marks
void board() {
    std::cout << "*********TIC TAC TOE GAME*********" << std::endl << std::endl;
    std::cout << "Player 1[X]      Vs      Player 2[O]" << std::endl << std::endl << std::endl;
    
    // Drawing of the board
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << square[1] << "   |   " << square[2] << "   |   " << square[3] << std::endl;
    std::cout << "_______|_______|_______" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << square[4] << "   |   " << square[5] << "   |   " << square[6] << std::endl;
    std::cout << "_______|_______|_______" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << square[7] << "   |   " << square[8] << "   |   " << square[9] << std::endl;
    std::cout << "       |       |       " << std::endl << std::endl;
}

// Principal function
int main() {
    int player = 1, i, choice;
    char mark;

    do{
        board();

        // To alternate btw player 1 and 2
        player = (player % 2)? 1 : 2;

        // Reading of the player's choice
        std::cout << "Player " << player << " ! Enter the number: ";
        std::cin >> choice;

        // Player 1 = X and Player 2 = O
        mark = (player == 1)? 'X' : 'O';

        if(choice == 1 && square[1] == '1') {
            square[1] = mark;
        } else if(choice == 2 && square[2] == '2') {
            square[2] = mark; 
        } else if(choice == 3 && square[3] == '3') {
            square[3] = mark;
        } else if(choice == 4 && square[4] == '4') {
            square[4] = mark;
        } else if(choice == 5 && square[5] == '5') {
            square[5] = mark;
        } else if(choice == 6 && square[6] == '6') {
            square[6] = mark;
        } else if(choice == 7 && square[7] == '7') {
            square[7] = mark;
        } else if(choice == 8 && square[8] == '8') {
            square[8] = mark;
        } else if(choice == 9 && square[9] == '9') {
            square[9] = mark;
        } else {
            std::cout << "Invalid Move !!";
            player--;
            std::cin.ignore();
            std::cin.get();
        }

        i = checkWin();
        player++;
    } while(i == -1);
    board();
    if(i == 1) {
        std::cout << "Congratulations!! Player" << --player << " wins!!" << std::endl;
    } else {
        std::cout << "Draw Game!!" << std::endl;
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}