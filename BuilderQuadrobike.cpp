#include "BuilderQuadrobike.h"

BuilderQuadrobike::BuilderQuadrobike()
{
	this->Reset();
}

BuilderQuadrobike::~BuilderQuadrobike()
{
	delete product;
}

void BuilderQuadrobike::Reset()
{
	this->product = new Machine();
	this->product->machine.push_back("Machine : Quadrobike");
}

void BuilderQuadrobike::SetColor() const
{
	this->product->machine.push_back("Color : Red");
}

void BuilderQuadrobike::SetPrice() const
{
	this->product->machine.push_back("Price : 20000P");
}

void BuilderQuadrobike::SetPower() const
{
	this->product->machine.push_back("Power : 300");
}

void BuilderQuadrobike::SetCreateDate() const
{
	this->product->machine.push_back("Date : 14/02/2020");
}

void BuilderQuadrobike::SetCreatorCompany() const
{
	this->product->machine.push_back("Mark : Mazda");
}

void BuilderQuadrobike::SetModel() const
{
	this->product->machine.push_back("Model : RX-8");
}

void BuilderQuadrobike::SetSizes() const
{
	this->product->machine.push_back("Sizes : 242/145/140");
}

void BuilderQuadrobike::SetFuel() const
{
	this->product->machine.push_back("Fuel : Dizel");
}

void BuilderQuadrobike::SetTypeControl() const
{
	this->product->machine.push_back("Control : Auto");
}

void BuilderQuadrobike::SetExpense() const
{
	this->product->machine.push_back("Expense : 3.6/100 km");
}

void BuilderQuadrobike::SetVolume() const
{
	this->product->machine.push_back("Volume : 56L");
}

Machine* BuilderQuadrobike::GetProduct()
{
	Machine* result = this->product;
	this->Reset();
	return result;
}
