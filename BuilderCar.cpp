#include "BuilderCar.h"

BuilderCar::BuilderCar()
{
	this->Reset();
}

BuilderCar::~BuilderCar()
{
	delete product;
}

void BuilderCar::Reset()
{
	this->product = new Machine();
	this->product->machine.push_back("Machine : Car");
}

void BuilderCar::SetColor() const
{
	this->product->machine.push_back("Color : Red");
}

void BuilderCar::SetPrice() const
{
	this->product->machine.push_back("Price : 20000P");
}

void BuilderCar::SetPower() const
{
	this->product->machine.push_back("Power : 300");
}

void BuilderCar::SetCreateDate() const
{
	this->product->machine.push_back("Date : 14/02/2020");
}

void BuilderCar::SetCreatorCompany() const
{
	this->product->machine.push_back("Mark : Mazda");
}

void BuilderCar::SetModel() const
{
	this->product->machine.push_back("Model : RX-8");
}

void BuilderCar::SetSizes() const
{
	this->product->machine.push_back("Sizes : 242/145/140");
}

void BuilderCar::SetFuel() const
{
	this->product->machine.push_back("Fuel : Dizel");
}

void BuilderCar::SetTypeControl() const
{
	this->product->machine.push_back("Control : Auto");
}

void BuilderCar::SetExpense() const
{
	this->product->machine.push_back("Expense : 3.6/100 km");
}

void BuilderCar::SetVolume() const
{
	this->product->machine.push_back("Volume : 56L");
}

Machine* BuilderCar::GetProduct()
{
	Machine* result = this->product;
	this->Reset();
	return result;
}
