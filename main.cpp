/*
Создать класс «Конвейер сборки машины», в результате работы которого мы
можем получить: мотоцикл, квадроцикл и легковую машину. Использовать
паттерн «Строитель».
Результат создания транспорта и все их характеристики
(цвет, цена, тип двигателя, объем двигателя, год выпуска, марка, модель,
размеры, требования к топливу, тип рулевого управления, расход топлива по
городу, объем багажника) записываются в выходные файлы по типу транспорта
«motorbike», «quadbike», «car». Также пользователь может загрузить ранее
созданные мотоциклы, или машины, или квадроциклы из соответствующего
файла.
*/

/*
	INCLUDES AND DEFINES
*/
#include "Director.h"
#include "BuilderCar.h"
#include "BuilderMotorbike.h"


/*
	MAIN FUNCTION
*/
int main() {
	Director* director = new Director();
	Builder* Car = new BuilderCar();
	Builder* Motorbike = new BuilderMotorbike();

	Machine* p;
	director->set_builder(Car);
	std::cout << "Standard full featured product:\n";
	director->BuildFullProduct();

	p = Car->GetProduct();
	p->ListParts();
	delete p;

	// Помните, что паттерн Строитель можно использовать без класса Директор.
	/*
	std::cout << "Custom product:\n";
	builder->ProducePartA();
	builder->ProducePartC();
	p = builder->GetProduct();
	p->ListParts();
	*/
	delete p;
	delete Car;
	delete director;
	return 0;
}
