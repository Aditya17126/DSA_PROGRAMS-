#include <iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;


class hero
{

int health;
int level;
int life;
public:
hero()
{
	
	health=100;
	level=1;
	life=3;
}

void hit(int obst)
{
	if(obst==1)
	{
		health=health-10;
		
	}
	else if(obst==2)
	{
		health=health-20;
		
	}
	else if(obst==3)	
	{
		health=health-30;
	}
	
	if(health<=0)
	{
		life--;
		if(life==0)
		cout<<"Game Over.."	;	
		cout<<"Died, Life left "<<life;
	}
	

}

void gain(int boost)
{
	if(boost==1)
	{
		health+=10;
	}
	else if(boost==2)
	{
		health+=20;
	}
	else if(boost==3)
	{
		health+=30;
	}
	if(health>100)
	{
		life++;
		
	}
	
}

void starl()
{
	cout<<endl<<"*******************Gaming Zone************************";
}
	

void loading()
{
	  cout<<endl<<"Game Loading ";
	for(int i=1;i<=40;i++)
	{
		Sleep(100);
		cout<<"#";
		
	}
}

void show()
{
	
	cout<<endl<<"****************Health Status*********************";
	
	cout<<"\nhealth is "<<this->health<<endl;
cout<<" level is "<<this->level<<endl;
cout<<" Life = "<<this->life<<endl;

}

hero compare(hero h)
{
	if(h.health>this->health)
	{
		cout<<"\nWinner is player 2 ";
		return h;
	}
	else
	{	
		cout<<"\nWinner is player 1 ";
		return *this;
	}
}
};

int main()
{
hero h1,h2;
h1.starl();
cout<<endl<<endl;
h1.loading();
cout<<"\nHealth Status of Player1"<<endl;
h1.show();
cout<<"\nHealth Status of Player2"<<endl;
h2.show();

srand(time(0));

h1.hit(rand()%3+1);
h2.hit(rand()%3+1);


hero hn=h1.compare(h2);

cout<<"\nWinner details :\n";
hn.show();


return 0;
}

