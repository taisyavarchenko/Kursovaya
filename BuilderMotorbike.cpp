#include "BuilderMotorbike.h"

BuilderMotorbike::BuilderMotorbike()
{
	this->LoadParams();
	this->Reset();
}

BuilderMotorbike::~BuilderMotorbike()
{
	delete product;
}

void BuilderMotorbike::Reset()
{
	this->product = new Machine();
	this->product->machine.resize(12);
	this->product->machine[0] = getArray()[0];
}

void BuilderMotorbike::SetColor()
{
	this->product->machine[1] = getArray()[1];
}

void BuilderMotorbike::SetPrice()
{
	this->product->machine[2] = getArray()[2];
}

void BuilderMotorbike::SetPower()
{
	this->product->machine[3] = getArray()[3];
}

void BuilderMotorbike::SetCreateDate()
{
	this->product->machine[4] = getArray()[4];
}

void BuilderMotorbike::SetCreatorCompany()
{
	this->product->machine[5] = getArray()[5];
}

void BuilderMotorbike::SetModel()
{
	this->product->machine[6] = getArray()[6];
}

void BuilderMotorbike::SetSizes()
{
	this->product->machine[7] = getArray()[7];
}

void BuilderMotorbike::SetFuel()
{
	this->product->machine[8] = getArray()[8];
}

void BuilderMotorbike::SetTypeControl()
{
	this->product->machine[9] = getArray()[9];
}

void BuilderMotorbike::SetExpense()
{
	this->product->machine[10] = getArray()[10];
}

void BuilderMotorbike::SetVolume()
{
	this->product->machine[11] = getArray()[11];
}

void BuilderMotorbike::LoadParams()
{
	getArray().resize(12);
	getArray()[0] = "Machine: Motobike";
	getArray()[1] = "Color: Red";
	getArray()[2] = "Price: 200 000";
	getArray()[3] = "Power: 300w";
	getArray()[4] = "Create Date: 20/04/2020";
	getArray()[5] = "Mark: Mazda";
	getArray()[6] = "Model: RX-8";
	getArray()[7] = "Sizes: 100/140/175";
	getArray()[8] = "Fuel: 95";
	getArray()[9] = "Type Control: AUTO";
	getArray()[10] = "Expense: 3.2";
	getArray()[11] = "Volume: 45";
}

void BuilderMotorbike::EditParams()
{
	system("cls");
	int value;
	string s_value;
	cout << "Выберите параметр для изменения: " << endl;
	for (size_t i = 0; i < getArray().size(); i++)
	{
		cout << "[" << i << "] " << getArray()[i] << endl;
	}
	cout << "Выш выбор: ";
	cin >> value;
	if (value < 0 || value > getArray().size()-1)
	{
		throw (string)"Ошибка выбора параметра";
	}
	cin.ignore(256, '\n');
	system("cls");
	cout << getArray()[value] << endl
		<< "Новое значение: ";
	getline(cin, s_value);
	if (s_value.empty())
	{
		throw (string)"Значение не может быть пустое";
	}
	getArray()[value] = getArray()[value].substr(0, getArray()[value].find(":") + 1) + " " + s_value;
}

Machine* BuilderMotorbike::GetProduct()
{
	Machine* result = this->product;
	this->Reset();
	return result;
}
