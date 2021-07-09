#include <iostream>

void big_game_board() {
	std::cout << "  77777 #  888   #  999   \n"; //All tiles are 5 spaces vertically and 7 spaces horizontally	
	std::cout << "     7  # 8   8  # 9   9  \n"; //Use list to offer tile selections 1 - 9
	std::cout << "    7   #  888   #  9999  \n";
	std::cout << "   7    # 8   8  #     9  \n";
	std::cout << "  7     #  888   #     9  \n";
	std::cout << "##########################\n";
	std::cout << " 4  4   #  5555  #  6666  \n";
	std::cout << " 4  4   #  5     #  6     \n";
	std::cout << " 4444   #  5555  #  6666  \n";
	std::cout << "    4   #     5  #  6  6  \n";
	std::cout << "    4   #  5555  #  6666  \n";
	std::cout << "##########################\n";
	std::cout << "  11    #  2222  # 3333   \n";
	std::cout << "   1    #     2  #    3   \n";
	std::cout << "   1    #  2222  # 3333   \n";
	std::cout << "   1    #  2     #    3   \n";
	std::cout << " 11111  #  2222  # 3333   \n";
}

char* game_board(char tiles[9]){
	std::cout << tiles[6] << "|" << tiles[7] << "|" << tiles[8] << "\n";
	std::cout << "-----\n";
	std::cout << tiles[3] << "|" << tiles[4] << "|" << tiles[5] << "\n";
	std::cout << "-----\n";
	std::cout << tiles[0] << "|" << tiles[1] << "|" << tiles[2] << "\n";
}

char* switch_playr_move(std::string actv_playr, char tiles[9], int turn){
	char selection = ' ';
	bool valid = true;
	
	std::cout << actv_playr << ", choose a tile to place an X in by selecting a number 1-9.\n";
	std::cout << "You may not take a tile that has already been claimed by a player.\n";
	std::cin >> selection;
	
	for (int x = 0; x < 9; x++){
		if (selection == tiles[x] && turn == 1 && selection != 'X' && selection != 'O'){
			tiles[x] = 'X';
			valid = true;
			return tiles;
		} else if (selection == tiles[x] && turn == 2 && selection != 'X' && selection != 'O'){
			tiles[x] = 'O';
			valid = true;
			return tiles;
		} else {
			valid = false;
		}
	}
	if (valid == false){
		std::cout << "That is an invalid choice. Please select a valid tile.\n";
	}
}
