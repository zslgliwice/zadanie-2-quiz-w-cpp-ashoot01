#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name;
string answer;

int main()
{
	HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(uchwyt, 6);
	cout << "\aPodaj nazwe: ";
	cin >> name;
	int points = 0;

	cout << name << " " << "Witaj w Quizie, zapraszam do gry!" << endl;

    system("cls");
	cout<< "3.";Sleep(1000);system("cls");
	cout<< "2..";Sleep(1000);system("cls");
	cout<< "1...";Sleep(1000);system("cls");
 
	cout << "Pytanie 1/5: "<<endl;
    Sleep(1000);
    cout << "Co jest glownym skladnikiem risotto? "<<endl;
	cout << "a) Pomidory"<<endl;
	cout << "b) Ryz"<<endl;
	cout << "c) Ser"<<endl;
	cout << "Twoja odpowiedz: ";
	cin >> answer;
	if(answer == "b"||answer == "B")
	{
   	cout << "Poprawna odpowiedz! +1PKT"<<endl;
   	points++;
	}
	else
	{
    	cout << "Zla odpowiedz! Poprawna odpowiedz: b) Ryz"<<endl;

	}
	Sleep(3000);

 	cout << "Pytanie 2/5: "<<endl;
    Sleep(1000);
    cout << "Ile przedsionkow ma serce czlowieka? "<<endl;
	cout << "a) jeden"<<endl;
	cout << "b) dwa"<<endl;
	cout << "c) Nie ma"<<endl;
	cout << "Twoja odpowiedz: ";
	cin >> answer;
	if(answer == "b"||answer == "B")
	{
   	cout << "Poprawna odpowiedz! +1PKT"<<endl;
   	points++;
	}
	else
	{
    	cout << "Zla odpowiedz, poprawna odpowiedz: b) dwa"<<endl;

	}
	Sleep(3000);

	cout << "Pytanie 3/5: "<<endl;
    Sleep(1000);
    cout << "Co jest glownym skladnikiem ziemskiej atmosfery?"<<endl;
	cout << "a) tlen"<<endl;
	cout << "b) para wodna"<<endl;
	cout << "c) azot"<<endl;
	cout << "Twoja odpowiedz: ";
	cin >> answer;
	if(answer == "c"||answer == "C")
	{
   	cout << "Poprawna odpowiedz! +1PKT"<<endl;
   	points++;
	}
	else
	{
    	cout << "Zla odpowiedz, poprawna odpowiedz: c) azot"<<endl;

	}
	Sleep(3000);
	cout << "Pytanie 4/5: "<<endl;
    Sleep(1000);system("cls");
    cout << "Anemie powoduje niedobor: "<<endl;
	cout << "a) zelaza"<<endl;
	cout << "b) magnezu"<<endl;
	cout << "c) witaminy D"<<endl;
	cout << "Twoja odpowiedz: ";
	cin >> answer;
	if(answer == "a"||answer == "A")
	{
   	cout << "Poprawna odpowiedz! +1PKT";
   	points++;
	}
	else
	{
    	cout << "Zla odpowiedz, poprawna odpowiedz: a) zelaza";

	}
	Sleep(3000);

	cout << "Pytanie 5/5: "<<endl;
    Sleep(1000);
    cout << "Ktora z wymienionych planet jest najdalej od slonca? "<<endl;
	cout << "a) Ziemia"<<endl;
	cout << "b) Mars"<<endl;
	cout << "c) Neptun"<<endl;
	cout << "Twoja odpowiedz: ";
	cin >> answer;
	if(answer == "c" || answer ==  "C")
	{
   	cout << "Poprawna odpowiedz! +1PKT";
   	points++;
	}
	else
	{
    	cout << "Zla odpowiedz, poprawna odpowiedz: c) Neptun";
	}
	Sleep(2000);

	cout << "WYNIKI" << endl;
	cout << "ZDOBYLES: " << points << " PUNKTOW" << endl;
	if (points >= 3){
    	cout << "Dobry wynik!" << endl;
	}else{
    	cout << "Nastepnym razem bardziej sie postaraj!" << endl;

	}
	cout << "Dzieki za przejscie quizu!" << endl;
	return 0;
}
