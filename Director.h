#pragma once
#include "Builder.h"
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
