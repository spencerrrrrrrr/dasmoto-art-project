#include <iostream>
#include <stdlib.h>
//#include tictactoe.hpp

int main(void){
	bool playing = true;
	std::string player1 = "";
	std::string player2 = "";
	
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
		
		if (player1 == "x"){
			playing = false;
		}
	}
}

