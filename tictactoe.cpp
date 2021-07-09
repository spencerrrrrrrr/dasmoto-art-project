#include <iostream>
#include <stdlib.h> //for rand num
#include "tictactoe_functions.cpp"

int main(void){
	bool playing = true;
	std::string player1 = "";
	std::string player2 = "";
	std::string playerX = "";
	std::string playerO = "";
	int turn = 1;
	
	char tiles[9] = {'1','2','3', '4', '5', '6', '7', '8', '9'};
	
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
			switch_playr_move(playerX, tiles, turn);
			game_board(tiles);
			turn++;
		} else{
			switch_playr_move(playerO, tiles, turn);
			game_board(tiles);
			turn--;
		}
		
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
		
		if (player1 == "q" || player2 == "q"){
			playing = false;
		}
	}
}


