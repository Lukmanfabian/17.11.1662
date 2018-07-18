#include <iostream>
#include<string>

using namespace std;
class motor
{
private : 
	int roda, jok;
	string warna;
public :
	motor(int roda, int jok, string warna);
	int jumroda();
	int jumjok();
	string warnam();
	
};
motor::motor(int roda, int jok, string warna)
{
	this->roda = roda;
	this->jok = jok;
	this->warna = warna;
}
int motor::jumroda()
{
	return this->roda;
}
int motor::jumjok()
{
	return this->jok;
}
string motor::warnam()
{
	return this->warna;
}
motor honda=motor(2,1,"hitam");
motor yamaha=motor(3,2,"pink kembang kembang");
int main()
{
	
	cout <<"Motor honda"<<endl;
	cout <<"--------------" <<endl;
	cout<<"jumlah roda : "<<honda.jumroda()<<endl;
	cout<<"jumlah jok : "<<honda.jumjok()<<endl;
	cout<<"warna motor : "<<honda.warnam()<<endl<<endl;

	cout <<"Motor yamaha"<<endl;
	cout <<"--------------" <<endl;
	cout<<"jumlah roda : "<<yamaha.jumroda()<<endl;
	cout<<"jumlah jok : "<<yamaha.jumjok()<<endl;
	cout<<"warna motor : "<<yamaha.warnam()<<endl;
	return 0;
}
