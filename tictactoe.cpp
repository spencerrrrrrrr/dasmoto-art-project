#include <iostream>
#include <stdlib.h>
//#include tictactoe.hpp

int main(void){
	bool playing = true;
	std::string player1 = "";
	std::string player2 = "";
	int turn = 1;
	std::string selection = "";
	char tiles[] = {'1','2','3', '4', '5', '6', '7', '8', '9'};
	
	while (playing) {
		std::cout << "Let's play TicTacToe!\n";
		std::cout << "Player One, enter your name.\n";
		std::cin >> player1;
		std::cout << "\nPlayer Two, enter your name.\n";
		std::cin >> player2;
		
		std::cout << "The first move will be decided by the computer.\n";
		int first_move = rand() % 2 + 1;
		std::cout << first_move << "\n"; //Generates random number to determine first player
		
		if (first_move == 1){
			std::cout << player1 << " goes first!\n";
		} else{
			std::cout << player2 << " goes first!\n";
		}
		
		
		
		for (int i = 0 , i < 9, i++){
			if (turn == 1){
				std::cout << playerX << ", choose a tile to place an X in by selecting a number 1-9.\n";
				std::cout << "You may not take a tile that has already been claimed by a player.\n";
				std::cin >> selection;
				turn++;
			} else{
				std::cout << playerO << ", choose a tile to place an X in by selecting a number 1-9.\n";
				std::cout << "You may not take a tile that has already been claimed by a player.\n";
				std::cin >> selection; //selection needs initialized before running. Fix at home.
				turn--;
			}
			//Win Check
			if 
		}
		
		if (player1 == "x"){
			playing = false;
		}
	}
}

