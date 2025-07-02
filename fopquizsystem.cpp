
#include<iostream>  			// In this line we use header file for intput and ouptut.
#include<conio.h>       // This purpose of header file we don't press enter again and again. 
#include<windows.h>        // this is header file
#include<fstream>		// This header file is used for sleep and system.
using namespace std;
struct student{					// we using structure and structure name is student.
	char name[30],*na[30],registraction[10]; // In this line using arrary for name and registration.

}; student obj1; 							// In this line obj1 is object of the student.
int main(){                      // This is main funtion program run from here.
  		ofstream show("test.txt");			// this is file handling 		  
	char ch,press;               // we used char data type. 
	int marks=0;  				// we used integer data type.
	do{                 	  // we used do while loop.
cout<<"\n\n\n\t\t\t\t\t\t\t\t**************"<<endl;// \n is used for new line.
cout<<"\t\t\t\t\t\t\t\t****** WELL COME ***** "<<endl;// \t is used for  eight space.
cout<<"\t\t\t\t\t\t\t\t**************"<<endl;
	cout<<"Enter your name : ";            
	show<<"Name is ="<<gets(obj1.name)<<endl;// get name from user and store in txt file.
	cout<<"Registraction No : ";
	show<<"Registration No :"<<gets(obj1.registraction);// get registraction no and store in txt file.								// get registraction number from user.						
	system("CLS");				// cls is used for clear the screen or for new screen.
	for(int i=1;i<=40;i++){ 				// In this line we used for loop.
		cout<<"Question no :"<<i<<endl;// loop again and agin run the question number is changing with loop. 
		switch(i){					// we used  switch statement.
		case 1:		// This is first case of switch statement.
	cout<<"\t\t\t\t\t\t\t\t\t\t\tYour English Test is Start "<<endl; // Telling to user your english test is start.
	cout<<"He is _ to school."<<endl;			// This is first Question
	cout<<"a) go"<<endl;						// This is  first choice 
	cout<<"b) going"<<endl;									// This is second choice
	cout<<"c) gone"<<endl;									// This is third choice
	cout<<"d) gone"<<endl;							//	This is Four Choice
	ch=getch();	// getch( );this means there is no need to press enter. 
	if(ch=='b'||ch=='B'){		// This line is check which option is correct .
		marks++;						// Marks is used for increment.
		}system("CLS");			// This line is used for new Screen.
		break;      //  break is used for termineate the other case just run this case .
		case 2:							// This is second case .
	cout<<"\nHe___ gone to Skardu."<<endl;	// This is Second Question.
	cout<<"a) was"<<endl;    							  // This is first choice.
	cout<<"b) is"<<endl;								// This is Second choice.
	cout<<"c) have"<<endl;							// Thi is third choice
	cout<<"d) has "<<endl;						//This is four choice
	ch=getch();       					// when we used header fle conio.h and getch( );this means there is no need to press enter. 
	if(ch=='d'||ch=='D'){      	// This line is check which option is correct .
		marks++;}								// This line is check which option is correct .
			system("CLS");                           	// This line is used for new Screen.  
		break;						 // Marks is used for increment.
		case 3:                       		// This is third case .
		cout<<"\n Antonum of Good___."<<endl;			// This is third Question
	cout<<"a) best"<<endl;				// This is second choice
	cout<<"b) stupid"<<endl;			// This is second choice
	cout<<"c) baad"<<endl;      	// This is third choice
	cout<<"d) folloish"<<endl; 			//	This is Four Choice
	ch=getch();	// getch( );this means there is no need to press enter. 
	if(ch=='c'||ch=='C'){    	// This line is check which option is correct .
	      marks++;}             // Marks is used for increment.
	      system("CLS");     	// This line is used for new Screen.
	      break;         //  break is used for termineate the other case just run this case .
	      case 4:               	// This isfour case .
cout<<"\n She is going to quit her job___they give her a pay rise."<<endl;	// This is four Question.
	cout<<"a) or"<<endl;	
	cout<<"b) until"<<endl;
	cout<<"c) unless"<<endl;
	cout<<"d) providing"<<endl;
	ch=getch();
	if(ch=='c'||ch=='C'){
	marks++;}
	system("CLS");
	break;
	case 5:
	cout<<"\n Aisha has finished her work,now she is ___home."<<endl;
	cout<<"a) going "<<endl;
	cout<<"b) going to"<<endl;
	cout<<"c) going to her"<<endl;
	cout<<"d) going towards the"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
	
		cout<<"Your answer is correct"<<endl;
	marks++;}
	system("CLS");
	break;

case 6:	
	cout<<"\n It's the first time I___ sea-food in my life."<<endl;
	cout<<"a) eat"<<endl;
	cout<<"b) eaten"<<endl;
	cout<<"c) had eaten"<<endl;
	cout<<"d) have eaten"<<endl;
	ch=getch();
	if(ch=='d'||ch=='D'){
       marks++;}
       system("CLS");
         break;
	case  7:
	cout<<"\n If have money, I___it tomorrow."<<endl;
	cout<<"a) will purchase"<<endl;
	cout<<"b) would purchase"<<endl;
	cout<<"c) have purchase"<<endl;
	cout<<"d) have purchased"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
		marks++;}
	system("CLS");
	break;
	case 8:
	cout<<"\n The students subject to___treated like a child by their teachers."<<endl;
	cout<<"a) be"<<endl;
	cout<<"b) being"<<endl;
	cout<<"c) become"<<endl;
	cout<<"d) became"<<endl;
	ch=getch();
	if(ch=='b'||ch=='B'){
	marks++;}
	system("CLS");
	break;
	case 9:
	cout<<"\n By the time he was thirty,he___many tournament."<<endl;
	cout<<"a) won"<<endl;
	cout<<"b) had won"<<endl;
	cout<<"c) has had won"<<endl;
	cout<<"d) was winning"<<endl;
	ch=getch();
	if(ch=='b'||ch=='B'){
		marks++;}
	system("CLS");
	break;
	case 10:
	cout<<"\n They hate it when their football team___."<<endl;
	cout<<"a) loses"<<endl;
	cout<<"b) looses"<<endl;
	cout<<"c) lost"<<endl;
	cout<<"d) losing"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
	marks++;}
	system("CLS");
	break;
	case 11:
	cout<<" your Physic Test is Starting Please wait";
	for(int i=0;i<5;i++){
		cout<<".";
			Sleep(1000);
	}
	cout<<"\n The study of motion of voides without reference to force and mass."<<endl;
	cout<<"a) Machanics"<<endl;
	cout<<"b) Dynamics"<<endl;
	cout<<"c) Kinematices"<<endl;
	cout<<"d) Waves"<<endl;
	ch=getch();
	if(ch=='c'||ch=='C'){
	marks++;}
	system("CLS");
	break;
	case 12:
cout<<"\n Which of the following is not a type of Translatory motion."<<endl;
	cout<<"a) Random motion"<<endl;
	cout<<"b) linear motion"<<endl;
	cout<<"c) Circular motion"<<endl;
	cout<<"d) Rotatory motion"<<endl;
	ch=getch();
	if(ch=='d'||ch=='D'){
	marks++;}
	system("CLS");
	break;
	case 13:
	cout<<"\n If a body moving in a circular path,then such a motion is called."<<endl;
	cout<<"a) rotatory motion"<<endl;
	cout<<"b) vibratory motion"<<endl;
	cout<<"c) linear motion"<<endl;
	cout<<"d) circular motion"<<endl;
	ch=getch();
	if(ch=='d'||ch=='D'){
		marks++;}
	system("CLS");
		break;
case 14:
		cout<<"\n Random motion of gas molecules is called."<<endl;
	cout<<"a) Zig Zag motion"<<endl;
	cout<<"b) linear motion"<<endl;
	cout<<"c) circular motion"<<endl;
	cout<<"d) Brownian motion"<<endl;
	ch=getch();
	if(ch=='d'||ch=='D'){
	marks++;}
	system("CLS");
	break;
	case 15:
		cout<<"\n Vector is a."<<endl;
	cout<<"a) vector quantity"<<endl;
	cout<<"b) scalar quantity"<<endl;
	cout<<"c) uniform quantity"<<endl;
	cout<<"d) variable quantity"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
		marks++;}
	system("CLS");
	break;
	case 16:
		cout<<"\n How many scales of measurment of temperature are."<<endl;
	cout<<"a) 1"<<endl;
	cout<<"b) 2"<<endl;
	cout<<"c) 3"<<endl;
	cout<<"d) 4"<<endl;
	ch=getch();
	if(ch=='c'||ch=='C'){
	marks++;}
	system("CLS");
	break;
	case 17:
		cout<<"\n Which of the following material has large specific heat ?."<<endl;
	cout<<"a) Copper"<<endl;
	cout<<"b) Ice"<<endl;
	cout<<"c) Water"<<endl;
	cout<<"d) mercury"<<endl;
	ch=getch();
	if(ch=='c'||ch=='C'){
	marks++;}
	system("CLS");
	break;
	case 18:
	cout<<"\n Heat provide us."<<endl;
	cout<<"a) Energy"<<endl;
	cout<<"b) Water"<<endl;
	cout<<"c) Air"<<endl;
	cout<<"d) Soil"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
	marks++;}
	system("CLS");
	break;
	case 19:
