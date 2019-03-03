//**********************************************************
// PROJECT ELECTION-VOTING SOFTWARE
//**********************************************************
//**********************************************************
//	INCLUDED HEADER FILES
//**********************************************************
#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<dos.h>

//*********************************************************
//   THIS FUNCTION IS FOR PASSWORD SETTINGS
//*********************************************************
int noc;
int no;
char pass[20];
char getpas[20];
void createpass();
void checkpass();
char pinc[20];
char getpin[20];
void createpin();
void checkpin();
void createpass()
{
int i,r=0;
clrscr();
cout<<"\n\n\t\tINITIALIZE PASSWORD\n";
delay(200);
cout<<"\n\n\tENTER THE NUMBER OF CHARACTERS....";
cin>>noc;
delay(200);
cout<<"\n\n\tENTER PASSWORD .... ";
for(i=0;i<noc;i++)
{
pass[i]=getch();
if(pass[i]=='\r')
break;
else if(pass[i]==13)
{
pass[r]='\0';
break;
}
else if(pass[i]==8)
{
if(i>0)
{
cout<<pass[i]<<" "<<pass[i];
i-=2;r--;
}
else
i--;
}
else if(pass[i]==27)
exit(0);
else
{
cout<<"*";
pass[r]=pass[i];
r++;
}
}
cout<<"\n\n\t\tPASSWORD INITILALIZED\n ";
}
void checkpass()
{
int j,k,r=0;
clrscr();
repass:
cout<<"\n\n\tENTER THE PASSWORD....";
for(j=0;j<noc;j++)
{
getpas[j]=getch();
if(getpas[j]=='\r')
break;
else if(getpas[j]==13)
{
getpas[r]='\0';
break;
}
else if(getpas[j]==8)
{
if(j>0)
{
cout<<getpas[j]<<" "<<getpas[j];
j-=2;
r--;
}
else
j--;
}
else if(getpas[j]==27)
exit(0);
else
{
cout<<"*";
getpas[r]=getpas[j];
r++;
}
}
cout<<"\n\n\t\t\tCHECKING PASSWORD";
int che;
for(che=0;che<7;che++)
{
cout<<".";
delay(100);
}
delay(1000);
clrscr();
for(k=0;k<noc;k++)
{
if((pass[k]==getpas[k])&&(k<noc))
continue;
else
{
cout<<"\n\n\t\t\a!! INVALID PASSWORD !!";
delay(300);
cout<<"\n\n\t\t--> TRY AGAIN";
delay(500);
clrscr();
goto repass;
}
}
}

void createpin()
{
int i,r=0;
clrscr();
cout<<"\n\n\n\t\tINITIALIZE PIN\n";
delay(200);
cout<<"\n\n\tENTER THE NUMBER OF CHARACTERS....";
cin>>no;
delay(200);
cout<<"\n\n\tENTER PIN .... ";
for(i=0;i<no;i++)
{
pinc[i]=getch();
if(pinc[i]=='\r')
break;
else if(pinc[i]==13)
{
pinc[r]='\0';
break;
}
else if(pinc[i]==8)
{
if(i>0)
{
cout<<pinc[i]<<" "<<pinc[i];
i-=2;r--;
}
else
i--;
}
else if(pinc[i]==27)
exit(0);
else
{
cout<<"*";
pinc[r]=pinc[i];
pinc[r];
r++;
}
}
cout<<"\n\n\t\tPIN INITILALIZED\n ";
}
void checkpin()
{
int j,k,r=0;
clrscr();
repass:
cout<<"\n\n\tENTER THE PIN....";
for(j=0;j<no;j++)
{
getpin[j]=getch();
if(getpin[j]=='\r')
break;
else if(getpin[j]==13)
{
getpin[r]='\0';
break;
}
else if(getpin[j]==8)
{
if(j>0)
{
cout<<getpin[j]<<" "<<getpin[j];
j-=2;
r--;
}
else
j--;
}
else if(getpin[j]==27)
exit(0);
else
{
cout<<"*";
getpin[r]=getpin[j];
r++;
}
}
cout<<"\n\n\t\t\tCHECKING PIN ";
int chp;
for(chp=0;chp<7;chp++)
{
cout<<".";
delay(100);
}
delay(1000);
clrscr();
for(k=0;k<no;k++)
{
if((pinc[k]==getpin[k])&&(k<no))
continue;
else
{
cout<<"\n\n\t\t\a!! INVALID PIN !!";
delay(300);
cout<<"\n\n\t\t--> TRY AGAIN";
delay(500);
clrscr();
goto repass;
}
}
}
//*********************************************************
//  THIS FUNCTION IS FOR INTRODUCTION
//*********************************************************
void intro()
{
clrscr();
int i,x=1,y,m;
cout<<"+";
delay(100);
for(i=0;i<78;i++)
{
delay(30);
gotoxy(2+i,1);cputs("-");
if(i<22)
{
gotoxy(1,i+2);cputs("¦");
}
if(i==22)
{
gotoxy(1,24);cputs("+");
}
if(i>22)
{
gotoxy(x+1,24);cputs("-");
x++;
}
}
delay(50);
gotoxy(80,1);cputs("+");
for(i=0;i<24;i++)
{
delay(30);
if(i<22)
{
gotoxy(80,2+i);cputs("¦");
}
gotoxy(x+i,24);cputs("-");
if(i==21)
{
gotoxy(80,24);cputs("+") ;
}
}
delay(700);
textcolor(14);
gotoxy(2,2);
cputs("+");
for(i=0;i<76;i++)
{
cputs("-");
}
for(i=3;i<23;i++)
{
gotoxy(2,i);cputs("¦");
}
gotoxy(2,23);cputs("+");
for(i=3;i<79;i++)
{
gotoxy(i,23);cputs("-");
}
cputs("+") ;
for(i=22;i>2;i--)
{
gotoxy(79,i);cputs("¦");
}
gotoxy(79,2);
cputs("+");
delay(700);
textcolor(4);
gotoxy(3,3);
cputs("+");
for(i=0;i<75;i++)
{
cputs("-");
}
for(i=4;i<23;i++)
{
gotoxy(3,i);
cputs("¦");
}
gotoxy(3,22);
cputs("+");
for(i=4;i<78;i++)
{
gotoxy(i,22);
cputs("-");
}
cputs("+") ;
for(i=21;i>3;i--)
{
gotoxy(78,i);cputs("¦");
}
delay(100);
gotoxy(16,4);
cout<<"####  #     ####   ###  #####  #    # #    #   #";
delay(200);
gotoxy(16,5);
cout<<"#     #     #     #       #    #   #   #   ##  #";
delay(200);
gotoxy(16,6);
cout<<"###   #     ###  #        #    #  #     #  # # #";
delay(200);
gotoxy(16,7);
cout<<"#     #     #     #       #    #   #   #   #  ##";
delay(200);
gotoxy(16,8);
cout<<"####  ####  ####   ###    #    #    # #    #   #";
delay(500);
gotoxy(10,10);
cout<<"  ###   # #    #   #  #   #  #   # #  # # #    # #    #   # ";
delay(200);
gotoxy(10,11);
cout<<" #     #   #   ## ##  ## ##  #  #    #    #   #   #   ##  # ";
delay(200);
gotoxy(10,12);
cout<<"#     #     #  # # #  # # #  #   #     #  #  #     #  # # # ";
delay(200);
gotoxy(10,13);
cout<<" #     #   #   #   #  #   #  #     #    # #   #   #   #  ## ";
delay(200);
gotoxy(10,14);
cout<<"  ###   # #    #   #  #   #  #  # #  # #  #    # #    #   # ";
delay(500);
gotoxy(16,16);
cout<<"  # #    ####    #   #   #  # #    #     ##    ";
delay(200);
gotoxy(16,17);
cout<<" #   #   #       #   ##  #  #   #  #    #  #   ";
delay(200);
gotoxy(16,18);
cout<<"#     #  ###     #   # # #  #   #  #   # ## #  ";
delay(200);
gotoxy(16,19);
cout<<" #   #   #       #   #  ##  #   #  #  #      # ";
delay(200);
gotoxy(16,20);
cout<<"  # #    #       #   #   #  # #    #  #      #\n\n ";
delay(500);
m=10;
y=49;
for(i=0;i<10;i++)
{
m++;
textcolor(m+8);
textbackground(0);
if(m==17)
m=1;
if(i%2==0)
y--;
delay(90);
gotoxy(33,y);
textcolor(1);
cout<<"\t\tPRESS   ENTER";
delay(100);
gotoxy(33,y+1);
cout<<"\t";
}
getch();
}
//*************************************************************
//     THIS FUNCTION IS FOR DESCRIPTION 
//*************************************************************
char description()
{
textcolor(4);
cout<<"\n\t DESCRIPTION :\n\t\t\tIN THIS PROJECT, A PREDETERMINED SET OF \n\n";
delay(750);
cout<<"\t VOTERS WILL BE ABLE TO CAST THE VOTE .VOTERS WILL HAVE \n\n";
delay(750);
cout<<"\t TO PROVE THEIR IDENTITY BY GIVING THEIR IDENTIFICATION \n\n";
delay(750);
cout<<"\t NO. A AUTHENTICATED USER WILL BE ABLE TO CAST THE VOTE.\n\n";
delay(750);
cout<<"\t A USER WHO HAS CASTED THE VOTE CANNOT CAST AGAIN.AFTER \n\n";
delay(750);
cout<<"\t VOTING HAS FINISHED RESUTS WILL BE DECLARED. A SETUP \n\n";
delay(750);
cout<<"\t OPTION BEFORE ELECTION STARTS , WILL ALLOW VOTER TO BE \n\n";
delay(750);
cout<<"\t CREATED AND CANDIDATE CHOOSEN. \n\n";
delay(1500);
cout<<"\n\n\n\t\t\tPLEASE PRESS ENTER TO CONTINUE & Esc. TO EXIT\t";
char ch;
for(;;)
{
ch=getch();
if(ch==13)
break;
else if(ch==27)
exit(0);
else
cout<<"\n\n\t\t\t\a ! WRONG KEY ENTERED !";
delay(300);
cout<<"\n\n\n\n\t\t\t PRESS ENTER ";
}
return 0;
}

