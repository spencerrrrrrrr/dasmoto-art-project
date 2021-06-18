#include <iostream>
#include <stdlib.h>
//#include tictactoe.hpp

/*
TODO List
-Take player selections - line 42
Check that selections have not already been claimed by either player
Fix tile references upon player selections
*/

int main(void){
	bool playing = true;
	std::string player1 = "";
	std::string player2 = "";
	std::string playerX = "";
	std::string playerO = "";
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
			playerX = player1;
			playerO = player2;
		} else{
			std::cout << player2 << " goes first!\n";
			playerX = player2;
			playerO = player1;
		}
				
		for (int i = 0 ; i < 9; i++){
			if (turn == 1){
				std::cout << playerX << ", choose a tile to place an X in by selecting a number 1-9.\n";
				std::cout << "You may not take a tile that has already been claimed by a player.\n";
				std::cin >> selection;
				//Separate function for selection validation. Put into functions file later.
				if (tiles{selection} != 'X' && tiles{selection} != 'O' && turn == 1){
					std::replace(tiles[0], tiles[8], selection, 'X');
				} else if (tiles{selection} != 'X') && (tiles{selection] != 'O') && (turn == 2){
					std::replace(tiles[0], tiles[8], selection, 'O');
				} else{
					std::cout << "That is an invalid choice. Please select a valid tile.\n";
				}
				turn++;
			} else{
				std::cout << playerO << ", choose a tile to place an X in by selecting a number 1-9.\n";
				std::cout << "You may not take a tile that has already been claimed by a player.\n";
				std::cin >> selection;
				turn--;
			}
			//Win Check. Fill out win conditions
			if (tiles[0] == tiles[1] && tiles[0] == tiles[2]) ||
			(tiles[3] == tiles[4] && tiles[3] == tiles[5]) ||
			(tiles[6] == tiles[7] && tiles[6] == tiles[8]) ||
			(tiles[6] == tiles[3] && tiles[6] == tiles[0]) ||
			(tiles[7] == tiles[4] && tiles[7] == tiles[1]) ||
			(tiles[8] == tiles[5] && tiles[8] == tiles[2]) ||
			(tiles[6] == tiles[4] && tiles[6] == tiles[2]) ||
			(tiles[0] == tiles[4] && tiles[0] == tiles[8]){
				if (turn == 2){
					std::cout << playerX << " wins!";
				} else{
					std::cout << playerO << " wins!";
				}
				
			}
		}
		
		if (player1 == "x"){
			playing = false;
		}
	}
}

