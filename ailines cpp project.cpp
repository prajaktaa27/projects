#include<iostream> 
#include<fstream>
#include<iomanip>
using namespace std;
void mainmenu();
 class management{
    public:
    management(){
        mainmenu();
    }
 };
 class details{
 	public:
 		static string name,gender;
 		int phoneno;
 		int age;
 		string add;
 		static int cid;
 		char arr[100];
 		void information(){
		 cout<<"\nENter the custoner id:";
		 cin>>cid;
		 cout<<"\n enter name";
		 cin>>name;
		 cout<<"\nenter age:";
		 cin>>age;
		 cout<<"\n address:";
		 cin>>add;
		 cout<<"\n enter gender";
		 cin>>gender;
		 cout<<"your details are saved with us\n"<<endl;
		 }
 };
 int details::cid;
 string details::name;
 string details::gender;
 class registration{
 	public:
 		static int choice;
 		int choice1;
 		int back;
 		static float charges;
 		void flights(){
 			string flightn[]={"Dubai","canada","uk","usa","autralia","europe"};
 			for(int a=0;a<6;a++){
 				cout<<(a+1)<<".flight to"<<flightn[a]<<endl;
			 }
			 cout<<"welcome to airlines"<<endl;
			 cout<<"press the numebrn of country of which you want too book a flight:";
			 cin>>choice;
			 switch(choice){
			 	case 1:{
			 		cout<<"_____________________welcome to debai emirates_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. DUB - 498"<<endl;
			 		cout<<"\t 08-01-2025 8:00am 10hr Rs.14000"<<endl;
			 		cout<<"1. DUB - 658"<<endl;
			 		cout<<"\t 09-01-2025 4:00am 12hr Rs.10000"<<endl;
					cout<<"1. DUB - 508"<<endl;
			 		cout<<"\t 11-01-2025 11:00am 11hr Rs.9000"<<endl;
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=14000;
			 			cout<<"\n You have suyccesfuklly book a fight DUB -498"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==2){
			 			charges=10000;
			 			cout<<"\n You have suyccesfuklly book a fight DUB -658"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==3){
			 			charges=9000;
			 			cout<<"\n You have suyccesfuklly book a fight DUB 508"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 case 2:
				 	{
			 		cout<<"_____________________welcome to canadian emirates_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. CA - 198"<<endl;
			 		cout<<"\t 09-01-2025 2:00am 10hr Rs.34000"<<endl;
			 		cout<<"1. CA - 158"<<endl;
			 		cout<<"\t 11-01-2025 6:00am 23hr Rs.29000"<<endl;
					cout<<"1. CA - 208"<<endl;
			 		cout<<"\t 14-01-2025 12:00am 21hr Rs.40000"<<endl;
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=34000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -198"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==2){
			 			charges=29000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -158"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==3){
			 			charges=40000;
			 			cout<<"\n You have suyccesfuklly book a fight CA 208"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 case 3:{
			 		cout<<"_____________________welcome to UK airways_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. UK - 798"<<endl;
			 		cout<<"\t 12-01-2025 10:00am 14hr Rs.44000"<<endl;
			 	
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=44000;
			 			cout<<"\n You have suyccesfuklly book a fight DUB -498"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 case 4:	{
			 		cout<<"_____________________welcome to US emirates_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. US - 198"<<endl;
			 		cout<<"\t 10-01-2025 9:00am 22hr Rs.37000"<<endl;
			 		cout<<"1. US - 158"<<endl;
			 		cout<<"\t 11-01-2025 6:00am 23hr Rs.39000"<<endl;
					cout<<"1. US - 208"<<endl;
			 		cout<<"\t 14-01-2025 12:00am 21hr Rs.42000"<<endl;
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=37000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -198"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==2){
			 			charges=39000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -158"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==3){
			 			charges=42000;
			 			cout<<"\n You have suyccesfuklly book a fight CA 208"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 case 5:
				 		{
			 		cout<<"_____________________welcome to australian emirates_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. AS - 198"<<endl;
			 		cout<<"\t 09-01-2025 9:00am 10hr Rs.44000"<<endl;
			 		cout<<"1. AS - 158"<<endl;
			 		cout<<"\t 19-01-2025 6:00am 23hr Rs.10000"<<endl;
					cout<<"1. AS - 208"<<endl;
			 		cout<<"\t 17-01-2025 12:00am 21hr Rs.42000"<<endl;
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=44000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -198"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==2){
			 			charges=10000;
			 			cout<<"\n You have suyccesfuklly book a fight CA -158"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==3){
			 			charges=42000;
			 			cout<<"\n You have suyccesfuklly book a fight CA 208"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 case 6:	{
			 		cout<<"_____________________welcome to european emirates_______________________\n"<<endl;
			 		cout<<"your comfort is our priority.enjoy the journey!"<<endl;
			 		cout<<"following are the lights\n"<<endl;
			 		cout<<"1. EU - 898"<<endl;
			 		cout<<"\t 02-01-2025 2:00am 18hr Rs.36000"<<endl;
			 		cout<<"1. EU - 958"<<endl;
			 		cout<<"\t 03-01-2025 6:00am 19hr Rs.37000"<<endl;
					cout<<"1. EU - 608"<<endl;
			 		cout<<"\t 12-01-2025 10:00am 20hr Rs.31000"<<endl;
			 		cout<<"\n select the flight you want to, book:";
			 		cin>>choice1;
			 		if(choice1==1){
			 			charges=36000;
			 			cout<<"\n You have suyccesfuklly book a fight EU -898"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==2){
			 			charges=37000;
			 			cout<<"\n You have suyccesfuklly book a fight EU -958"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }
					 else if(choice1==3){
			 			charges=31000;
			 			cout<<"\n You have suyccesfuklly book a fight CA 608"<<endl;
			 			cout<<"you can go back to menu and take the ticket"<<endl;
					 }else{
					 	cout<<"invalid input,shifting tothe previous menu"<<endl;
					 	flights();
					 }
					 cout<<"press any key to go back to main menu"<<endl;
					 cin>>back;
					 if(back==1){
					 	mainmenu();
					 }else{
					 	mainmenu();
					 }
				 }
				 default:{
				 	
					cout<<"Invalid input,shifting you to the main menu !"<<endl;
					mainmenu();
					break;
				 }
			 }
		 }
	};
	float registration::charges;
	int registration::choice;
	class ticket:public registration,details{
		public:
			void bill(){
				string destination="";
				ofstream outf("record.txt");{
				outf<<"___________indigo airlines_______________"<<endl;
					outf<<"______________ticket__________________"<<endl;
						outf<<"__________________________________"<<endl;
						outf<<"custemer id<"<<details::cid<<endl;
					
						outf<<"custemer name<"<<details::name<<endl;
				
						outf<<"custemer gender <"<<details::gender<<endl;
						outf<<"\t Destription"<<endl<<endl;
						
						if(registration::choice==1){
							destination="Dubai";
						}
						else if(registration::choice==2){
							destination="Canada";
						}
							else if(registration::choice==3){
							destination="UK";
						}
							else if(registration::choice==4){
							destination="USA";
						}
							else if(registration::choice==5){
							destination="Australia";
						}
							else if(registration::choice==6){
							destination="Europe";
						}
						outf<<"Destination\t\t"<<destination<<endl;
						outf<<"flight cose:\t\t"<<registration::charges<<endl;
				}
				outf.close();
				}
				void dispbill(){
					ifstream ifs("records.txt");{
					if(!ifs){
						cout<<"file error!"<<endl;
					}while(!ifs.eof()){
						ifs.getline(arr,100);
						cout<<arr<<endl;
					}
					}
					ifs.close();
				}
			};
	
	
 
 void mainmenu(){
    int lchoice;
    int schoice;
    int back;
    cout<<"\t               Indigo Airlines\n"<<endl;
    cout<<"\t______________________Main Menu________________________"<<endl;
        cout<<"\t________________________________________"<<endl;
        cout<<"\t|\t\t\t\t\t\t|"<<endl;
        cout<<"\t|\t Press 1 to add the customer Details   \t|"<<endl; 
          cout<<"\t|\t Press 2 for flight registration     \t|"<<endl; 
            cout<<"\t|\t Press 3 for ticket and charges    \t|"<<endl; 
              cout<<"\t|\t Press 4 to exit                 \t|"<<endl;    
              cout<<"\t|\t\t\t\t\t\t|"<<endl;
              cout<<"\t ______________________________________________________"<<endl;

              cout<<" Enter the choice:";
              cin>>lchoice;
              
              details d;
              registration r;
              ticket t;
              switch(lchoice){
              	case 1:{
              		cout<<"________________customers___________________\n"<<endl;
				d.information();
				cout<<"Press 1 to go back to Main menu";
				cin>>back;
				if(back==1){
					mainmenu();
				}else{
					mainmenu();
				}
				break;
				  }
				case 2:{
					
					cout<<"__________Book a flight using this system____________\n"<<endl;
					r.flights();
					break;
				}
				case 3:
				{
				
					cout<<"__________GET YOUR TICKET_______\n"<<endl;
					t.bill();
				   cout<<" your ticket is printed you can collect it\n"<<endl;
				   cout<<"press 1 to display your ticket";
				   cin>>back;
				   if(back==1){
				   	t.dispbill();
				   	cout<<"PRess any key to go back to mainmenu";
				   	cin>>back;
				   	if(back==1){
				   		mainmenu();
					   }else{
					   	mainmenu();
					   }
				   }else{
				   	mainmenu();
				   }
				   break;
			  }
			  case 4:
			  	{
			  		cout<<"\n\n\t__________Thankyou____________"<<endl;
			  		break;
				  }
				  default:{
				  	cout<<"Invalid input,please try again\n"<<endl;
				  	mainmenu();
				  	break;
				
				  }
			  }
 }
 int main(){
 	management mobj;
 	return 0;
 }