cout<<"\n Heat is need for."<<endl;
	cout<<"a) Human"<<endl;
	cout<<"b) Animal"<<endl;
	cout<<"c) Plant"<<endl;
	cout<<"d) All"<<endl;
	ch=getch();
	if(ch=='d'||ch=='D'){
		marks++;}
	system("CLS");
	break;
	case 20:
	cout<<"\n When we put a hot iron piece into normal water,the temprature of water."<<endl;
	cout<<"a) raises"<<endl;
	cout<<"b) decrease"<<endl;
	cout<<"c) remain same"<<endl;
	cout<<"d) non of these"<<endl;
	ch=getch();
	if(ch=='a'||ch=='A'){
	marks++;}
	system("CLS");
	break;
	case 21:
cout<<" your Computer Test is Starting Please wait";
	for(int i=0;i<5;i++){
		cout<<".";
		Sleep(1000);
	}cout<<endl;
	cout<<"\n The term Computer is derived from___?"<<endl;
cout<<"A) Latin "<<endl;
cout<<"b) German"<<endl;
cout<<"c) French"<<endl;
cout<<"d) Arabic"<<endl;
	ch=getch();
	if(ch=='A'||ch=='a'){
	marks++;}
	system("CLS");
	break;
	case 22:
cout<<"\n Who is the father of Computer?"<<endl;
cout<<"a) Allen Turing"<<endl;
cout<<"b) Charles Babbage"<<endl; 
cout<<"c) Simur Cray"<<endl;
cout<<"d) Augusta Adaming"<<endl;
ch=getch();
if(ch=='b'||ch=='B'){
marks++;}
	system("CLS");
	break;
	case 23:
