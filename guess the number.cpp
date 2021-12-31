#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int lower,upper,guess;
	printf("Enter lower limit: ");
	scanf("%d",&lower);
	printf("Enter upper limit: ");
	scanf("%d",&upper);
	int random_number=lower+rand()%(upper-lower+1);
	do{
		printf("Guess what number I have: ");
		scanf("%d",&guess);
		if(guess>random_number) printf("Your guess is too high\n");
		else if(guess<random_number) printf("Your guess it too low\n");
		else printf("You got it!\n");
	}while(guess!=random_number);
	return 0;
} 
