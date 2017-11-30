#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<math.h>
#include<ctype.h>
COORD coord = {0, 0};
HANDLE hout = GetStdHandle(STD_INPUT_HANDLE);

using namespace std;

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void drawx(int x, int y, int d)
{
    int i;
    long int m;
    for(i=0; i<d; ++i)
    {
        gotoxy(x+i, y);
        for(m=0; m<20000000; ++m);
        cout<<0;
    }
}

void drawx1(int x, int y, int d)
{
    int i;
    long int m;
    for(i=0; i<d; ++i)
    {
        gotoxy(x+i, y);

        cout<<0;
    }
}

void drawy(int x, int y, int d)
{
    int i;
    long int m;
    for(i=0; i<d; ++i)
    {
        gotoxy(x, y+i);
        for(m=0; m<20000000; ++m);
        cout<<0;
    }
}

void drawld(int x, int y, int d)
{
    int i;
    long int m;
    for(i=0; i<d; ++i)
    {
        gotoxy(x+i, y+i);
        for(m=0; m<20000000; ++m);
        cout<<0;
    }
}

void typout(char a[], int x, int y)
{
	 int i;
	 long int m;
	 gotoxy(x, y);
	 for(i=0; a[i]!='\0'; ++i)
	 {
		  cout<<a[i];
		  for(m=0; m<25000000; ++m);
	 }
 }

void drawrd(int x, int y, int d)
{
    int i;
    long int m;
    for(i=0; i<d; ++i)
    {
        gotoxy(x-i, y+i);
        for(m=0; m<20000000; ++m);
        cout<<0;
    }
}