cout<<"\n The basic operations performed by a computer are___?"<<endl;
cout<<"a) Arithmetic operation"<<endl;
cout<<"b) Logical operation"<<endl;
cout<<"c) Storage and relative"<<endl;
cout<<"d) All the above "<<endl;
ch=getch();
if(ch=='d'||ch=='D'){
     marks++;}
	system("CLS");
	break;
	case 24:
cout<<"\n  Who is the father of Internet ?"<<endl;
cout<<"a) Chares Babbage"<<endl;
cout<<"b) Vint Cerf"<<endl;
cout<<"c) Denis Riche"<<endl;
cout<<"d) Martin Cooper"<<endl;
ch=getch();
if(ch=='b'||ch=='B'){
	marks++;}
system("CLS");
break;
case 25:
cout<<"\n  WWW stands for___?"<<endl;
cout<<"a) World Whole Web"<<endl;
cout<<"b) Wide World Web"<<endl;
cout<<"c) Web World Wide"<<endl;
cout<<"d) World Wide Web"<<endl;
ch=getch();
if(ch=='D'||ch=='d'){
		marks++;}
system("CLS");
break;
case 26:
cout<<"\n Which technology used in compact disks?"<<endl;
cout<<"a) Mechanical"<<endl;
cout<<"b) Electrical"<<endl;
cout<<"c) Electro Magnetic"<<endl;
cout<<"d) Laser"<<endl;
ch=getch();
if(ch=='D'||ch=='d'){
marks++;}
system("CLS");
break;
case 27:
cout<<"\n Gigabyte is equal to _?"<<endl;
cout<<"a) 1024 megabytes"<<endl;
cout<<"b) 1000 megabytes"<<endl;
cout<<"c) 1024 kilobytes"<<endl;
cout<<"d) 1024 bits"<<endl;
ch=getch();
if(ch=='A'||ch=='a'){
	marks++;}
