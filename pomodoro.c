#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void pomodoro()
{
    system("clear");
    int minutes = 25;
    int seconds = 00;
    printf("\n\n\t\t%d:%d0\n",minutes,seconds);
    sleep(1);
    system("clear");                // TO CLEAR SCREEN !!!
    minutes = 24;                //TEST HERE
    seconds = 59;
    while(1)
    {
        printf("\n\n\t\t%d:%d\n",minutes,seconds);
        sleep(1);
        seconds-=1;
        system("clear");
        if(minutes==0 && seconds==0)
        {
            break;
        }
        if(seconds==0)
        {
            minutes-=1;
            seconds=60;
        }
        
    }
}

void pom_break()
{
    system("clear");
    int minutes = 5;
    int seconds = 00;
    printf("\n\n\t\t%d:%d0\n",minutes,seconds);
    sleep(1);
    system("clear");                // TO CLEAR SCREEN !!!
    minutes = 4;                //TEST HERE
    seconds = 59;
    while(1)
    {
        printf("\n\n\t\t%d:%d\n",minutes,seconds);
        sleep(1);
        seconds-=1;
        system("clear");
        if(minutes==0 && seconds==0)
        {
            break;
        }
        if(seconds==0)
        {
            minutes-=1;
            seconds=60;
        }
        
    }
}

/*
Coloring in C

    \033[1;31m \\ -> ASCII color codes
    \033[1;0m is used to reset the color back to normal. All text after this will not be colored.
*/
int main()
{
    int choice;
    int flag = 0;
    int count = 0;
    char pomodoro_ascii[] = "\033[38;5;125m \n"
" ### ##    ## ##   ##   ##   ## ##   ### ##    ## ##   ### ##    ## ## \n"  
" ##  ##  ##   ##   ## ##   ##   ##   ##  ##  ##   ##   ##  ##  ##   ## \n" 
" ##  ##  ##   ##  # ### #  ##   ##   ##  ##  ##   ##   ##  ##  ##   ## \n" 
" ##  ##  ##   ##  ## # ##  ##   ##   ##  ##  ##   ##   ## ##   ##   ## \n" 
" ## ##   ##   ##  ##   ##  ##   ##   ##  ##  ##   ##   ## ##   ##   ## \n" 
" ##      ##   ##  ##   ##  ##   ##   ##  ##  ##   ##   ##  ##  ##   ## \n" 
"####      ## ##   ##   ##   ## ##   ### ##    ## ##   #### ##   ## ##  \n\033[1;0m";
    do
    {
        printf("%s\n--- Welcome ---\n",pomodoro_ascii);
        printf("1. Start a pomodoro session \n2.Start Break\n3.View Stats\n4.Quit\n");
        scanf("%d",&choice);
        

        if(choice==1)
        {
            pomodoro();
            count+=1;
        }
        if(choice==2)
        {
            pom_break();
        }
        if(choice==3)
        {
            printf("Sessions done : %d\nTotal minutes : %d",count,(count*25));
        }
        if(choice==4)
        {
            system("clear");
            printf("=== Session summary ===\nTotal minutes focussed : %d\n",(count*25));
            sleep(2);
            flag=1;//write session info!
        }
        
    }
    while(flag==0);
    return 0;
}
