#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	int ch, done;	
	/* main program loop */
	done = FALSE;

	while(!done)
	{
		
		printf("command \n");
			getchar(ch);
		swith(ch){
			case'R':
			case'r':
			puts("Move right");
			break;

			case'L':
			case'l':
			puts("Move left");
			break;

			case'B':
			case'b':
			puts("Move back");
			break;

			case'Q':
			case'q':
			puts("");
		        done  = true;
			break;

			case'H':
			case'h':
			case'?':
			puts("I dont know that command ");
			puts("Move(R)right, Move (L)left, Move (B)back.");
			break;
		}
	}

	return 0;
}