system("CLS");
break;
case 28:
cout<<"\n VGA is___?"<<endl;
cout<<"a)Video Graphics Array"<<endl; 
cout<<"b)Visual Graphics Array"<<endl;
cout<<"c)Volatile Graphics Array"<<endl;
cout<<"d)Video Graphics Adapter"<<endl;
ch=getch();
if(ch=='A'||ch=='a'){
	marks++;}
system("CLS");
break;
case 29:
cout<<"\n WAN stands for___?"<<endl;
cout<<"a) Wap Area Network"<<endl;
cout<<"b) Wide Area Network"<<endl; 
cout<<"c) Wide Array Net"<<endl;
cout<<"d) Wireless Area Network"<<endl;
ch=getch();
if(ch=='B'||ch=='b'){
	marks++;}
system("CLS");
break;
case 30:
cout<<"\n The first computers were programmed using___?"<<endl;
cout<<"a) Object code"<<endl;
cout<<"b) Machine language"<<endl; 
cout<<"c) Source code"<<endl;
cout<<"d) Assembly language"<<endl;
ch=getch();
if(ch=='D'||ch=='d'){
marks++;}
system("CLS");
break;
case 31:
	cout<<" your Math Test is Starting Please Wait";
	for(int i=0;i<5;i++){
		Sleep(1000);           //In this line we have used Sleep(); This means corser blink five times that is called loading.
		cout<<".";}             // The corser blink five time so look as...... 
cout<<"\n\n Two matrix A and B are equal if"<<endl;
 cout<<"a)They are square matrix"<<endl;
 cout<<"b)They have same order"<<endl;
 cout<<"c)Their corresponding elements are equal"<<endl;
 cout<<"d)They have same number of columns"<<endl;
 	ch=getch();
	if(ch=='c'||ch=='C'){
marks++;}
	system("CLS");
	break;
	case 32:
	cout<<" How many kinds of trigonometry are?"<<endl;
 cout<<"a)Only one"<<endl;
 cout<<"b)Four"<<endl;
 cout<<"c)Two"<<endl;
 cout<<"d)Three"<<endl;
 ch=getch();
 	if(ch=='c'||ch=='C'){
		marks++;}
	system("CLS");
	break;
	case 33:
cout<<" 18 men can eat 20 kg of rice in 3 days. How long will 6 men take to eat 40 kg of rice? "<<endl;
cout<<"a 20 cout "<<endl;
cout<<"b 18 cout"<<endl;
cout<<"c 32 cout"<<endl;
cout<<"d 20 cout"<<endl;
ch=getch();
	if(ch=='b'||ch=='B'){
marks++;}
	system("CLS");
	break;
	case 34:
	cout<<" Who is known as the Father of Geometry?"<<endl;
	cout<<"a)Kepler "<<endl;
 	cout<<"b)Euclid"<<endl;
	cout<<"c)Pythagoras"<<endl;
 	cout<<"d)Newton"<<endl;
