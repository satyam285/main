//Skywalker's EDM


#include<stdio.h>
#include<dos.h>

void main()
{
int ch,cal=0;
unsigned int d;
clrscr();
printf("\nStart After Enter (Press 'Esc' to Exit)\n");
while(ch!=27)
{
	ch=(int)getch();
	if(ch<97)              //For A-Z
	{
		cal=(ch*100)-3870;
		d=cal;
		sound(d);
		delay(100);
		nosound();
	}
	else                   //For a-z
	{
		cal=(ch*100)-9670;
		d=cal;
		sound(d);
		delay(100);
		nosound();
	}

}
getch();
}