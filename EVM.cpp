#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
void Vote(int choice);
void Admin_login();
	char T1[10],T2[10],T3[10];
main()
{


    printf(" \n\n                                                                                               ....VOTING MACHINE....\n\n========================================================================================   WELCOME TO THE ELECTION  2019   ========================================================================================               ");
    getchar();
	printf("\n\n\n                   |                RULES FOR VOTING:");
    printf("\n                   |                     1) Read the instructions appearing on the screen carefully");
    printf("                   |\n                   |\n                   |                     2) Enter your vote after making a clear decision.\n                   |\n                   |                     3) Your say matters.. Be a smart voter and make a choice for a better school decorum.\n                   |\n                   |                     4) After you are done voting, press the enter button to register it. THANKS FOR VOTING!");
    printf("\n                   |\n                   |\n                   |_____________________________________________________________________________________________________________________________________________________________________");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                                                                                            PRESS ENTER TO MOVE ON TO THE ADMIN PAGE:");
	printf("\n\n\n\n\n\n\n******************************************************************************************************************************************************************************************************************");
	getchar();
	
	system("cls");
    printf("\n========================================================================================   WELCOME TO THE ELECTION  2019   ========================================================================================");
    int Input1;

    printf("\n    To access Admin page press '0' \n   ");
    scanf("%d",&Input1);
    if(Input1==0)
    {
    	Admin_login();
        printf("Press Enter to continue");
        getchar();
        system("cls");
        int n,stop;
        	printf("\n========================================================================================   WELCOME TO THE ELECTION  2019   ========================================================================================");
        	printf("\n\n								Registration of Candidates standing for the election\n");
			printf("\nEnter the name of candidate number 1:  ");
	    	scanf("%s",&T1);
	    	printf("\nEnter the name of candidate number 2:  ");
	    	scanf("%s",&T2);
	    	printf("\nEnter the name of candidate number 3:  ");
	    	scanf("%s",&T3);
          
        do{
        	printf("\n ENTER '1' TO VOTE FOR %s",T1);
            printf("\n ENTER '2' TO VOTE FOR %s",T2);
            printf("\n ENTER '3' TO VOTE FOR %s\n\n   PLEASE CAST YOU VOTE CAREFULLY \n\n",T3);
        	
	    
           scanf("%d",&n);
           if(n>0&&n<=3)
           {	
           		printf("\n THANK YOU FOR THE VOTE!!");
           		printf("\n PRESS ENTER TO CONTINUE !!");
                getch();
				Vote(n);
                
           }
           else
           {
                printf("Enter Valid input\n");
           }
           system("@cls||clear");
           printf("\n================================================================================================ ELECTION  2019   ========================================================================================");
           printf("\n\n\n        *Enter '1' to continue else 0 to finish Voting and find who won the Vote*\n");
           scanf("%d",&stop);
          }while(stop);
          Vote(stop);
    }
    else
    
    {
        system("cls");
        printf("========================================================================================   WELCOME TO THE ELECTION  2019   ========================================================================================    ");
        printf("INVALID INPUT");
        printf("\n To return to the admin page press 1 or press any key to end the program :");
        int j;
        scanf("%d",&j);
		if(j==1){
			Admin_login();
		}      
    }
}
void Admin_login()
{	system("cls");
	printf("\n*********************************************************************************************  ADMIN LOGIN PAGE  **************************************************************************************************   \n");
	printf("\n\n\n\n\n\n                                                                                        ~~~~~~~~~~~~ELECTION 2019~~~~~~~~~~~~~");
	
    { 
        int o;
        char password[69],login[69];
        printf("\n\n\n\n\n\n                                                                        ENTER THE USER ID :");
        scanf("%s",&login) ;
        printf("\n\n                                                                        PASSWORD: ");
            int p=0; 
            do{ 
        
        password[p]=getch(); 
        if(password[p]!='\r')
        { 
            printf("*"); 
        } 
        p++;
        
        }while(password[p-1]!='\r'); 
        password[p-1]='\0'; 
        
        
            if((strcmp(password, "symbiosis") == 0)&&(strcmp(login, "admin")==0))
            {
                system("cls");
                printf("\n Welcome admin....Starting the voting process\n");
                
            }    
            else
            {
                printf("\n Incorrect Credentials");
                exit(0);
            }
    }
}


void Vote(int choice)
{
    static int a,b,c;
    if(choice==1)
     {
          a++;
     }
     if(choice==2)
     {
         b++;
     }
     if(choice==3)
     {
         c++;
     }
     printf("			*************************VOTING HAS NOW CLOSED*********************\n\n\n");
     printf("				VOTES OBTAINED BY %s are %d\n",T1,a);
     printf("\n\n\n				VOTES OBTAINED BY %s are %d\n",T2,b);
     printf("\n\n\n				VOTES OBTAINED BY %s are %d\n",T3,c);
     
     
     if(choice==0)
     {	getch();
     	system("cls");
     	printf("\n================================================================================================ ELECTION  2019   =====================================================================================");
     	printf("\n\n\n     CONGRATULATIONS!!!!!!!!!    ");
         if(a>b&&a>c)
          {
            printf("%s won with votes of %d\n",T1,a);
          }
          else if(b>a&&b>c)
          {
               printf("%s won with votes of %d\n",T2,b);
          }
        else if(c>b&&c>a)
         {
               printf("%s won with votes of %d\n",T3,c);
          }
          else if(a=b)
         {
              printf("Both %s and %s have tied by securing %d votes each\n",T1,T2,a);
          }
        else if(b=c)
          {
              printf("Both %s and %s have tied by securing %d votes each\n",T2,T3,b);
          }
          else if(a=c)
          {
              printf("Both %s and %s have tied by securing %d votes each\n",T1,T3,c);
          }
          else
          {
              printf("%s, %s and %s have secured %d votes each\n",T1,T2,T3,a);
          }
    }
}