//**********************************************************
// THIS FUNCTION TRUE WHEN THE STRING PASSED AS ARGUMENT IS
// IS NUMBER
//**********************************************************
int string_is_number(char* s)
{
int size = strlen(s);
for(int i = 0; i < size; i++)
if (!(s[i] >= '0' && s[i] <= '9'))
return 0;
return 1;
}
class candidate_record
{
public:
int candidate_namecode ;
char candidate_name[50] ;
char partyname[50];
char partysign[50] ;
char revenue[100];
char age[100];
char area[50];
};
class voter_record
{
public:
int voter_namecode ;
char voter_name[50] ;
char age[10];
char gender[10] ;
};
class voter_status
{
public:
int voter_namecode;
int voting_status;
};
class candidate_status
{
public:
int candidate_namecode;
int numVotes;
};
//**********************************************************
//	CLASS NAME : vote
//	DETAILS : IT CONTROLLS OVER ALL THE FUNCTIONS
// RELATED TO VOTING ITEMS
//**********************************************************
class vote
{
public :
void add_candidate_name(void) ;
void delete_candidate_name(void) ;
void modify_candidate_name(void) ;
void list_of_candidate_names(void) ;
void voting(void) ;
void displayresults();
void add_voter_name(void) ;
void delete_voter_name(void) ;
void modify_voter_name(void) ;
void list_of_voters_names(void) ;
private :
int last_candidate_code(int &num_candidates) ;
void delete_candidate_record(int) ;
void modify_candidate_record(int) ;
void display_candidate_record(int) ;
int name_candidate_found(int) ;
int candidate_recordno(int, candidate_record&) ;
void candidate_sort(void) ;
int last_voter_code(int &num_voters) ;
void delete_voter_record(int) ;
void modify_voter_record(int) ;
void display_voter_record(int) ;
int name_voter_found(int) ;
int voter_recordno(int, voter_record &vr) ;
void voter_sort(void) ;
voter_status* init_voter_status(int &num);
candidate_status* init_candidate_status(int &num);
} ;
//**********************************************************
//	CLASS NAME : menu
//	DETAILS : IT CONTROLLS OVER ALL THE FUNCTIONS
//**********************************************************
class menu
{
public :
void main_menu(void) ;
private :
void edit_menu(void) ;
void edit_settings(void);
vote v;
} ;
//**********************************************************
// THIS FUNCTION CREATE MAIN MENU AND CALLS OTHER FUNCTIONS
//**********************************************************
void menu :: main_menu(void)
{
clrscr() ;
char ch ;
while (1)
{
clrscr();
textbackground(0);
textcolor(4);
gotoxy(27,2) ;
cout <<"  #################################" ;
gotoxy(27,4) ;
cout<<"           E L E C T I O N ";
gotoxy(27,6);
cout <<"    V O T I N G    S Y S T E M " ;
gotoxy(27,8) ;
cout <<"  #################################" ;
gotoxy(32,9) ;
cout <<"1: VOTE " ;
gotoxy(32,11) ;
cout <<"2: SEE MENU " ;
gotoxy(32,13) ;
cout <<"3: EDIT VOTING SETTINGS " ;
gotoxy(32,15);
cout <<"4: EDIT ADMIN SETTINGS";
gotoxy(32,17) ;
cout <<"5: DISPLAY RESULTS " ;
gotoxy(32,19);
cout <<"0: QUIT ";
gotoxy(32,22) ;
cout <<"Enter Choice : " ;
ch = getche() ;
if (ch == 27)
return ;
else
if (ch == '1')
{
checkpass();
vote v ;
v.voting() ;
}
else
if (ch == '2')
{
while(1)
{
char g;
vote v ;
clrscr();
gotoxy(28,10) ;
cout <<" * SEE MENU *" ;
gotoxy(28,12) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(28,14) ;
cout <<"1: * \CANDIDATE LIST \* " ;
gotoxy(28,16) ;
cout <<"2: * \VOTER LIST * " ;
gotoxy(28,18) ;
cout <<"0: * GO BACK " ;
gotoxy(28,22) ;
cout <<"Enter Choice: " ;
g=getche();
if(g == '1')
v.list_of_candidate_names() ;
else if(g == '2')
v.list_of_voters_names();
else if(g == '0')
break;
}
}
else
if (ch == '3')
{
checkpass();
edit_menu() ;
}
else
if (ch == '4')
{
checkpass();
edit_settings();
}
else
if (ch == '5')
{
vote v;
checkpass();
v.displayresults();
}
else
if (ch == '0')
break ;
}
}
//**********************************************************
// THIS FUNCTION CREATE EDIT MENU AND CALLS OTHER FUNCTIONS
//**********************************************************