ch=getch();
if(ch=='B'||ch=='b'){
		marks++;}
	system("CLS");
	break;
	case 35:
	cout<<"\n What comes next in the sequence: 1, 3, 11, 43, _?"<<endl;
cout<<"a)161"<<endl;
cout<<"b)171"<<endl;
cout<<"c)181"<<endl;
cout<<"d)191"<<endl;
ch=getch();
if(ch=='B'||ch=='b'){
	marks++;}
	system("CLS");
	break;
	case 36:
	cout<<"\n In a class of 40 students 20% are girls. How many boys are there in the class?"<<endl;
cout<<"a)26"<<endl;
cout<<"b)28"<<endl;
cout<<"c)30"<<endl;
cout<<"d)32"<<endl;
ch=getch();
if(ch=='d'||ch=='D'){
	marks++;}
	system("CLS");
	break;
	case 37:
	cout<<" A plane cutting the cone parallel to its axis gives a _"<<endl;
 cout<<"a)Ellipse"<<endl;
 cout<<"b)Parabola"<<endl;
 cout<<"c)Circle"<<endl;
 cout<<"d)Hyperbola"<<endl;
ch=getch();
if(ch=='d'||ch=='D'){
	marks++;}
	system("CLS");
	break;
	case 38:
cout<<" A Quadrillion has _ zeros?"<<endl;
cout<<"a) 15 zeros"<<endl;
cout<<"b) 18 zeros"<<endl;
cout<<"c) 21 zeros"<<endl;
cout<<"d) None of these"<<endl;
ch=getch();
if(ch=='a'||ch=='A'){
		marks++;}
		system("CLS"); 
break;
case 39:
cout<<"\n zero is a__ number?"<<endl;
cout<<"a) odd number"<<endl;
cout<<"b) even number"<<endl;
cout<<"c) whole number"<<endl;
cout<<"d) None of these"<<endl;
ch=getch();
if(ch=='c'||ch=='C'){
		marks++;}
		system("CLS"); 
break;
case 40:
cout<<"\n A Sextillion has___zeros?"<<endl;
cout<<"A 15 zeros"<<endl;
cout<<"B 18 zeros"<<endl;
cout<<"C 21 zeros"<<endl;
cout<<"D 24 zero"<<endl;
ch=getch();
	if(ch=='c'||ch=='C'){
		marks++;}
		system("CLS"); 
		break;
		default: //  default is that's why used if user wrong enter they check the case the condition is false so automatically default is run.
			cout<<"Your wrong enter";}   // shows in screen you wrong enter.
}	
cout<<"\n\n\n\t\t\t\tPlease wait for Result ";// show result //In this line we used /n and /t because we want to go next line and left space.
for(int j=0;j<5;j++){     // again we used for loop.
	cout<<".";
	Sleep(1000);    // aging we used sleep just sequence.
}
cout<<"\nName is :"<<obj1.name<<endl;      // show in screen your user name.
cout<<"Registraction No is :"<<obj1.registraction<<endl;			//show in screen user registraction no.
if(marks>=20){          //we used if else for condtion if marks is maximum to twenty then show pass.
	cout<<"Congratulation You have pass"<<endl;
		show<<cout<<"Congratulation You have pass"<<endl;}	// show in screen congratulation and show status.
	else{      			// if if don't run then else automatically run.
cout<<"\nSorry your Fail "<<endl;
show<<cout<<"\nSorry your Fail "<<endl;} 			// if user get marks less them twenty the show in screen sorry you are fail. 
cout<<"\nYour Score is : "<<marks<<" out of 40"<<endl;
show<<cout<<"\nYour Score is : "<<marks<<" out of 40"<<endl;}// show  maks in screen and store in txt file.
while(press=='c'||press=='C');}// the condition is check if user press c the program run again.


