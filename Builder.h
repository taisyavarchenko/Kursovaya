#pragma once
#include "Machine.h"
class Builder {
public:
	virtual ~Builder() {}
	virtual void SetColor() const = 0;			//Цвет
	virtual void SetPrice() const = 0;			//Цена
	virtual void SetPower() const = 0;			//Объем двигателя
	virtual void SetCreateDate() const = 0;		//Год выпуска
	virtual void SetCreatorCompany() const = 0;	//Марка
	virtual void SetModel() const = 0;			//Модель
	virtual void SetSizes() const = 0;			//Размеры
	virtual void SetFuel() const = 0;			//Топливо
	virtual void SetTypeControl() const = 0;	//Тип рулегово управления
	virtual void SetExpense() const = 0;		//Расход топлива
	virtual void SetVolume() const = 0;			//Объем багажника
	virtual Machine* GetProduct() = 0;
};
