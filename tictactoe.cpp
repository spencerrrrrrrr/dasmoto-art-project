#include <iostream>
#include <stdlib.h>
//#include tictactoe.hpp
//flip if statements to catch bad input

int main(void){
	bool playing = true;
	std::string player1 = "";
	std::string player2 = "";
	std::string playerX = "";
	std::string playerO = "";
	int turn = 1;
	char selection = ' ';
	char tiles[] = {'1','2','3', '4', '5', '6', '7', '8', '9'};
	
	std::cout << "Let's play TicTacToe!\n";
	std::cout << "Player One, enter your name.\n";
	std::cin >> player1;
	std::cout << "\nPlayer Two, enter your name.\n";
	std::cin >> player2;
	
	std::cout << "The first move will be decided by the computer.\n";
	int first_move = rand() % 2 + 1;
	//Generates random number to determine first player
	
	if (first_move == 1){
		std::cout << player1 << " goes first!\n";
		playerX = player1;
		playerO = player2;
	} else{
		std::cout << player2 << " goes first!\n";
		playerX = player2;
		playerO = player1;
	}		
	
	while (playing) {

		if (turn == 1){
			std::cout << playerX << ", choose a tile to place an X in by selecting a number 1-9.\n";
			std::cout << "You may not take a tile that has already been claimed by a player.\n";
			std::cin >> selection;
			//Separate function for selection validation. Put into functions file later.
			
			if (selection != 'X' && selection != 'O' && turn == 1){
				for (int x = 0; x < 9; x++){
					if (selection == tiles[x]){
						tiles[x] = 'X';
					}
				}
			} else if (selection != 'X' && selection != 'O' && turn == 2){
				for (int x = 0; x < 9; x++){
					if (selection == tiles[x]){
						tiles[x] = 'O';
					}
				}
			} else{
				std::cout << "That is an invalid choice. Please select a valid tile.\n";
			}
			turn++;
		} else{
			std::cout << playerO << ", choose a tile to place an X in by selecting a number 1-9.\n";
			std::cout << "You may not take a tile that has already been claimed by a player.\n";
			std::cin >> selection;
			if (selection != 'X' && selection != 'O' && turn == 1){
				for (int x = 0; x < 9; x++){
					if (selection == tiles[x]){
						tiles[x] = 'X';
					}
				}
			} else if (selection != 'X' && selection != 'O' && turn == 2){
				for (int x = 0; x < 9; x++){
					if (selection == tiles[x]){
						tiles[x] = 'O';
					}
				}
			} else{
				std::cout << "That is an invalid choice. Please select a valid tile.\n";
			}
			turn--;
		}
		//Win Check. Fill out win conditions
		if (tiles[0] == tiles[1] && tiles[0] == tiles[2] ||
		tiles[3] == tiles[4] && tiles[3] == tiles[5] ||
		tiles[6] == tiles[7] && tiles[6] == tiles[8] ||
		tiles[6] == tiles[3] && tiles[6] == tiles[0] ||
		tiles[7] == tiles[4] && tiles[7] == tiles[1] ||
		tiles[8] == tiles[5] && tiles[8] == tiles[2] ||
		tiles[6] == tiles[4] && tiles[6] == tiles[2] ||
		tiles[0] == tiles[4] && tiles[0] == tiles[8]){
			if (turn == 2){
				std::cout << playerX << " wins!";
				playing = false;
			} else{
				std::cout << playerO << " wins!";
				playing = false;
			}
			
		}
		
		if (player1 == "x" || selection == 'q'){
			playing = false;
		}
	}
}


