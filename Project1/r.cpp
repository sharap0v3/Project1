#include <iostream>
#include <vector>
using namespace std;


class animal {
public:
	void setName() {
		cout << " назови питомца: ";
		cin >> name;
	}
	void NamePrint() {
		cout << " имя питомца: " << name;
	}
	virtual void Sound() const {
		cout << "\n ok \n";
	}
protected:
	string name;
};

class mice :public animal
{
public:
	virtual void Sound()const override {
		cout << "\n pi-pi-pi \n";
	}
};

class fish :public animal
{
public:
	virtual void Sound()const override {
		cout << "\n ... \n";
	}
};

class dog :public animal
{
public:
	virtual void Sound()const override {
		cout << "\n gaf \n";
	}
};





int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int choose = 0;

	animal ani_;
	ani_.setName();
	ani_.NamePrint();
	ani_.Sound();

	cout << "\n ваш питомец: \n 1-мышь.. 2-рыба.. 3-пес..\n";
	cin >> choose;

	switch (choose)
	{
	case 1:
	{
		mice obj;
		obj.Sound();
		break;
	}
	case 2:
	{
		fish obj;
		obj.Sound();
		break;
	}
	case 3:
	{
		dog obj;
		obj.Sound();
		break;
	}

	default:
	{
		cout << "error";
		break;
	}
	}

	/*
	cout << "\n#2:\n";
	vector <animal*> collection;
	collection.push_back(new mice);
	collection.push_back(new fish);
	collection.push_back(new dog);

	for (auto& el : collection) 
	{
		el->Sound();
	}
	for (auto& el : collection)
	{
		delete el;
	}
	*/

	return 0;
}