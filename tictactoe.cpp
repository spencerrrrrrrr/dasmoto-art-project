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
		game_board(tiles);
		
		if (turn == 1){
			switch_playr_move(playerX, tiles, turn);
			turn++;
		} else{
			switch_playr_move(playerO, tiles, turn);
			turn--;
		}
		
		playing = win_chk(tiles, playerX, playerO, turn);
			
		if (player1 == "q" || player2 == "q"){
			playing = false;
		}
	}
}


