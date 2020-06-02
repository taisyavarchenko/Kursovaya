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
#include "BuilderQuadrobike.h"

using namespace std;

/*
	MAIN FUNCTION
*/
int main() {
	setlocale(LC_ALL, "rus");
	Director* director = new Director();
	Builder* Car = new BuilderCar();
	Builder* Motorbike = new BuilderMotorbike();
	Builder* Quadrobike = new BuilderQuadrobike();
	vector <Machine*> arrayMachines;;
	char main;
	while (true)
	{
		cout << "Главное меню" << endl
			<< "[1] Создание" << endl
			<< "[2] Редактирование" << endl
			<< "[3] Сохранение" << endl
			<< "[4] Загрузка" << endl
			<< "[5] Вывести созданные продукты" << endl
			<< "[0] Выход из программы" << endl
			<< "Выбор >> ";
		cin >> main;
		system("cls");
		switch (main)
		{
		case '1':
			system("cls");
			cout << "Создание" << endl
				<< "[1] Машину" << endl
				<< "[2] Мотоцикл" << endl
				<< "[3] Квадроцикл" << endl
				<< "Выбор >> ";
			cin >> main;
			switch (main)
			{
			case '1':
				director->set_builder(Car);
				director->BuildFullProduct();
				arrayMachines.push_back(Car->GetProduct());
				break;
			case '2':
				director->set_builder(Motorbike);
				director->BuildFullProduct();
				arrayMachines.push_back(Motorbike->GetProduct());
				break;
			case '3':
				director->set_builder(Quadrobike);
				director->BuildFullProduct();
				arrayMachines.push_back(Quadrobike->GetProduct());
				break;
			default:
				break;
			}
			cout << "Объект успешно создан!" << endl;
			break;
		default:
			break;
		case '2':
			system("cls");
			cout << "Изменить" << endl
				<< "[1] Машину" << endl
				<< "[2] Мотоцикл" << endl
				<< "[3] Квадроцикл" << endl
				<< "Выбор >> ";
			cin >> main;
			switch (main)
			{
			case '1':
				Car->EditParams();
				break;
			case '2':
				Motorbike->EditParams();
				break;
			case '3':
				Quadrobike->EditParams();
				break;
			default:
				break;
			}
			cout << "Объект успешно изменен!" << endl;
			break;
			break;
		case '3':
			director->Save(arrayMachines);
			break;
		case '4':
			arrayMachines = director->Load();
			break;
		case '5':
			for (size_t i = 0; i < arrayMachines.size(); i++)
			{
				arrayMachines[i]->ListParts();
			}
			break;
		case '0':
			delete Quadrobike;
			delete Motorbike;
			delete Car;
			delete director;
			return 0;
		}
		system("pause");
		system("cls");
	}
}
