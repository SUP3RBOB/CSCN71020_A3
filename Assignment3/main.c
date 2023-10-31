#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 15

char* RockPaperScissors(char playerOne[], char playerTwo[]);

int main() {
	return 0;
}

char* RockPaperScissors(char playerOne[], char playerTwo[]) {
	if (strcmp(playerOne, "Rock") == 0) {
		if (strcmp(playerTwo, "Rock") == 0) {
			return "Draw";
		}

		if (strcmp(playerTwo, "Scissors") == 0) {
			return "Player1";
		}

		if (strcmp(playerTwo, "Paper") == 0) {
			return "Player2";
		}

		return "Invalid";
	}

	if (strcmp(playerOne, "Scissors") == 0) {
		if (strcmp(playerTwo, "Rock") == 0) {
			return "Player2";
		}

		if (strcmp(playerTwo, "Scissors") == 0) {
			return "Draw";
		}

		if (strcmp(playerTwo, "Paper") == 0) {
			return "Player1";
		}

		return "Invalid";
	}

	if (strcmp(playerOne, "Paper") == 0) {
		if (strcmp(playerTwo, "Rock") == 0) {
			return "Player1";
		}

		if (strcmp(playerTwo, "Scissors") == 0) {
			return "Player2";
		}

		if (strcmp(playerTwo, "Paper") == 0) {
			return "Draw";
		}

		return "Invalid";
	}

	return "Invalid";
}