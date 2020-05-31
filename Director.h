#pragma once
#include "Builder.h"
#include "Machine.h"
#include "fstream"
class Director {

private:
	Builder* builder;
	/**
	 * Директор работает с любым экземпляром строителя, который передаётся ему
	 * клиентским кодом. Таким образом, клиентский код может изменить конечный
	 * тип вновь собираемого продукта.
	 */

public:

	void set_builder(Builder* builder) {
		this->builder = builder;
	}

	/**
	 * Директор может строить несколько вариаций продукта, используя одинаковые
	 * шаги построения.
	 */
	void Save(vector <Machine*> arrayMachines) {
		ofstream fo_car("Car.txt");
		ofstream fo_moto("Motobike.txt");
		ofstream fo_quad("Quadrobike.txt");
		for (size_t i = 0; i < arrayMachines.size(); i++)
		{
			if (arrayMachines[i]->machine[0] == "Machine: Car")
				for (size_t j = 0; j < arrayMachines[i]->machine.size(); j++)
				{
					fo_car << arrayMachines[i]->machine[j] << endl;
				}
			if (arrayMachines[i]->machine[0] == "Machine: Motobike")
				for (size_t j = 0; j < arrayMachines[i]->machine.size(); j++)
				{
					fo_moto << arrayMachines[i]->machine[j] << endl;
				}
			if (arrayMachines[i]->machine[0] == "Machine: Quadrobike")
				for (size_t j = 0; j < arrayMachines[i]->machine.size(); j++)
				{
					fo_quad << arrayMachines[i]->machine[j] << endl;
				}
		}
		fo_car.close();
		fo_moto.close();
		fo_quad.close();
	}
	vector <Machine*> Load() {
		ifstream fin("Car.txt");

		fin.close();
	}
	void BuildFullProduct() {
		this->builder->SetColor();
		this->builder->SetPrice();
		this->builder->SetPower();
		this->builder->SetCreateDate();
		this->builder->SetCreatorCompany();
		this->builder->SetModel();
		this->builder->SetSizes();
		this->builder->SetFuel();
		this->builder->SetTypeControl();
		this->builder->SetExpense();
		this->builder->SetVolume();
	}
};
