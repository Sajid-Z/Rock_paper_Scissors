#include<bits/stdc++.h>
#include<cmath>
#include <algorithm>
#define re(i , a, b ) for(int i=a ; i<b ; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
 
void game(int n){

    if(n>100 && n<1){
        printf("Sorry, run this game again\n");
        return;
    }
    else{
        int my_score = 0, cpu_score = 0;

        int max_num = 3;
        int min_num = 1;

        printf("\nTo play this game, you need to pick a number between 1 to 3: \n 1 means Scissors \n 2 means Paper \n 3 means Rock\n\n");
        printf("The result will show as\n");
        printf("Your pick Vs CPU pick\n\n");

        for(int i = 1; i<=n; i++){
            int my_pick;
            printf("Your turn: ");
            scanf("%d", &my_pick);
            
            int cpu_pick = min_num+(rand()%(max_num-min_num+1));

            if(my_pick == 1){   
                printf("Scissor Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("It's a draw\n\n");
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("You win\n\n");
                    my_score++;
                }
                else{
                    printf("Paper\n");
                    printf("CPU wins\n\n");
                    cpu_score++;
                }
            }

            else if(my_pick == 2){   
                printf("Rock Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("You win\n\n");
                    my_score++;
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("It's a draw\n\n");
                }
                else{
                    printf("Paper\n");
                    printf("CPU wins\n\n");
                    cpu_score++;
                }
            }

            else if(my_pick == 3){   
                printf("Paper Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("CPU wins\n\n");
                    cpu_score++;
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("You win\n\n");
                    my_score++;
                }
                else{
                    printf("Paper\n");
                    printf("It's a draw\n\n");
                }
            }
            else{
                printf("Try again\n\n");
                i--;
            }
        }

        if(my_score>cpu_score){
            printf("BRAVO!! You win the game\n");
        }
        else if(cpu_score>my_score){
            printf("Oops! You lost the game, better luck next time\n");
        }
        else{
            printf("Match tied! Let's go to the tie breaker. This time if you press buttons other than 1 to 3, you lose.\n");

            while(my_score==cpu_score){
            int my_pick;
            printf("Your turn: ");
            scanf("%d", &my_pick);
            
            int cpu_pick = min_num+(rand()%(max_num-min_num+1));

            if(my_pick == 1){   
                printf("Scissor Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("It's a draw\n\n");
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("BRAVO!! You win the game\n");
                    my_score++;
                }
                else{
                    printf("Paper\n");
                    printf("Oops! You lost the game, better luck next time\n");
                    cpu_score++;
                }
            }

            else if(my_pick == 2){   
                printf("Rock Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("BRAVO!! You win the game\n");
                    my_score++;
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("It's a draw\n\n");
                }
                else{
                    printf("Paper\n");
                    printf("Oops! You lost the game, better luck next time\n");
                    cpu_score++;
                }
            }

            else if(my_pick == 3){   
                printf("Paper Vs ");
                if(cpu_pick == 1){
                    printf("Scissor\n");
                    printf("Oops! You lost the game, better luck next time\n");
                    cpu_score++;
                }
                else if(cpu_pick==2){
                    printf("Rock\n");
                    printf("BRAVO!! You win the game\n");
                    my_score++;
                }
                else{
                    printf("Paper\n");
                    printf("It's a draw\n\n");
                }
            }
            else{
                printf("Oops! You lost the game, better luck next time\n");
            }
        }
    }

    }

}

    
	
int main(){
    
    printf("\nWelcome to the noob version of Rock Paper Scissor game. This game consists of rounds.\n");
    printf("You can't play more than 100 rounds\n");
    printf("Choose how many rounds you want to play :");

    int rounds;
    scanf("%d", &rounds);

    game(rounds);
    
    return 0;
}

			