#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void delay(int no_of_seconds)
{
    // Converting time into milliseconds
    int milliseconds = 1000 * no_of_seconds;
  
    // Storing the starting time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milliseconds)
     ;
}
  
int main()
{
    int h=0,m=0,s=0,d=1;
      //delay of 1 second and we will use it in the function sleep
 
//  system("cls");
   printf("Please enter a time format in HH MM SS below:- ");
scanf("%d%d%d",&h,&m,&s);
if(h>24 || m>60 || s>60){
    printf("ERROR ! \n");
    exit(0);

}

 while(1) //this is an infinite loop and anything inside will repeat 
 {
     s++;
     if (s>59){
        m++;
        s=0;
        }
            if (m>59){
            h++;
             m=0;
        }

        printf("\n Digital Clock:");
        printf( "\n\n\t\t %02d:%02d:%02d" ,h,m,s); 
         if(h<12)
				{
					printf(" AM ");
				}
				else
				{
					printf(" PM ");
				}
        delay(1);
        system("cls"); // this clears the screen
 }
return 0;
}