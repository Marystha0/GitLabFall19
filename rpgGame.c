

//Contributors
//G. Poppe

//eclipse496
//



//Mjkli - room number #3

// Mir Hassan Talpur #17
// Amado Rodriguez III #21
// Ivan Khaffaji Room #15



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


int combo();
void countDown();

int main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); 
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
							
					char answer;
					int num, com;
					puts("You open the door then, close it behind you.");
					puts("You start freaking out because the water is starting to rise.");
					puts("You notice that there is a table with 3 boxes and an envelope.");
					puts("One box has the key to freedom it in.\n");
					puts("Open the envelope, read the question and select the right answer from the choices given.");

					while(choice != 99)
					{
						puts("You have 10 seconds to the read the question.\n");
						puts("1. Which of the following is the correct format to compile a c program?\n");
						puts("A. gcc o rpgGame rpgGame.c\n");
						puts("B. gcc -o rpgGame.c rpgGame.c\n");
						puts("C. gcc -o rpgGame rpgGame.c\n");
						countDown();
						printf("Enter a letter (A, B, C) corresponding to your answer or enter Q tot Quit): ");
						scanf("%s", &answer);

						if(answer == 'A' || answer == 'a')
						{
							com = combo();
							printf("You nedd this number combination to open Box A: %d", com);

							printf("\nYou have 10 seconds to memorize the given combination.");
							countDown();
							printf("\nEnter the given comination to unlock the box now:");
							scanf("%d", &num);

							while(num != com)
							{
								puts("Enter the correct combination before a monster grabs you!\n");

								scanf("%d", &num);
							}
							puts("You entered the correct combination and the box is unlocked.\n");
							puts("Open the box, put your hands inside, and grab what is inside.");
							puts("Ouch! you just got bitten by a snake. Try again before the poison takes effect.\n");
						}
						else if(answer == 'B' || answer == 'b')
						{
							com = combo(x);
							printf("You nned this number combination to open Box B: %d", com);
							printf("\nYou have 10 seconds to memorize the given combination.");
							countDown();
							printf("\nEnter the given combination to unlock the box now:");
							scanf("%d", &num);
							
							while(num != com);
							{
								puts("Enter the correct combination before a monster grabs you!\n");
								scanf("%d", &num);
							}
						puts("You entered the correct combination and the bpoz is unlocked.\n");
						puts("Put your hand in box 2 and grab what is inside.");
						puts("Oh no! Your hand is caught in a funnel-web spiders nest. Make another choice before you become paralyzed.\n");
						}
						else if(answer == 'C' || answer == 'c')
						{
							puts("Put your hand in box 3 and grab what is inside");
							puts("You have chosen wisely! Take the key and escape freedom.");
							puts("Choose another room on your way out.\n");
						}
						else
							return 0;	
				        }
					break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
				int i, x, y, z;
					while(choice != 99)
					{
						puts("you open the door and find 3 boxes, select 1, 2, or 3\n");
						scanf("%d", &choice);
						if(choice == 1)
						{
							srand(time(NULL));
							puts("You have chosen box 1, inside you find 2 six sided dice.");
							puts("If you roll a 7, you lose. Lets roll...");
							x = 1 + (rand()%6);
							y = 1 + (rand()%6);
							z = x + y;
							printf("Die 1: %d\n", x);
							printf("Die 2: %d\n", y);
							printf("You rolled a %d\n", z);
							if(z > 7)
							{
								puts("You lose, goodbye!\n");
								break;

							}
							else
							{
								puts("Live to roll again.\n");
				

							}
						}
						if(choice == 2)
						{
							puts("You have chosen box 2, inside you find a basketball and a hoop.\n");
							puts("Lets shoot!\n");
							srand(time(NULL));
							x = 1 + (rand()%100);
							if(x > 40)
							{
								printf("Shot percentage: %d\n", x);
								printf("You made the shot, nice\n");
							}
							else
							{
								printf("Shot percentage: %d\n", x);
								puts("Miss\n");
								break;
							}


						}
						if(choice == 3)
						{
							
						}



					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					puts("you open the door and find a skeleton in a suit.");
					printf("It invites you to play a game of blackjack. ");
					printf("If you win, it will grant you a wish, but if you lose ");
					printf("you must stay trapped in this room as its card playing ");
					puts("buddy forever.");
					puts("Will you play?");
					puts("1. Yes.");
					puts("2. No.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						/*int cont = 0;
						int c1;
						int c2;
						*/
						//while(cont != 1)
						//{
							puts("The Skeleton laughs and deals each of you 2 cards");
							/*c1 = ((1 + rand()) % 13);
							c2 = ((1 + rand()) % 13);
							if(c1 > 10)
							{
								puts
							*/
							printf("Before you can even look at your cards ");
							printf("the skeleton reveals a Blackjack. ");
							puts("you should've known it was a cheater");
						//}
					}
					else if(choice == 2)
					{
						printf("Seeing as it isn't even Halloween season ");
						printf("you decide not to humor The Skeleton. ");
						puts("You exit the room.");
					}
						
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;




			}
		}	
	}
    }


    

int combo()
{
	int n;
	srand(time(NULL));
	return n = (rand() % (1000-0+1)) + 0;
}

void countDown()
{
	int c, d;

	for(c = 1; c <= 32767; c++)
	{
		for(d = 1; d <= 32767; d++)
		{
		}
	}
			
	printf("\nTime's Out!\n");
}
