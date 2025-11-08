#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float energy =50, reputation=50;

void scenario1() { 

char subsearch, subsearch1, subsearch2;
char search, note, breaker,breaker1,decision;
bool loop= true, loop1=true;


cout<<"\t\t\t\tProfessor Ahmed reports a robbery at his home."<<endl;
cout<< "\tHis wife claims she was asleep, and the only neighbour nearby is someone who works night shifts."<<endl;
 cout<<"\t\tYou, Detective, must find out who’s telling the truth before evidence is lost."<<endl;
 cout<<"\t --------------------------------------------------------------------------------------------------------";
 cout<<endl;
 
 //SETTING UP THE CONDITION OF ENERGY LEVEL 
 
 while (energy>=20){
 	
 	
 	if(energy ==20) {
 		cout<<endl;
 		cout<<endl;
 		
    cout << "\t \t You Failed,energy too low";
    cout << "\t \t Reputation = " << reputation << endl;
     return;
}
 
  cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<endl;
 cout<<" Now you have three option,"<<endl;
 cout<<"1. Check House, 2. Interview Wife , 3. Interview Neighbour"<<endl<<endl;
 cin>>search;

 
 if(search =='1' ){
 	
 	energy -=10;
 	
 	while(loop==true){
	 
 	cout<<"\t\tNow you are checking the house"<<endl<<endl;
 	
 	cout<<"You can see 1. the living room, 2. Study room, 3. Roof "<<endl;
 	
 	cin>>subsearch;
 	
 	//enter the living room and clue of broken window
 	
 	if (subsearch=='1'){
 		
 		energy-=10;
 		
 		cout<<"\t The window of the living room is broaken.\n \t Do you want to note this down?(Y/N) ";
 		cout<<endl<<endl;
 		cin>>note;
 		
 		
 		while (note != 'Y' && note != 'N') {
        cout << "Invalid input. Please enter 'Y' or 'N' again: "<<endl;
        cin >>note;
                      }
 		if(note=='Y'){
 			cout<<"You availed the clue\n"<<endl;
 			reputation +=5;
 			
		 }
		 else if(note == 'N'){
		 	cout<<"You wasted the clue\n"<<endl;
 			reputation -=5;
 			
 			energy-=10;
		 }
		
	 }
	 
	 // STUDY ROOM AND MISSING PAPERS
	 
	 else if(subsearch =='2'){
	 	
	energy-=10;
	
	 	cout<<"\t The drawer of the study room is open and the papers of property missing."<<endl<<endl;
	 	
	 	cout<<"\t Do you want to note this down?(Y/N)"<<endl;
	 	
	 	cin>>note;
	 	
	 	
	 	while (note != 'Y' && note != 'N') {
        cout << "Invalid input. Please enter 'Y' or 'N' again: "<<endl;
        cin >>note;
                      }
                      
	 	if(note=='Y'){
 			cout<<"You availed the clue\n"<<endl;
 			reputation +=5;
 			
		 }
		 
		 else if(note == 'N'){
		 	cout<<"You wasted the clue\n"<<endl;
 			reputation -=5;
 			energy-=10;
		 }
		 }
		 
		 // the roof with no link of robbery
		 
		 else if (subsearch =='3'){
		 	
		 	energy -=10;
		 	
		 	cout<<"Checking the roof"<<endl;
		 	cout<<"Nothing found, you wasted energy."<<endl<<endl;
		 	energy-=10;
		 }
		 
		 // To leave the house
		 
	 cout<<"\t \t Do you want to leave house (Y) or search more(N)?(Y/N)"<<endl;
	 
 	cin>>breaker;
 	
 		while (breaker!= 'Y' && breaker != 'N') {
        cout << "Invalid input. Please enter 'Y' or 'N' again: "<<endl;
        cin >>breaker;
        }
                      
 	if(breaker=='Y'){
 		break;}
	 
	 else if (breaker== 'N'){
	 	continue;
	 }
	 	 
	 }
 }
 
 // option 2 of investigating wife
  
 else if(search =='2'){
 	energy -=10;
 	
 	
 	cout<<"YOU ARE INQUIRING THE WIFE OF PROFESSOR \n"<<endl;
 	cout<<"YOU CAN CHOSE AN OPTION \n"<<endl;
 	
 	cout<<"1. WHERE DO YOU WORK."<<endl;
 	cout<<"2. WHERE WERE YOU AT THE TIME OF ROBBERY."<<endl;
 	cout<<"3. HOW MUCH YOU EARN."<<endl;
 	
 	cin>>subsearch1;
 	
 	if(subsearch1 =='2'){
 		
 		
 		cout<<" \"I was asleep but heard some sound \" "<<endl;
 		cout<<"She hesitated and refrained eye contact."<<endl;
 		cout<<"Do you want to note this?"<<endl;
 		
 		  cin >>note;
 		  
 		while (note != 'Y' && note != 'N') {
 			
        cout << "Invalid input. Please enter 'Y' or 'N' again: "<<endl;
        
      
       }
                      
 		if(note=='Y'){
 			
 			cout<<"You availed the clue\n"<<endl;
 			reputation +=5;	
 			
		 }
		 
		 else if(note == 'N'){
		
		 	cout<<"You wasted the clue\n"<<endl;
 			reputation -=5;
 			energy-=10;
		 }
 		
 		
 		
	 }
	 
	 else if(subsearch1 =='1'){
	 	
 		cout<<"An invalid question to ask"<<endl;
 		reputation -=5;
 		
	 }
	 
	 else if(subsearch1 =='3'){
	 	
 		cout<<"An invalid question to ask"<<endl;
 		reputation -=5 ;
 }
 
  cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<endl;
}
//option 3 of investigating neighbour

else if (search =='3'){
	energy -=10;
	
	cout<<"What you will want to investigate from neighbour?"<<endl<<endl;
	cout<<"1. Where were you at the time of robbery?"<<endl;
	cout<<"2. Where you earn from?"<<endl;
	cout<<"3. Where do you live?"<<endl<<endl;
	
	cin>>subsearch2;
	
		if(subsearch2 =='1'){
			
 		cout<<" \"I was out from home but saw a man with red coat \" "<<endl<<endl;
 		
 		cout<<"He is injured and injury seems quite new and refrained eye contact."<<endl<<endl;
 		
 		cout<<"Do you want to note this?";
 		cin >>note;
 		
 		while (note != 'Y' && note != 'N') {
 			
        cout << "Invalid input. Please enter 'Y' or 'N' again: "<<endl;
        
        
        }
                      
 		if(note=='Y'){
 			
 			cout<<"You availed the clue\n";
 			reputation +=5;	
		 }
		 
		 else if(note == 'N'){
		 	
		 	cout<<"You wasted the clue\n";
 			reputation -=5;
		 }
 		
 		
 		
	 }
	 
	 else if(subsearch2 =='2'){
	 	
 		cout<<"An invalid question to ask"<<endl;
 		reputation -=5 ;
 		
	 }
	 else if(subsearch2 =='3'){
 		cout<<"An invalid question to ask"<<endl;
 		reputation -=5 ;
 }
 cout<<"\t --------------------------------------------------------------------------------------------------------";	
 cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<endl;
	
}
 cout<<"\t --------------------------------------------------------------------------------------------------------";
 cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<endl;
cout<<"Want more search (Y/N)"<<endl;
cin>>breaker1;
while (breaker1 != 'Y' && breaker1 != 'N') {
        cout << "Invalid input. Please enter 'Y' or 'N' again: ";
        cout<<endl;
        cin >>breaker1;
        }
if(breaker1=='Y'){
	continue;
	
}
else if (breaker1 =='N'){
	break;
}



}
cout<<"Based on invetigation, Who is the culprit"<<endl;
cout<<"1. The wife, 2. The neighbour, 3. Both"<<endl<<endl;
 cin>>decision;
 
 while (decision != '1' &&decision != '2' && decision != '3') {
        cout << "Invalid input. Please enter '1' or '2' or '3' again: "<<endl;
		cout<<endl;
        cin >>decision;
        }
        
 if (decision=='1' || decision =='2'){
 	cout<<"you failed";
 	cout<<endl;
 	reputation-=20;
 	
 }
 else if (decision == '3'){
 	cout<<"You Won!!"<<endl;
 	 cout<<"\t --------------------------------------------------------------------------------------------------------";
 	  cout<<"\t --------------------------------------------------------------------------------------------------------";
 	  cout<<endl;
 	cout<<"THE WIFE MADE PLAN WITH NEIGHBOUR TO ROB HER OWN HUSBAND \n";
 	cout<<endl;
 	reputation +=20;
 	
 }
 cout<<"\t\t Your Reputation = "<<reputation;
 cout<<endl;
 cout<<"\t\t Energy remaining = "<<energy;
 cout<<endl;
  cout<<"\t --------------------------------------------------------------------------------------------------------";
  cout<<endl;
}

int main(){
	
	scenario1();
	return 0;
}
