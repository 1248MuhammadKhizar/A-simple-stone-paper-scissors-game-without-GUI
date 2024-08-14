#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

void compare_score(int a,int b)
{
    if(a>b)
    {
        cout<<"computer wins"<<endl;
    }
    else if(b>a)
    {
     cout<<"player  wins"<<endl;
    }
    else{
        cout<<"Game drawed"<<endl;
    }
}

void start_game()
{
    
    srand(time(0));
    string a[3];
    a[0]="Rock";
    a[1]="Paper";
    a[2]="Scissors";
    system("cls");
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"|                           ROCK PAPER SCISSORS                       | "<<endl;
    cout<<"-----------------------------------------------------------------------  "<<endl;
    cout<<endl;
    cout<<"Only play with commputer mode is available"<<endl;
    cout<<"You have total of 5 turns "<<endl;
    int score=0;
    int comp_score=0;
    for(int i=0;i<5;i++)
 {
    int choice;
    int computer_choice;
    
  cout<<"Enter choice \n"
  <<"1.Rock \n"
  <<"2.Paper\n"
  <<"3.Scissors\n"<<endl;
  cin>>choice;
  while(choice > 3 || choice < 1)
  {
    cout<<"Enter options from 1 ,2 ,3 "<<endl;
    cin>>choice;
  }
  system("cls");
 cout<<"----------------------------"<<endl;
 cout<<"|  you picked "<<a[choice-1]<<" |"<<endl;
 cout<<"----------------------------"<<endl;
computer_choice=rand()%3+1;

cout<<"Waiting for results "<<endl;

Sleep(3000);
cout<<"------------------------------------------------"<<endl;
cout<<"|  Computer picked "<<a[computer_choice-1]<<"   |"<<endl;;
cout<<"------------------------------------------------"<<endl;
Sleep(1000);
if(choice==computer_choice)
{
    cout<<" Game draw "<<endl;
    score++;
    comp_score++;
}
else if(choice==1 && computer_choice==2)
{
    cout<<"computer wins with paper and your rock "<<endl;
    comp_score++;
}

else if(choice==1 && computer_choice==3 )
{
    cout<<"player wins with rock and computer scissors "<<endl;
    score++;
}
else if(choice==1 && computer_choice==2)
{
    cout<<"computer wins with paper and your rock "<<endl;
    comp_score++;
}

else if(choice==2 && computer_choice==1 )
{
    cout<<"player wins with rock and computer paper "<<endl;
    score++;
}


else if(choice==2 && computer_choice==3 )
{
    cout<<"computer wins with scissor and player paper"<<endl;
    comp_score++;
}
 else if(choice==3 && computer_choice==1)
 {
    cout<<"Computer wins with Rock and player scissors"<<endl;
    comp_score++;
 }
  else if(choice==3 && computer_choice==1)
 {
    cout<<"Player wins with Scissors and   Computer  paper"<<endl;
    score++;
 }
  
  
  
 
  
  


 }
  for(int i=0;i<10;i++)
{
       cout<<"Please wait displaying the results";
 
    for(int j=0;j<i+1;j++){
    cout<<"-";
    }
    Sleep(500);
system("cls");
}
Sleep(2000);
system("cls");
cout<<"computer score                                       Player Score"<<endl;
cout<<comp_score<<"                                                     "<<score<<endl;
compare_score(comp_score,score);

}



int main()
{
 start_game();   
   


}