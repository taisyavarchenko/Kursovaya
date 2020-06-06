#include "BuilderQuadrobike.h"

BuilderQuadrobike::BuilderQuadrobike()
{
	this->LoadParams();
	this->Reset();
}

BuilderQuadrobike::~BuilderQuadrobike()
{
	delete product;
}

void BuilderQuadrobike::Reset()
{
	this->product = new Machine();
	this->product->machine.resize(12);
	this->product->machine[0] = getArray()[0];
}

void BuilderQuadrobike::SetColor()
{
	this->product->machine[1] = getArray()[1];
}

void BuilderQuadrobike::SetPrice()
{
	this->product->machine[2] = getArray()[2];
}

void BuilderQuadrobike::SetPower()
{
	this->product->machine[3] = getArray()[3];
}

void BuilderQuadrobike::SetCreateDate()
{
	this->product->machine[4] = getArray()[4];
}

void BuilderQuadrobike::SetCreatorCompany()
{
	this->product->machine[5] = getArray()[5];
}

void BuilderQuadrobike::SetModel()
{
	this->product->machine[6] = getArray()[6];
}

void BuilderQuadrobike::SetSizes()
{
	this->product->machine[7] = getArray()[7];
}

void BuilderQuadrobike::SetFuel()
{
	this->product->machine[8] = getArray()[8];
}

void BuilderQuadrobike::SetTypeControl()
{
	this->product->machine[9] = getArray()[9];
}

void BuilderQuadrobike::SetExpense()
{
	this->product->machine[10] = getArray()[10];
}

void BuilderQuadrobike::SetVolume()
{
	this->product->machine[11] = getArray()[11];
}

void BuilderQuadrobike::LoadParams()
{
	getArray().resize(12);
	getArray()[0] = "Machine: Quadrobike";
	getArray()[1] = "Color: Red";
	getArray()[2] = "Price: 200 000";
	getArray()[3] = "Power: 300w";
	getArray()[4] = "Create Date: 20/04/2020";
	getArray()[5] = "Mark: Realto";
	getArray()[6] = "Model: BT";
	getArray()[7] = "Sizes: 100/140/175";
	getArray()[8] = "Fuel: 95";
	getArray()[9] = "Type Control: AUTO";
	getArray()[10] = "Expense: 3.2";
	getArray()[11] = "Volume: 45";
}

void BuilderQuadrobike::EditParams()
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

Machine* BuilderQuadrobike::GetProduct()
{
	Machine* result = this->product;
	this->Reset();
	return result;
}
