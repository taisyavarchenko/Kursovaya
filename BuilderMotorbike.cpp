#include "BuilderMotorbike.h"

BuilderMotorbike::BuilderMotorbike()
{
	this->Reset();
}

BuilderMotorbike::~BuilderMotorbike()
{
	delete product;
}

void BuilderMotorbike::Reset()
{
	this->product = new Machine();
	this->product->machine.push_back("Machine : Motorbike");
}

void BuilderMotorbike::SetColor() const
{
	this->product->machine.push_back("Color : Red");
}

void BuilderMotorbike::SetPrice() const
{
	this->product->machine.push_back("Price : 20000P");
}

void BuilderMotorbike::SetPower() const
{
	this->product->machine.push_back("Power : 300");
}

void BuilderMotorbike::SetCreateDate() const
{
	this->product->machine.push_back("Date : 14/02/2020");
}

void BuilderMotorbike::SetCreatorCompany() const
{
	this->product->machine.push_back("Mark : Mazda");
}

void BuilderMotorbike::SetModel() const
{
	this->product->machine.push_back("Model : RX-8");
}

void BuilderMotorbike::SetSizes() const
{
	this->product->machine.push_back("Sizes : 242/145/140");
}

void BuilderMotorbike::SetFuel() const
{
	this->product->machine.push_back("Fuel : Dizel");
}

void BuilderMotorbike::SetTypeControl() const
{
	this->product->machine.push_back("Control : Auto");
}

void BuilderMotorbike::SetExpense() const
{
	this->product->machine.push_back("Expense : 3.6/100 km");
}

void BuilderMotorbike::SetVolume() const
{
	this->product->machine.push_back("Volume : 56L");
}

Machine* BuilderMotorbike::GetProduct()
{
	Machine* result = this->product;
	this->Reset();
	return result;
}
