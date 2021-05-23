


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define AND &&
#define OR ||
// Generates and prints 'count' random
// numbers in range [lower, upper].
int computer_choice(){
	int max = 3, lower = 1, count = 1;
	int i;
	int num;
	for(i = 0; i < count; i++){
		srand(time(0));
		num = (rand() % (max - lower + 1) + lower);
		printf("%d", num);
	}
	switch (num){
		case 1:
			return 'R';
			break;
		case 2:
			return 'P';
			break;
		case 3:
			return 'S';
			break;
	}
}

int player_choice(){
	char choice;

	printf("Rock(R) Paper(P) Scissor(S): ")
	scanf("%c", choice);
	toupper(choice);
	switch (choice){
		case 'R':
			return 'R';
			break;
		case 'P':
			return 'P';
			break;
		case 'S':
			return 'S';
	}
}

int contidion(){
	char computerChoice = computer_choice();
	char playerChoice = player_choice();

	if (computerChoice == playerChoice){
		printf("It's a Tie \n");
	}
	else if((computerChoice == "R" AND playerChoice == "P") OR (computerChoice == "P" AND playerChoice == "S") OR (computerChoice == "S" AND playerChoice == "R")){
		printf("Player Won \n");
	}
	else if((playerChoice == "R" AND computerChoice == "P") OR (playerChoice == "P" AND computerChoice == "S") OR (playerChoice == "S" AND computerChoice == "R")){
		printf("Computer Won \n");
	}
	return 0;

}
// Driver code
int main()
{
	int lower = 5, upper = 7, count = 1;

	// Use current time as
	// seed for random generator
	contidion();

	return 0;
}