int main()
{
    //Introduction.
    int i, j, k;
    int u, chh = 0;
    long int m;
    char inp[5], chkin;



   //Task 1
do
{


 cout<<"Would you like to skip the introduction (Enter 'Y' or 'N') :";
 cin>>chkin;
 if(chkin == 'Y' || chkin == 'y') break;

 system("cls");
for(j=0; j<=30000; ++j)
    {

        if(i>=41) i=0;
        k = (rand() % 80);
        gotoxy(k, i);
        cout<<1;
        i++;
        for(m=0; m<200000; ++m);

    }

    //Insert name with zeros.
    getch();
    system("cls");


 typout("Let us begin.", 30, 0);
 typout("You open your eyes and all you see is fire. The bodies of your copassengers lay convulsed on the ground...", 1, 3);
 typout("In a flash, it all comes back to you. You were on a plane on the way to Barbados Halfway through the flight, there was an engine malfunction...or so it seemed.", 1, 6);
 typout("You feel a sharp pain in your abdomen. You're met by the bittersweet taste of   your own blood. Bitter because you're losing yourself, but sweet because you    have  something to lose.", 1, 10);
 typout("You pull yourself to    your feet. One of an infinite thoughts might've come to your head.  But all that did was an intense 'instinct'. You knew  your only      objective now....was to make it out alive.", 1, 14);
 typout("All this begs a question. Who are you?\n\n", 25, 18);
 cout<<"1.Jack Sparrow "<<endl;
 cout<<"2.Robinson Crusoe"<<endl;
 cout<<"3.Yelena Jones "<<endl;
 L:
 cout<<"Select the Character 1/2/3 "<<endl;
 cin>>inp;

//Segment to prevent false entries.
 for(u = 0; inp[u]!='\0'; ++u)
     if(isdigit(inp[u]))
         chh++;

 if(chh == u)
  {
      j = atoi(inp);
      if(j>3 || j<1)
      {
          cout<<"Your choice seems to have died in the crash. Please enter again.\n";
          goto L;
      }
  }
 else
 {
     cout<<"Please enter a number between 1 and 3 to choose your character.\n";
     goto L;
 }
 system("cls");

 switch(j)
 {
  case 1:  typout("You are now Captain Jack Sparrow! ",1,3);
			  typout("You have one goal-Survival.A billion thoughts flash your mind. ",1,6);
			  typout("You think about your son's smile.That glow on his face.The last words of your   beloved wife run through your mind",1,10);
			  typout("Will the pressure get to you?Can You Make it? Its all on you now.",1,14);
			  typout("Good Luck Sailor.",1,15);


			  break;
	case 2:  typout("You are now Robinson Crusoe! ",1,3);
			  typout("The last time you were left alone on an island,it turned out pretty bad.The very thought of lonliness scares you. ",1,6);
			  typout("But no!You will fight your way back!You were born ready for adventures!",1,10);
			  typout("Will the pressure get to you?Can You Make it? Its all on you now. ",1,14);
				typout("Good Luck maaaaaan.",1,15);
			  break;
	 case 3: typout("You are now Yelena Jones! ",1,3);

			  typout("Left alone by your Family,betrayed by your husband,almost killed by your very   own father,",1,10);
			  typout( "There has not been a time when your existence hasnt  been doubted.  Its time you  showed them you can do it alone. ",13,11);
			  typout("Will the pressure get to you?Can You Make it? Its all on you now.",1,18);
			  typout("Good Luck.",1,19);
    }
}while(0);

  if(chkin != 'y' && chkin != 'Y')
      getch();



  char ansq[50]={"Door"};
  char ansp[50];
  char answ[50]={"Fireplace"};
  char ansi[50];
  char ans[50]={"Mirror"};
  char ansr[50];

T1:
    int ch, num = 0, tries = 0;
 do
 {
 c:
 system("cls");
 typout("TASK 1",20,1);
 gotoxy(20,3);
  cout<<"AUTHENTICATION PROTOCOL 09A\n";
  cout<<"Riddle Menu"<<endl;
  cout<<"Riddle 1"<<endl;
  cout<<"Riddle 2"<<endl;
  cout<<"Riddle 3 "<<endl;
  k:
  cout<<"Enter choice 1/2/3 :";
  cin>>inp;
  for(u = 0, chh = 0; inp[u]!='\0'; ++u)
     if(isdigit(inp[u]))
         chh++;

 if(chh == u)
  {
      ch = atoi(inp);
      if(ch>3 || ch<1)
      {
          cout<<"Please enter a number between 1 and 3 to choose a riddle\n";
          goto k;
      }
      tries++;
  }
 else
 {

     cout<<"Your choice seems inappropriate! Please choose again :\n";
	  goto k;
 }




  switch(ch)
  {
	case 1: system("cls");
				typout("All shining and silver, ",1,4);
				typout("With a beautiful face, ",1,5);
				typout("You look into me, ",1,6);
				typout("And find this place, ",1,7);
                R1:
				typout("Who am I? ",1,8);
				cin>>ansr;
				if(strcmpi(ansr,ans)==0)
				{
				typout("****************** ",1,9);

				typout("******************* ",1,11);
				typout("You got that right! ",1,10);
				num++;
				getch();
				 }
				else
			  {	typout("***************************** ",1,9);


				typout("***************************** ",1,11);
				typout("You got that wrong!Try again! ",1,10);
				getch();
				goto R1;
				}


				break;

	case 2:   	 system("cls");
				  typout("I try to send a letter , ",1,4);
				typout("But all i do is receive, ",1,5);
				typout("The port to all things inside, ",1,6);
				typout("I am wooden I believe, ",1,7);
                R2:
				typout("Who am I? ",1,8);
				cin>>ansp;
				if(strcmpi(ansq,ansp)==0)
				 {

				typout("****************** ",1,9);

				typout("******************* ",1,11);
				typout("You got that right! ",1,10);
				num++;
				getch();
				 }
				else
				{

				typout("***************************** ",1,9);

				typout("***************************** ",1,11);
				typout("You got that wrong!Try again! ",1,10);
				getch();
				goto R2;
				}

				  break;

	case 3:   	 system("cls");
				  typout("It'll be cold on board as the waves take us over, ",1,4);
				typout(" You'll wish to warm up, ",1,5);
				typout("yourselves with the burning clover ",1,6);
                R3:
				typout("Who am I? ",1,7);
				cin>>ansi;
				if(strcmpi(answ,ansi)==0)
				{
				typout("****************** ",1,9);

				typout("******************* ",1,11);
				typout("You got that right! ",1,10);
				num++;
				getch();
				}
				else
				{
				typout("***************************** ",1,9);

				typout("***************************** ",1,11);
				typout("You got that wrong!Try again! ",1,10);
				getch();
				goto R3;
				}

					 break;

		}

		if(num >= 2) break;
	  }	while(tries<=5);

	  if(tries>5)
      {
          system("cls");
	  gotoxy(10, 5);
	  cout<<"ACCESS DENIED.";
	  goto T1;
    }



        //Insert code about inside room here.




//Task2:
    int n, r;

    srand(time(0));
    r = 0;
    COORD pos;
    #define dist (pow((InputRecord.Event.MouseEvent.dwMousePosition.X - pos.X), 2) + pow((InputRecord.Event.MouseEvent.dwMousePosition.Y - pos.Y), 2))
    do
    {


    system("cls");
    cout<<"Would you like to skip the intro (Enter 'Y' or 'N') :";
    cin>>chkin;
    if(chkin == 'Y' || chkin == 'y') break;
    system("cls");

    typout("It's day two on the island. You wake up groggy eyed on some hour close to 8 and look around. For a minute, everything seems the same. You think of your schedule today, your to-do list, and what you had had to drink last night. But that     lasted only for a few seconds. It wasn't a dream after all. You see the puddle  of blood on the floor beside the canned beans you had discovered the night       before. You had bled to unconsciousness. You now had an ultimatum.", 0, 1);
    typout("You can make do with the food you've found here for around 3 days. Five if you  stretch it. But you realize you'll have to regain your strength and fend for    yourself soon.", 0, 10);
    typout("You get up and feel like there's an axe in your gut. You look around through    teary, bloody eyes and see the big 'plus' sign on a box. You've had first aid   training. That might've been just a box to anyone else. But to you, it serves as a ray of hope. Despite everything, you smile a little...or it could've been a  grimace...'I'm still alive', you whisper.", 0, 15);
    getch();
    for(i=0; i<=40; ++i)
        drawx1(0, i, 80);
    typout("It's been 4 days. You've gained some of your strength back, but you need more   food. You're presently outside and in a human's true form. A predator. While    searching for your victim, you encounter something bizzare. A field of landmines", 0, 1);
    typout("You remembered the documentary you had once seen about the Cold War and how landmines played a crucial role. That just might have saved your life. The only way of finding a landmiine is the heat it gives off. But, it's not easy to feel it  around flora. If it weren't for your heightened sense of touch, you might well  be dead.", 0, 5);
    typout("You have to get to the other side of this field. Disable the landmines.", 0, 11);
    getch();
    }while(0);

    for(i=0; i<=40; ++i)
        drawx1(0, i, 80);
    typout("INSTRUCTIONS:", 0, 1);
    typout("You need to use your senses to locate 3 landmines. ", 0, 3);
    typout("Use the mouse to move around the grid. Look at the prompts to gauge where the   landmine is. ", 0, 4);
    typout("When you're right over the landmine, 2 beeps will alert you. Click to disable it (Yeah, the documentary covered disabling landmines)", 0, 7);
    getch();

    for(i=0; i<=40; ++i)
        drawx1(0, i, 80);

    HANDLE hin = GetStdHandle(STD_INPUT_HANDLE);
    INPUT_RECORD InputRecord;
    DWORD Events;
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 25;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hout, &cci);
    SetConsoleMode(hin, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT);

    while(r<3)
    {

        pos.X = (rand() % 80);
        pos.Y = (rand() % 40);
        while(1)
    {
        ReadConsoleInput(hin, &InputRecord, 1, &Events);

        for(j=0; j<=500; ++j)
    {

        if(i>=41) i=0;
        int k = (rand() % 80);
        gotoxy(k, i);
        int d = (rand() % 2);
        cout<<d;
        i++;
        for(m=0; m<150000; ++m);
    }
    if(InputRecord.EventType == MOUSE_EVENT)
    {


        if(InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED && dist ==0)
            {
                gotoxy(10, 50);
                cout<<"You've disabled the landmine.";
                r++;
                break;
            }
            else if(dist == 0)
            {
                gotoxy(10, 50);
                cout<<"You're right on it.\a \a          ";
            }
            else if(dist < 25)
            {
                gotoxy(10, 50);
                cout<<"It's burning up here              ";
            }
            else if(dist < 100)
            {
                gotoxy(10, 50);
                cout<<"You're close.                     ";
            }
            else if(dist > 100 && dist < 900)
            {
                gotoxy(10, 50);
                cout<<"Kinda cold.                       ";
            }
            else if(dist > 900 && dist <2500)
            {
                gotoxy(10, 50);
                cout<<"Too darn cold.                    ";
            }
            else
            {
                gotoxy(10, 50);
                cout<<"It's freezing out here.            ";
            }

        }
    }
        gotoxy(10, 51);
        cout<<"X :"<<pos.X;
        gotoxy(10, 52);
        cout<<"Y :"<<pos.Y;
        getch();
        gotoxy(10, 50);
        cout<<"                                          ";
        gotoxy(10, 51);
        cout<<"                ";
        gotoxy(10, 52);
        cout<<"                ";
        FlushConsoleInputBuffer(hin);


    }
    system("cls");
    typout("You've made it to the other side and your luck seems to be getting better because as you walk away from the field, you find what seemed to be nature's Fruit Mart. Looks like the food is no longer one of your worries.", 0, 1);
    typout("But you've had enough of this island nonetheless. It has brought back some memories...memories of times you'd rather forget. Maybe this place has that kind of effect on people.", 0, 5);
    typout("You had to make a plan to get out of here. This island is clearly more than what it seems to be. The cave, the landmines....it had to be a hub for the enemies during the Cold War. That was your lead. You have to find a way to contact the mainland.", 0, 7);
    getch();
    system("cls");
    typout("A thought that you'd been trying to put off, came to your mind. Why hadn't anyone come looking for the plane...it was after all, a commercial aircraft. It should have a blackbox, GPS, the whole shebang...so why hadn't anyone come find it...?", 0, 1);
    typout("The only explanation was that this wasn't an accident. The equipment had been corrupted on purpose and this crash was meant to kill everyone on board and leave the wreckage on a remote island with no means of communication. This island was supposed to serve as the unmarked grave of 4000 people. No help was coming for you in that case. It is all up to you.",0, 4);
    typout("You had to make a plan. But not now. Now you needed to eat, and get some rest because the pain had just started to come back.", 0, 12);

     return 0;
    }









