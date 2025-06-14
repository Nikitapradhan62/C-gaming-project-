#include<iostream>
using namespace std;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';  
int row,column; 
void display_arr()
 { 
   system("cls");
   cout<<   "T i c k  C r o s s  G a m e"<<endl;
   cout<<"\tPlayer1[X]\n\tPlayer2[0]\n\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \n";
   cout<<"\t\t_____|_____|_____\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |   "<<arr[1][2]<<" \n";
   cout<<"\t\t_____|_____|_____\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |   "<<arr[2][2]<<" \n";
   cout<<"\t\t     |     |     \n";
} 
void player_turn()
{   
   int choice;
   if(turn =='X')
   cout<<"\n\tPlayer1[X] turn:";
   if(turn =='O')
   cout<<"\n\tPlayer2[O] turn:";
   
   cin>>choice;
   
   switch(choice)
   {
   	case 1: row=0; column=0;
   	   break;
   	case 2: row=0; column=1;
	   break;
	case 3: row=0; column=2;
	   break;
	case 4: row=1; column=0;
	   break;
	case 5: row=1; column=1;
	   break;
	case 6: row=1; column=2;
	   break;
	case 7: row=2;  column=0;
	   break;
	case 8: row=2;  column=1;		
	   break;
	case 9: row=2;  column=2;
		
	   break;
	default:
	      cout<<"Invalid choice\n";
	   break;     	
 }
     if(turn == 'X' && arr[row][column]!='X' && arr[row][column]!='O')  
     {
	    arr[row][column]='X';
	    turn='O';
     }
     else if(turn == 'O' && arr[row][column]!='X' && arr[row][column]!='O')
	 {
	 	arr[row][column]='O';
	 	turn='X';
	 }
	 else
	 {
	 	cout<<"Box already filled!\n Please try again!!";
	 	player_turn();
	 }
   display_arr();
}
void gameover()
   {
 	
   }
int main()
{
	
	while(true)
  {	
	display_arr();
	player_turn();
	
	
  }

}
   
   /*cout<<"\n\n T i c k   C r o s s   G a m e"<<endl;
   cout<<"\tPlayer1 [X] \n\t player2[O]\n\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[0][0]<<"  | "<<arr[0][1]<<"   | "<<arr[0][2]<<"   \n";
   cout<<"\t\t_____|_____|_____\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[1][0]<<"  | "<<arr[1][1]<<"   | "<<arr[1][2]<<"  \n";
   cout<<"\t\t_____|_____|_____\n";
   cout<<"\t\t     |     |     \n";
   cout<<"\t\t  "<<arr[2][0]<<"  | "<<arr[2][1]<<"   | "<<arr[2][2]<<"  \n";
   cout<<"\t\t     |     |     \n";*/
 

