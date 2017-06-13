#include <iostream.h>
#include <conio.h>
#include <dos.h>

class crono_digital
{
	public:
	void imprimir_crono()
	{
		for(int h=0; h<24; h++)
		{
			for(int m=0; m<60; m++)
			{
				for(int s=0; s<60; s++)
				{
					for(int ms=0; ms<1000; ms++)
					{
						gotoxy(28, 7);
						cout<<"___________________";
						gotoxy(28, 8);
						cout<<"|                 |";
						gotoxy(28, 9);
						cout<<"|_________________|";
						gotoxy(28, 9);
						cout<<"|                 |";
						gotoxy(28, 10);
						cout<<"|                 |";
						gotoxy(28, 11);
						cout<<"|_________________|";
						gotoxy(31, 8);
						cout<<"CRONO DIGITAL";
						gotoxy(33, 10);
						cout<<h<<":"<<m<<":"<<s<<"."<<ms;
						//cout<<s;
						delay(1);
					}
				}
			}
		}
	}
};

void main()
{
	clrscr();
	crono_digital c;
	c.imprimir_crono();
	getch();
}