void menu :: edit_menu(void)
{
clrscr();
char ch,choice;
cout<<" \EDIT \MENU \n\n";
cout<<" 1: \* EDIT CANDIDATE RECORD \*\n";
cout<<" 2: \* EDIT VOTER RECORD \*\n";
cout<<" 0: \* GO BACK \*\n";
cout<<" \ENTER \CHOICE: ";
choice = getche();
if (choice == '1')
{
while(1)
{
gotoxy(28,10) ;
cout <<" * EDIT CANDIDATE RECORD *" ;
gotoxy(28,12) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(28,14) ;
cout <<"1: * \ADD \CANDIDATE \* " ;
gotoxy(28,16) ;
cout <<"2: * \MODIFY \CANDIDATE \RECORD *" ;
gotoxy(28,18) ;
cout <<"3: * \DELETE \CANDIDATE \RECORD*" ;
gotoxy(28,20) ;
cout <<"0: * \GO BACK *" ;
gotoxy(28,22) ;
cout <<" ENTER CHOICE: " ;
ch = getche() ;
if (ch == '1')
{
vote v ;
v.add_candidate_name() ;
break ;
}
else if (ch == '2')
{
vote v ;
v.modify_candidate_name() ;
break ;
}
else if (ch == '3')
{
vote v ;
v.delete_candidate_name() ;
break ;
}
else
if (ch == '0')
break ;
}
}
if(choice=='2')
{
while (1)
{
gotoxy(28,10) ;
cout <<" * EDIT VOTER RECORD *" ;
gotoxy(28,12) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(28,14) ;
cout <<"1: * \ADD \VOTER \* " ;
gotoxy(28,16) ;
cout <<"2: * \MODIFY \VOTER \RECORD * " ;
gotoxy(28,18) ;
cout <<"3: * \DELETE \VOTER \RECORD * " ;
gotoxy(28,20) ;
cout <<"0: * GO BACK " ;
gotoxy(28,22) ;
cout <<"Enter Choice: " ;
ch = getche() ;
if (ch == '1')
{
vote v ;
v.add_voter_name() ;
break ;
}
else if (ch == '2')
{
vote v ;
v.modify_voter_name() ;
break ;
}
else if (ch == '3')
{
vote v ;
v.delete_voter_name() ;
break ;
}
else if (ch == '0')
break ;
}
}
}
//*********************************************************
// THIS FUNCTION  EDIT ADMIN SETTINGS
//*********************************************************
void menu::edit_settings(void)
{
while(1)
{
clrscr();
int q;
gotoxy(28,10) ;
cout <<" * EDIT ADMIN SETTINGS *" ;
gotoxy(28,12) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(28,14) ;
cout <<"1: * \CHANGE PASSWORD \* " ;
gotoxy(28,16) ;
cout <<"2: * \CHANGE PIN \* " ;
gotoxy(28,18) ;
cout <<"0: * \GO BACK \* ";
gotoxy(28,24) ;
cout <<"Enter Choice: " ;
q=getche();
if(q == '1')
{
createpass();
break;
}
else if(q == '2')
{
createpin();
break;
}
else
if(q == '0')
break;
}
}
//**********************************************************
// THIS FUNCTION RETURNS THE CODE OF THE LAST RECORD OF THE
// VOTER IN THE VOTER FILE (VOTER.DAT).
//**********************************************************

int vote :: last_voter_code(int &num_voters)
{
voter_record vr;
fstream file ;
num_voters = 0;
file.open("VOTER.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int t=0 ;
while (file.read((char *)&vr,sizeof(voter_record)))
{
t = vr.voter_namecode ;
num_voters++;
}
file.close() ;
return t ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE LIST OF THE NAMES OF VOTERS
//**********************************************************
void vote :: list_of_voters_names(void)
{
clrscr() ;
voter_record vr;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
file.seekg(0) ;
int row = 6 , found = 0 , pageno = 1 ;
gotoxy(30,2) ;
cout <<"LIST OF NAMES OF VOTERS" ;
gotoxy(29,3) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(3,4) ;
cout <<"NAME CODE       NAME              AGE          GENDER" ;
gotoxy(2,5) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
while (file.read((char *)&vr, sizeof(voter_record)))
{
delay(20) ;
found = 1 ;
gotoxy(5,row) ;
cout <<vr.voter_namecode ;
gotoxy(19,row) ;
cout	<<vr.voter_name ;
gotoxy(37,row) ;
cout	<<vr.age;
gotoxy(51,row) ;
cout	<<vr.gender; ;
if ( row == 22 )
{
row = 5 ;
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"=============" ;
pageno++ ;
gotoxy(1,25) ;
cout <<"Press any key to continue..." ;
getche() ;
clrscr() ;
gotoxy(3,4) ;
cout <<"NAME CODE       NAME              AGE          GENDER" ;
gotoxy(2,5) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
}
else
row++ ;
}
if ( !found )
{
gotoxy(5,10) ;
cout <<"\7Records not found " ;
}
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"=============" ;
gotoxy(1,20) ;
cout <<"Press any key to continue..." ;
getche() ;
file.close () ;
}

//**********************************************************
// THIS FUNCTION ADD RECORDS IN THE VOTER FILE (VOTER.DAT)
//**********************************************************
void vote :: add_voter_name(void)
{
voter_record vr;
int vcode, valid ;
char ch;
int num_voters;
vcode = last_voter_code(num_voters) ;
vcode++ ;
do
{
clrscr() ;
gotoxy(71,2) ;
cout <<"<0>=Exit" ;
gotoxy(23,3) ;
cout <<" ADD NAME TO THE VOTER LIST" ;
gotoxy(23,4) ;
cout <<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(5,6) ;
cout <<"Name Code : " <<vcode ;
gotoxy(5,8) ;
cout <<"Name : " ;
gotoxy(5,10) ;
cout <<"Age : " ;
gotoxy(5,12) ;
cout <<"Gender : " ;
do
{
valid = 1 ;
gotoxy(1,8) ;
 clreol() ;
gotoxy(1,24) ;
 clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME OF THE VOTER TO ADD IN THE LIST" ;
gotoxy(5,8) ;
cout <<"Name : " ;
gets(vr.voter_name) ;
strupr(vr.voter_name) ;
if (vr.voter_name[0] == '0')
return ;
if ((strlen(vr.voter_name) < 1) || (strlen(vr.voter_name) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A...Z" ;
getch() ;
}
} while (!valid) ;
do
{
valid = 1 ;
gotoxy(1,10) ;
 clreol() ;
gotoxy(1,24) ;
 clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(3,25) ;
cout <<"ENTER AGE OF VOTER TO ADD IN THE LIST" ;
gotoxy(5,10) ;
cout <<"Age : " ;
gets(vr.age) ;
strupr(vr.age);
if (vr.age[0] == '0')
return ;
if ((strlen(vr.age) < 1) || (strlen(vr.age) > 3 ) || (!string_is_number(vr.age)))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 18...100" ;
getch() ;
}
if (atoi(vr.age) < 18)
{
valid = 0;
gotoxy(3,24);
cout <<"\7Voter's age is less than 18";
getch();
}
if(atoi(vr.age)>100)
{
valid=0;
gotoxy(3,24);
cout<<"\7Voter's age is invalid";
getch();
}
} while (!valid) ;
do
{
valid = 1 ;
gotoxy(1,12) ;
 clreol() ;
gotoxy(1,24) ;
clreol() ;
gotoxy(1,25) ;
clreol() ;
gotoxy(3,25) ;
cout <<"ENTER GENDER OF VOTER TO ADD IN THE MENU" ;
gotoxy(5,12) ;
cout <<"Gender : " ;
gets(vr.gender) ;
strupr(vr.gender);
if (vr.gender[0] == '0')
return ;
if ((strlen(vr.gender) < 1) ||(strlen(vr.gender) > 1)
|| (strcmp(vr.gender,"M") && strcmp(vr.gender,"F")))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = M/F" ;
getch() ;
}
} while (!valid) ;
do
{
gotoxy(1,15) ;
 clreol() ;
gotoxy(1,24) ;
 clreol() ;
gotoxy(1,25) ;
clreol() ;
gotoxy(5,15) ;
cout <<"Do you want to save this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'Y')
{
vr.voter_namecode = vcode ;
fstream file ;
file.open("VOTER.DAT", ios::out | ios::app |ios::binary) ;
file.write((char *)&vr, sizeof(voter_record)) ;
file.close() ;
vcode++ ;
}
do
{
gotoxy(1,17) ;
clreol() ;
gotoxy(1,24) ;
 clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(5,17) ;
cout <<"Do you want to add more records (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
} while (ch == 'Y') ;
}
//**********************************************************
// THIS FUNCTION DISPLAY THE RECORD OF THE GIVEN CODE FROM
// THE VOTER FILE (VOTER.DAT)
//**********************************************************

void vote :: display_voter_record(int vcode)
{
voter_record vr;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
while (file.read((char *)&vr, sizeof(voter_record)))
{
if (vr.voter_namecode == vcode)
{
gotoxy(5,3) ;
cout <<"Name Code : "<<vr.voter_namecode ;
gotoxy(5,4) ;
cout <<"Name : "<<vr.voter_name ;
gotoxy(5,5) ;
cout <<"Age : "<<vr.age ;
gotoxy(5,6) ;
cout <<"Gender : "<<vr.gender ;
break ;
}
}
file.close() ;
}
//**********************************************************
// THIS FUNCTION RETURN THE VALUE 1 IF THE RECORD IS FOUND
// FOR THE GIVEN CODE IN THE VOTER FILE (VOTER.DAT)
//**********************************************************

int vote :: name_voter_found(int tcode)
{
voter_record vr;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int found=0 ;
while (file.read((char *)&vr, sizeof(voter_record)))
{
if (vr.voter_namecode == tcode)
{
found++ ;
break ;
}
}
file.close() ;
return found ;
}
//**********************************************************
// THIS FUNCTION RETURN THE RECORD NO. OF THE GIVEN CODE IN
// THE VOTER FILE (VOTER.DAT)
//**********************************************************
int vote :: voter_recordno(int tcode, voter_record &vr)
{
voter_record temp;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int found=0 ;
while (file.read((char *)&temp, sizeof(voter_record)))
{
found++ ;
if (temp.voter_namecode == tcode)
{
vr = temp;
break ;
}
}
file.close() ;
return found ;
}
//**********************************************************
// THIS FUNCTION DELETES THE RECORD FOR THE GIVEN CODE FROM
// THE VOTER FILE (VOTER.DAT)
//**********************************************************

void vote :: delete_voter_record(int tcode)
{
voter_record vr;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
fstream temp ;
temp.open("temp.dat", ios::out|ios::binary) ;
file.seekg(0,ios::beg) ;
while ( !file.eof() )
{
file.read((char *)&vr, sizeof(voter_record)) ;
if ( file.eof() )
break ;
if ( vr.voter_namecode != tcode )
temp.write((char *)&vr, sizeof(voter_record)) ;
}
file.close() ;
temp.close() ;
file.open("VOTER.DAT", ios::out|ios::binary) ;
temp.open("temp.dat", ios::in|ios::binary) ;
temp.seekg(0,ios::beg) ;
while ( !temp.eof() )
{
temp.read((char *)&vr, sizeof(voter_record)) ;
if ( temp.eof() )
break ;
file.write((char *)&vr, sizeof(voter_record)) ;
}
file.close() ;
temp.close() ;
}
//**********************************************************
// THIS FUNCTION GIVES THE CODE NO. TO DELETE RECORD FROM
// THE VOTER FILE (VOTER.DAT)
//**********************************************************
void vote :: delete_voter_name(void)
{
clrscr() ;
char t_code[5], ch ;
int tcode=0;
gotoxy(3,25) ;
cout <<"Press <ENTER> to see the list" ;
gotoxy(5,3) ;
cout <<"Enter Name Code of the item to be deleted : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
{
list_of_voters_names() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to Exit" ;
gotoxy(5,24) ;
cout <<"Enter Name Code of the item to be deleted : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
return ;
}
clrscr() ;
if (!name_voter_found(tcode))
{
gotoxy(5,5) ;
cout <<"\7Record not found" ;
getch() ;
return ;
}
display_voter_record(tcode) ;
do
{
gotoxy(1,8) ; clreol() ;
gotoxy(5,8) ;
cout <<"Do you want to delete this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
delete_voter_record(tcode) ;
gotoxy(5,15) ;
cout <<"\7Record Deleted" ;
getch() ;
}
//**********************************************************
// THIS FUNCTION MODIFY THE RECORD FOR THE GIVEN CODE FROM
// THE VOTER FILE (VOTER.DAT)
//**********************************************************

void vote :: modify_voter_record(int tcode)
{
voter_record vr;
int recno ;
recno = voter_recordno(tcode,vr) ;
if (recno == 0)
return;
int valid, t_code ;
char ch,t_namecode[5] ;
gotoxy(71,2) ;
cout <<"<0>=Exit" ;
gotoxy(5,12) ;
cout <<"Name Code : " ;
gotoxy(5,14) ;
cout <<"Name : " ;
gotoxy(5,16) ;
cout <<"Age : " ;
gotoxy(5,18) ;
cout <<"Gender: " ;
gotoxy(5,8);
clreol();
do
{
gotoxy(20,12) ; clreol() ;
cout <<"Do you want to change this (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,12) ;
 clreol() ;
gotoxy(1,24) ;
 clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME CODE TO ADD IN THE MENU" ;
gotoxy(5,12) ;
cout <<"Name Code : " ;
gets(t_namecode) ;
vr.voter_namecode = atoi(t_namecode) ;
if (vr.voter_namecode == 0)
return ;
if (name_voter_found(vr.voter_namecode) && vr.voter_namecode != tcode)
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 CODE ALREADY GIVEN" ;
getch() ;
}
}
do
{
gotoxy(20,14) ; clreol() ;
cout <<"Do you want to change this (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,14) ;
 clreol() ;
gotoxy(1,24) ; 
clreol() ;
gotoxy(1,25) ; 
clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME TO ADD IN THE MENU" ;
gotoxy(5,14) ;
cout <<" Name : " ;
gets(vr.voter_name) ;
strupr(vr.voter_name) ;
if (vr.voter_name[0] == '0')
return ;
if ((strlen(vr.voter_name) < 1) || (strlen(vr.voter_name) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A...Z" ;
getch() ;
}
}
do
{
gotoxy(20,16) ; clreol() ;
cout <<"Do you want to change this (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,16) ; 
clreol() ;
gotoxy(1,24) ; 
clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(3,25) ;
cout <<"ENTER AGE OF VOTER TO ADD IN THE MENU" ;
gotoxy(5,16) ;
cout <<"Age : " ;
gets(vr.age) ;
strupr(vr.age);
if (vr.age[0] == '0')
return ;
if ((strlen(vr.age) < 1) || (strlen(vr.age) > 10) || !string_is_number(vr.age))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 18...100" ;
getch() ;
}
if (atoi(vr.age)<18)
{
valid = 0;
gotoxy(3,24);
cout<<"\7Voter's age is less than 18";
getch();
}
if (atoi(vr.age)>100)
{
valid = 0;
gotoxy(3,24);
cout<<"\7Voter's age is invalid";
getch();
}
}
do
{
gotoxy(20,18) ; clreol() ;
cout <<"Do you want to change this (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,18) ;
 clreol() ;
gotoxy(1,24) ; 
clreol() ;
gotoxy(1,25) ;
 clreol() ;
gotoxy(3,25) ;
cout <<"ENTER GENDER OF VOTER TO ADD IN THE MENU" ;
gotoxy(5,18) ;
cout <<"Gender : " ;
gets(vr.gender) ;
strupr(vr.gender);
if (vr.gender[0] == '0')
return ;
if ((strlen(vr.gender) < 1) || (strlen(vr.gender) > 10)||(strcmp(vr.gender,"M")&&strcmp(vr.gender,"F")))
{

valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = M/F " ;
getch() ;
}
}
do
{
gotoxy(1,21) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,21) ;
cout <<"Do you want to save this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
getch() ;
fstream file ;
file.open("VOTER.DAT", ios::out | ios::ate|ios::binary) ;
int location ;
location = (recno-1) * sizeof(vr) ;
cout << " Location is " << location;
file.seekp(location) ;
file.write((char *) &vr, sizeof(voter_record)) ;
file.close() ;
voter_sort() ;
clrscr() ;
gotoxy(5,15) ;
cout <<"\7Record Modified" ;
getch() ;
}
//********************************************************** 
// THIS FUNCTION GIVES THE CODE NO. TO MODIFY RECORD FROM 
// THE VOTER FILE (VOTER.DAT) 
//********************************************************** 
void vote :: modify_voter_name(void)
{
clrscr() ;
char t_code[5], ch ;
int tcode ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to see the list" ;
gotoxy(5,3) ;
cout <<"Enter Name Code of the item to be Modify : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
{
list_of_voters_names() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to Exit" ;
gotoxy(5,24) ;
cout <<"Enter Name Code of the item to be modify : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
return ;
}
clrscr() ;
if (!name_voter_found(tcode))
{
gotoxy(5,5) ;
cout <<"\7Record not found" ;
getch() ;
return ;
}
display_voter_record(tcode) ;
do
{
gotoxy(5,8) ;
cout <<"Do you want to Modify this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
modify_voter_record(tcode) ;
}
//********************************************************** 
// THIS FUNCTION SORT THE RECORD IN THE VOTER FILE (VOTER.DAT) 
// ACCORDING TO THE CODE NOS. 
//********************************************************** 

void vote :: voter_sort(void)
{
int i=0,j ;
voter_record *arr, temp ;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
while (file.read((char *) &temp, sizeof(voter_record)))
i++ ;
file.clear();
arr = (voter_record*) new voter_record[i];
int size ;
size = i ;
file.seekg(0,ios::beg) ;
for( i = 0; i < size; i++)
file.read((char*)&(arr[i]),sizeof(voter_record));
file.close() ;
for (i=1; i<size; i++)
{
for (j=0; j<size-i; j++)
{
if (arr[j].voter_namecode > arr[j+1].voter_namecode)
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
file.open("VOTER.DAT", ios::out|ios::binary) ;
for (i=0; i<size; i++)
file.write((char *) &arr[i], sizeof(voter_record));
delete[] arr;
file.close() ;
}
//********************************************************** 
// THIS FUNCTION SORT THE RECORD IN THE CANDIDATE FILE (CANDIDATE.DAT) 
// ACCORDING TO THE CODE NOS. 
//********************************************************** 
void vote :: candidate_sort(void)
{
int i=0,j ;
candidate_record *arr, temp ;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
while (file.read((char *) &temp, sizeof(candidate_record)))
i++ ;
file.clear();
arr = (candidate_record*) new candidate_record[i];
int size ;
size = i ;
file.seekg(0,ios::beg) ;
for( i = 0; i < size; i++)
file.read((char*)&arr[i],sizeof(candidate_record));
file.close() ;
for (i=1; i<size; i++)
{
for (j=0; j<size-i; j++)
{
if (arr[j].candidate_namecode > arr[j+1].candidate_namecode)
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
file.open("CANDIDATE.DAT", ios::out|ios::binary) ;
for (i=0; i<size; i++)
file.write((char *) &arr[i], sizeof(candidate_record));
delete[] arr;
file.close() ;
}
//********************************************************** 
// THIS FUNCTION GIVES THE CODE NO. TO MODIFY RECORD FROM 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: modify_candidate_name(void)
{
clrscr() ;
char t_code[5], ch ;
int tcode ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to see the list" ;
gotoxy(5,3) ;
cout <<"Enter Name Code of the item to be Modify : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
{
list_of_candidate_names() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to Exit" ;
gotoxy(5,24) ;
cout <<"Enter Name Code of the item to be modify : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
return ;
}
clrscr() ;
if (!name_candidate_found(tcode))
{
gotoxy(5,5) ;
cout <<"\7Record not found" ;
getch() ;
return ;
}
display_candidate_record(tcode) ;
do
{
gotoxy(5,12) ;
cout <<"Do you want to Modify this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
modify_candidate_record(tcode) ;
}
//********************************************************** 
// THIS FUNCTION MODIFY THE RECORD FOR THE GIVEN CODE FROM 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: modify_candidate_record(int tcode)
{
candidate_record cr;
int recno ;
char revenue;
recno = candidate_recordno(tcode,cr) ;
int valid, t_code ;
char ch,t_namecode[5] ;
gotoxy(71,2) ;
cout <<"<0>=Exit" ;
gotoxy(5,12) ; clreol();
cout <<"Name Code : " ;
gotoxy(5,13) ;
cout <<"Name : " ;
gotoxy(5,14) ;
cout <<"Party Name : " ;
gotoxy(5,15) ;
cout <<"Party Sign: " ;
gotoxy(5,16);
cout<<"Revenue :";
gotoxy(5,17);
cout<<"Age :";
gotoxy(5,18);
cout<<"Area :";
do
{
gotoxy(20,12) ; clreol() ;
cout <<"Do you want to change (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,12) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME CODE TO ADD IN THE MENU" ;
gotoxy(5,12) ;
cout <<"Name Code : " ;
gets(t_namecode) ;
cr.candidate_namecode = atoi(t_namecode) ;
if (cr.candidate_namecode == 0)
return ;
if (name_candidate_found(cr.candidate_namecode) && cr.candidate_namecode != tcode)
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 CODE ALREADY GIVEN" ;
getch() ;
}
}
do
{
gotoxy(20,13) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,13) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME TO ADD IN THE MENU" ;
gotoxy(5,13) ;
cout <<"Name : " ;
gets(cr.candidate_name) ;
strupr(cr.candidate_name) ;
if (cr.candidate_name[0] == '0')
return ;
if ((strlen(cr.candidate_name) < 1) || (strlen(cr.candidate_name) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A...z" ;
getch() ;
}
}
do
{
gotoxy(20,14) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,14) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"ENTER PARTY NAME TO ADD IN THE MENU" ;
gotoxy(5,14) ;
cout <<"Party Name : " ;
gets(cr.partyname) ;
strupr(cr.partyname);
if (cr.partyname[0] == '0')
return ;
if ((strlen(cr.partyname) < 1) || (strlen(cr.partyname) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A...Z" ;
getch() ;
}
}
do
{
gotoxy(20,15) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1 ;
gotoxy(1,15) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"ENTER PARTY SIGN TO ADD IN THE MENU" ;
gotoxy(5,15) ;
cout <<"Party Sign : " ;
gets(cr.partysign) ;
strupr(cr.partysign);
if (cr.partysign[0] == '0')
return ;
if ((strlen(cr.partysign) < 1) || (strlen(cr.partysign) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A...Z" ;
getch() ;
}
}
do
{
gotoxy(20,16) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid=1;
gotoxy(1,16) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER REVENUE OF THE CANDIDATE" ;
gotoxy(5,16) ;
cout <<"Revenue : " ;
gets(cr.revenue) ;
strupr(cr.revenue);
if (cr.revenue[0] == '0')
return ;
if ((strlen(cr.revenue) < 1) ||(strlen(cr.revenue) > 50)||(!string_is_number(cr.revenue)))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 1.....9" ;
getch() ;
}
}
do
{
gotoxy(20,17) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1;
gotoxy(1,17) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER AGE OF THE CANDIDATE" ;
gotoxy(5,17) ;
cout <<"Age : " ;
gets(cr.age) ;
strupr(cr.age);
if (cr.age[0] == '0')
return ;
if ((strlen(cr.age) < 1) ||(strlen(cr.age) > 50)||(!string_is_number(cr.age)))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 25.....100" ;
getch() ;
}
if(atoi(cr.age)<25)
{
valid=0;
gotoxy(3,24);
cout<<"\7Candidate's age is less than 25";
getch();
}
if(atoi(cr.age)>100)
{
valid=0;
gotoxy(3,24);
cout<<"\7Candidate's age is invalid";
getch();
}

}
do
{
gotoxy(20,18) ; clreol() ;
cout <<"Do you want to change (y/n) " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
valid = 0 ;
while (ch == 'Y' && !valid)
{
valid = 1;
gotoxy(1,18) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER AREA OF THE CANDIDATE" ;
gotoxy(5,18) ;
cout <<"Area : " ;
gets(cr.area) ;
strupr(cr.area);
if (cr.area[0] == '0')
return ;
if ((strlen(cr.area) < 1) ||(strlen(cr.area) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A.....Z" ;
getch() ;
}
}
do
{
gotoxy(1,21) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,21) ;
cout <<"Do you want to save this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
if (ch == '0')
return ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
getch() ;
fstream file ;
file.open("CANDIDATE.DAT", ios::out | ios::ate|ios::binary) ;
int location ;
location = (recno-1) * sizeof(cr) ;
file.seekp(location) ;
file.write((char *) &cr, sizeof(candidate_record)) ;
file.close() ;
candidate_sort() ;
clrscr() ;
gotoxy(5,15) ;
cout <<"\7Record Modified" ;
getch() ;
}
//********************************************************** 
// THIS FUNCTION RETURN THE VALUE 1 IF THE RECORD IS FOUND 
// FOR THE GIVEN CODE IN THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
int vote :: name_candidate_found(int tcode)
{
candidate_record cr;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int found=0 ;
while (file.read((char *)&cr, sizeof(candidate_record)))
{
if (cr.candidate_namecode == tcode)
{
found++ ;
break ;
}
}
file.close() ;
return found ;
}
//********************************************************** 
// THIS FUNCTION DISPLAY THE RECORD OF THE GIVEN CODE FROM 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: display_candidate_record(int tcode)
{
candidate_record cr;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
while (file.read((char *)&cr, sizeof(candidate_record)))
{
if (cr.candidate_namecode == tcode)
{
gotoxy(5,3) ;
cout <<"Name Code : "<<cr.candidate_namecode ;
gotoxy(5,4) ;
cout <<"Name : "<<cr.candidate_name ;
gotoxy(5,5) ;
cout <<"Party Name : "<<cr.partyname ;
gotoxy(5,6) ;
cout <<"Party Sign : "<<cr.partysign ;
gotoxy(5,7) ;
cout <<"Revenue : "<<cr.revenue ;
gotoxy(5,8) ;
cout <<"Age : "<<cr.age ;
gotoxy(5,9) ;
cout <<"Area : "<<cr.area ;
break ;
}
}
file.close() ;
}
//********************************************************** 
// THIS FUNCTION ADD RECORDS IN THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: add_candidate_name(void)
{
candidate_record cr;
int tcode, valid ;
char ch;
int num_candidates;
tcode = last_candidate_code(num_candidates) ;
tcode++ ;
do
{
clrscr() ;
gotoxy(71,2) ;
cout <<"<0>=Exit" ;
gotoxy(27,3) ;
cout <<" ADD NAME TO THE CANDIDATE LIST" ;
gotoxy(26,4) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(5,6) ;
cout <<"Name Code : " <<tcode ;
gotoxy(5,8) ;
cout <<"Name : " ;
gotoxy(5,10) ;
cout <<"Party Name : " ;
gotoxy(5,12) ;
cout <<"Party Sign : " ;
gotoxy(5,14);
cout<<"Revenue :";
gotoxy(5,16);
cout<<"Age :";
gotoxy(5,18);
cout<<"Area :";
do
{
valid = 1 ;
gotoxy(1,8) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"ENTER NAME TO ADD IN THE CANDIDATE LIST" ;
gotoxy(5,8) ;
cout <<"Name : " ;
gets(cr.candidate_name) ;
strupr(cr.candidate_name) ;
if (cr.candidate_name[0] == '0')
return ;
if ((strlen(cr.candidate_name) < 1) || (strlen(cr.candidate_name) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A.....Z" ;
getch() ;
}
}while (!valid) ;
do
{
valid = 1 ;
gotoxy(1,10) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER PARTY NAME TO ADD IN THE LIST" ;
gotoxy(5,10) ;
cout <<"Party Name : " ;
gets(cr.partyname) ;
strupr(cr.partyname);
if (cr.partyname[0] == '0')
return ;
if ((strlen(cr.partyname) < 1) || (strlen(cr.partyname) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A.....Z" ;
getch() ;
}
} while (!valid) ;
do
{
valid = 1 ;
gotoxy(1,12) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER PARTY SIGN TO ADD IN THE MENU" ;
gotoxy(5,12) ;
cout <<"Party Sign : " ;
gets(cr.partysign) ;
strupr(cr.partysign);
if (cr.partysign[0] == '0')
return ;
if ((strlen(cr.partysign) < 1) ||(strlen(cr.partysign) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A.....Z" ;
getch() ;
}
} while (!valid) ;
do
{
valid = 1;

gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER REVENUE OF THE CANDIDATE" ;
gotoxy(5,14) ;
cout <<"Revenue : " ;
gets(cr.revenue) ;
strupr(cr.revenue);
if (cr.revenue[0] == '0')
return ;
if ((strlen(cr.revenue) < 1) ||(strlen(cr.revenue) > 50)||(!string_is_number(cr.revenue)))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 0.....9" ;
gotoxy(14,14); clreol();
getch() ;
}
} while (!valid) ;
do
{
valid = 1;

gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER AGE OF THE CANDIDATE" ;
gotoxy(5,16) ;
cout <<"Age : " ;
gets(cr.age) ;
strupr(cr.age);
if (cr.age[0] == '0')
return ;
if ((strlen(cr.age) < 1) ||(strlen(cr.age) > 4)||(!string_is_number(cr.age)))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = 25.....100" ;
gotoxy(10,16); clreol();
getch() ;
}
if(atoi(cr.age)<25)
{
valid=0;
gotoxy(3,24);
cout<<"\7Candidate's age is less than 25";
gotoxy(10,16); clreol();
getch();
}
if(atoi(cr.age)>100)
{
valid=0;
gotoxy(3,24);
cout<<"\7Candidate's age is invalid";
gotoxy(10,16); clreol();
getch();
}
} while (!valid) ;
do
{
valid = 1;
gotoxy(1,20) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,25) ;
cout <<"ENTER AREA OF THE CANDIDATE" ;
gotoxy(5,18) ;
cout <<"Area : " ;
gets(cr.area) ;
strupr(cr.area);
if (cr.area[0] == '0')
return ;
if ((strlen(cr.area) < 1) ||(strlen(cr.area) > 50))
{
valid = 0 ;
gotoxy(3,24) ;
cout <<"\7 Range = A.....Z" ;
getch() ;
}
} while (!valid) ;
do
{
gotoxy(1,15) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,22) ;
cout <<"Do you want to save this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'Y')
{
cr.candidate_namecode = tcode ;
fstream file ;
file.open("CANDIDATE.DAT", ios::out | ios::app | ios::binary) ;
file.write((char *)&cr, sizeof(candidate_record)) ;
file.close() ;
tcode++ ;
}
do
{
gotoxy(1,17) ; clreol() ;
gotoxy(1,24) ; clreol() ;
gotoxy(1,25) ; clreol() ;
gotoxy(5,24) ;
cout <<"Do you want to add more records (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
} while (ch == 'Y') ;
}
//********************************************************** 
// THIS FUNCTION DISPLAY THE LIST OF THE NAMES OF CANDIDATES 
//********************************************************** 

void vote :: list_of_candidate_names(void)
{
clrscr() ;
candidate_record cr;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
file.seekg(0) ;
int row = 6 , found = 0 , pageno = 1 ;
gotoxy(30,2) ;
cout <<"LIST OF NAMES OF CANDIDATES" ;
gotoxy(29,3) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
gotoxy(3,4) ;
cout <<"NAME CODE   NAME          PARTY NAME     PARTY SIGN    REVENUE    AGE   AREA";
gotoxy(2,5) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
while (file.read((char *)&cr, sizeof(candidate_record)))
{
delay(20) ;
found = 1 ;
gotoxy(5,row) ;
cout <<cr.candidate_namecode ;
gotoxy(14,row) ;
cout	<<cr.candidate_name ;
gotoxy(31,row) ;
cout	<<cr.partyname ;
gotoxy(45,row) ;
cout	<<cr.partysign ;
gotoxy(58,row) ;
cout <<cr.revenue ;
gotoxy(69,row) ;
cout <<cr.age ;
gotoxy(75,row) ;
cout <<cr.area ;
if ( row == 22 )
{
row = 5 ;
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"============" ;
pageno++ ;
gotoxy(1,25) ;
cout <<"Press any key to continue..." ;
getche() ;
clrscr() ;
gotoxy(3,4) ;
cout <<"NAME CODE   NAME          PARTY NAME     PARTY SIGN    REVENUE    AGE   AREA";
gotoxy(2,5) ;
cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
}
else
row++ ;
}
if ( !found )
{
gotoxy(5,10) ;
cout <<"\7Records not found " ;
}
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"=============" ;
gotoxy(1,20) ;
cout <<"Press any key to continue..." ;
getche() ;
file.close () ;
}
//********************************************************** 
// THIS FUNCTION RETURNS THE CODE OF THE LAST RECORD IN THE 
// CANDIDATE FILE (CANDIDATE.DAT). 
//********************************************************** 
int vote :: last_candidate_code(int &num_candidates)
{
candidate_record cr;
fstream file ;
num_candidates = 0;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int t=0 ;
while (file.read((char *) &cr, sizeof(candidate_record)))
{
t = cr.candidate_namecode ;
num_candidates++;
}
file.close() ;
return t ;
}
//********************************************************** 
// THIS FUNCTION RETURN THE RECORD NO. OF THE GIVEN CODE IN 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 

int vote :: candidate_recordno(int tcode,candidate_record &cr)
{
candidate_record temp;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
file.seekg(0,ios::beg) ;
int found=0 ;
while (file.read((char *) &temp, sizeof(candidate_record)))
{
found++ ;
if (temp.candidate_namecode == tcode)
{
cr = temp;
break ;
}
}
file.close() ;
return found ;
}
//********************************************************** 
// THIS FUNCTION DELETES THE RECORD FOR THE GIVEN CODE FROM 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: delete_candidate_record(int tcode)
{
candidate_record cr;
fstream file ;
file.open("CANDIDATE.DAT", ios::in|ios::binary) ;
fstream temp ;
temp.open("temp.dat", ios::out|ios::binary) ;
file.seekg(0,ios::beg) ;
while ( !file.eof() )
{
file.read((char *)&cr, sizeof(candidate_record)) ;
if ( file.eof() )
break ;
if ( cr.candidate_namecode != tcode )
temp.write((char *)&cr, sizeof(candidate_record)) ;
}
file.close() ;
temp.close() ;
file.open("CANDIDATE.DAT", ios::out|ios::binary) ;
temp.open("temp.dat", ios::in|ios::binary) ;
temp.seekg(0,ios::beg) ;
while ( !temp.eof() )
{
temp.read((char *)&cr, sizeof(candidate_record)) ;
if ( temp.eof() )
break ;
file.write((char *) &cr, sizeof(candidate_record)) ;
}
file.close() ;
temp.close() ;
}
//********************************************************** 
// THIS FUNCTION GIVES THE CODE NO. TO DELETE RECORD FROM 
// THE CANDIDATE FILE (CANDIDATE.DAT) 
//********************************************************** 
void vote :: delete_candidate_name(void)
{
clrscr() ;
char t_code[5], ch ;
int tcode ;
gotoxy(3,25) ;
cout <<"Press <ENTER> to see the list" ;
gotoxy(5,3) ;
cout <<"Enter Name Code of the item to be deleted : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
{
list_of_candidate_names() ;
gotoxy(1,25) ; clreol() ;
gotoxy(3,25) ;
cout <<"Press 0 to EXIT" ;
gotoxy(5,24) ;
cout <<"Enter Name Code of the item to be deleted : " ;
gets(t_code) ;
tcode = atoi(t_code) ;
if (tcode == 0)
return ;
}
clrscr() ;
if (!name_candidate_found(tcode))
{
gotoxy(5,5) ;
cout <<"\7Record not found" ;
getch() ;
return ;
}
display_candidate_record(tcode) ;
do
{
gotoxy(5,12) ;
cout <<"Do you want to delete this record (y/n) : " ;
ch = getche() ;
ch = toupper(ch) ;
} while (ch != 'N' && ch != 'Y') ;
if (ch == 'N')
return ;
delete_candidate_record(tcode) ;
gotoxy(5,15) ;
cout <<"\7Record Deleted" ;
getch() ;
}
voter_status* vote::init_voter_status(int &num)
{
voter_status *vs = NULL;
num = 0;
last_voter_code(num);
if (num != 0)
{
vs = new voter_status[num];
voter_record vr;
fstream file ;
file.open("VOTER.DAT", ios::in|ios::binary) ;
for(int i = 0; i < num; i++)
{
file.read((char *)&vr, sizeof(voter_record));
vs[i].voter_namecode = vr.voter_namecode;
vs[i].voting_status = 0;
}
file.close();
}
return vs;
}
candidate_status* vote::init_candidate_status(int &num)
{
candidate_status *cs = NULL;;
num = 0;
last_candidate_code(num);
if (num != 0)
{
cs = new candidate_status[num];
candidate_record cr;
fstream file;
file.open("CANDIDATE.DAT",ios::in|ios::binary);
for(int i = 0; i < num; i++)
{
file.read((char *)&cr, sizeof(candidate_record));
cs[i].candidate_namecode = cr.candidate_namecode;
cs[i].numVotes = 0;
}
file.close();
}
return cs;
}
//*****************************************************************
//THIS FUNCTION IS FOR VOTING AND TO DISPLAY THE RESULTS
//*****************************************************************
void vote::voting()
{
clrscr() ;
fstream f;
f.open("RESULTS.DAT",ios::in|ios::out|ios::trunc|ios::binary);
char ch,name[50];
int n ,num_voters = 0, num_candidates = 0;
int vtr_rec;
voter_status* vs = init_voter_status(num_voters);
candidate_status* cs = init_candidate_status(num_candidates);
int valid=0;
if (num_voters == 0)
{
gotoxy(3,6);
cout << "There are NO VOTERS";
ch = getche();
delete[] vs;
delete[] cs;
return;
}
if (num_candidates == 0)
{
gotoxy(3,6);
cout << "There are NO CANDIDATES";
ch = getche();
delete[] vs;
delete[] cs;
return;
}
while(1)
{
clrscr();
gotoxy(30,2);
cout <<"VOTING HAS STARTED";
gotoxy(29,3);
cout <<"~~~~~~~~~~~~~~~~~~~~~~";
{
int i;
for(i = 0; i < num_voters; i++)
{
if (vs[i].voting_status == 0) break;
}
if (i == num_voters)
{
gotoxy(3,4);
cout<<"All VOTES have been casted";
getche();
break;
}
}
gotoxy(3,24) ;
clreol();
cout <<"To End the voting Enter <STOP>.\n";
gotoxy(3,25);
clreol();
cout <<"Once voting is stopped it cann't resume. You will have to start a fresh" ;
gotoxy(6,4);
clreol();
cout <<"Enter the voter code <To view listof voters press <ENTER>- ";
gets(name);
if (strcmp(name,"STOP") == 0)
{
//Terminate the Voting;
gotoxy(6,5);
clreol();
cout <<"Do you want to STOP the voting and start counting votes (y/n) - ";
ch = getche();
ch = toupper(ch);
while(!(ch == 'Y' || ch == 'N'))
{
gotoxy(70,5);
clreol();
ch = getche();
ch = toupper(ch);
}
if (ch == 'N')
{
gotoxy(6,5);
clreol();
continue;
}
else break;
}
n = string_is_number(name);
gotoxy(6,5);
clreol();
if (n == 0)
{
cout << "Incorrect voter code, enter only digits, try again ";
getche();
continue;
}

n = atoi(name);
if (n == 0)
{
list_of_voters_names();
continue;
}
for(vtr_rec = 0; vtr_rec < num_voters; vtr_rec++)
{
if (vs[vtr_rec].voter_namecode == n)
{
if (vs[vtr_rec].voting_status == 1)
{
cout << "Voter with voter code "<< n <<" has already voted";
}
getche();
break;
}
}
if ( vtr_rec == num_voters)
{
cout << "Voter code "<< n << " not found in Voter list";
getche();
continue;
}
if (vs[vtr_rec].voting_status == 1)
{
cout << "Voter code "<<n<< " has already voted, can't vote again";
getche();
continue;
}
while(1)
{
clrscr();
gotoxy(3,24) ;
clreol();

gotoxy(3,3);
cout <<"Voter with voter code " << vs[vtr_rec].voter_namecode<<" is voting";
gotoxy(3,4);
cout<<"Enter the candidate code <To view list of candidate press <ENTER>-" ;
char can_code[50];
gets(can_code);

int can = string_is_number(can_code);
gotoxy(3,6);
if (can == 0)
{
cout << "Incorrect candidate code, enter only digits, try again ";
getche();
continue;
}
can = atoi(can_code);
if (can == 0)
{
list_of_candidate_names();
getche();
continue;
}
int can_rec;
for(can_rec=0; can_rec<num_candidates; can_rec++)
{
if (cs[can_rec].candidate_namecode == can)
break;
}
if (can_rec == num_candidates)
{
cout <<"Candidate code "<<can<<" not found in Candidate List";
getche();
continue;
}
cs[can_rec].numVotes++;
vs[vtr_rec].voting_status = 1;
clrscr();
gotoxy(3,6);
voter_record vr;
voter_recordno(vs[vtr_rec].voter_namecode, vr) ;
cout<<"Voter " << vr.voter_name<< " has voted for Candidate ";
candidate_record cr;
candidate_recordno(cs[can_rec].candidate_namecode,cr);
cout << cr.candidate_name;
gotoxy(35,20);
cout<<"VOTE CASTED";
getch();
f.write((char*)&cs,sizeof(candidate_status));
clrscr();
checkpin();
getche();
valid=1;
break;
}
}
checkpass();
if (valid)
{
clrscr();
gotoxy(25,2);
cout<<"VOTING RESULTS";
int tie =0;
int winner=0;
int max = 0;
int i;
for(i = 0; i < num_candidates; i++)
{
if (cs[i].numVotes > max)
{
max = cs[i].numVotes;
}
else if (cs[i].numVotes == max && max > 0)
tie = 1;
}
gotoxy(22,4);
if (tie)
cout<<"VOTING HAS RESULTED IN TIE, WINNERS ARE";
else
cout <<"WINNER IS ";
gotoxy(21,6);
for(i = 0; i < num_candidates; i++)
{
if (cs[i].numVotes == max)
{
candidate_record cr;
candidate_recordno(cs[i].candidate_namecode,cr);
if (winner)
{
gotoxy(25,2);
cout<<"VOTING RESULTS";
gotoxy(20,4);
cout<<"VOTING HAS RESULTED IN TIE, WINNERS ARE\n";
}
cout<<"\n\t\t\t"<<cr.candidate_name<<endl;
gotoxy(1,10);
cout<<"THE SUMMARY FOLLOWS"<<endl;
delay(500);
gotoxy(1,12);
delay(500);
cout << "PARTY NAME -->"<<cr.partyname<<endl;
gotoxy(1,14);
delay(500);
cout << "PARTY SIGN -->"<<cr.partysign<<endl;
gotoxy(1,16);
delay(500);
cout << "REVENUE -->"<<cr.revenue<<endl;
gotoxy(1,18);
delay(500);
cout << "AGE -->"<<cr.age<<endl;
gotoxy(1,20);
delay(500);
cout << "AREA -->"<<cr.area;
gotoxy(1,22);
delay(500);
cout<<"Press <ENTER> to continue....";
getch();
clrscr();
winner++;
}
}
}
clrscr();
f.close();
vote v;
v.displayresults();
ch = getche();
}
//*****************************************
//  THIS FUNCTION IS TO DISPLAY RESULTS
//*****************************************
void vote::displayresults()
{
clrscr();
int i=0;
char pos;
int num_candidates = 0;
candidate_status* cs = init_candidate_status(num_candidates);
candidate_record cr;
fstream file;
fstream f;
f.open("RESULTS.DAT",ios::in|ios::out|ios::binary);
file.open("CANDIDATE.DAT",ios::in|ios::out|ios::binary);
file.seekg(0);
int pageno=1,row=8,found=0;
gotoxy(66,1);
cout<<"Page no. :"<<pageno;
gotoxy(66,2);
cout<<"============";
gotoxy(30,2);
cout<<"VOTING RESULTS";
gotoxy(2,4);
cout<<"***********************************************************************";
gotoxy(2,5);
cout<<"NAME CODE    NAME         PARTY NAME     PARTY SIGN     AREA      VOTES";
gotoxy(2,6);
cout<<"***********************************************************************";
while(f.read((char*)&cs,sizeof(candidate_status)))
{
while(file.read((char*)&cr,sizeof(candidate_record)))
{
delay(20);
found=1;
gotoxy(5,row) ;
cout <<cr.candidate_namecode ;
gotoxy(14,row) ;
cout	<<cr.candidate_name ;
gotoxy(31,row) ;
cout	<<cr.partyname ;
gotoxy(45,row) ;
cout	<<cr.partysign ;
gotoxy(58,row) ;
cout <<cr.area ;
pos='t';
while(pos=='t')
{
gotoxy(69,row);
cout<<cs[i].numVotes;
pos='f';
}

if ( row == 22 )
{
row = 5 ;
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"============" ;
pageno++ ;
gotoxy(1,25) ;
cout <<"Press any key to continue..." ;
getche() ;
clrscr() ;
gotoxy(2,4);
cout<<"***********************************************************************";
gotoxy(2,5);
cout<<"NAME CODE    NAME         PARTY NAME     PARTY SIGN     AREA      VOTES";
gotoxy(2,6);
cout<<"***********************************************************************";
}
else
{
row++ ;
i++;
}
}
}
if ( !found )
{
gotoxy(5,10) ;
cout <<"\7Records not found " ;
}
gotoxy(66,1) ;
cout <<"Page no. : " <<pageno ;
gotoxy(66,2) ;
cout <<"=============" ;
gotoxy(1,20) ;
cout <<"Press any key to continue..." ;
getche() ;
file.close();
f.close();
delete[] cs;
}

//***********************************************************
// THIS FUNCTION IS THE MAIN FUNCTION CALLING THE MAIN MENU
//***********************************************************
void main(void)
{
clrscr() ;
textcolor(4);
textbackground(0);
int j,k;
gotoxy(24,19);
cout<<"L O A D I N G  P R O J E C T  F I L E "<<endl;
gotoxy(28,22);
cout<<"___________";
j=28;
for(int i=0;i<101;i++)
{
gotoxy(41,22);
delay(50);
cout<<i<<"% completed"<<endl;
if(i%10==0)
{
gotoxy(j,22);
j++;
cout<<char(16);
}
}
cout<<"\n\n\t\t\t\tSUCCESSFULLY LOADED" <<endl;
delay(1000);
clrscr();
intro();
clrscr();
description();
createpass();
clrscr();
createpin();
clrscr();
checkpass();
clrscr();
menu m ;
m.main_menu() ;
}
