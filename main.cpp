#include <iostream>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <random>
#include <vector>

class CarStore {
public:
	virtual void Products() {};
};

class ForUsualCar : public CarStore {
public:
	void Products() {
		std::cout << " колёса " << std::endl;
		std::cout << " рулевая система для легковушки" << std::endl;
		std::cout << " шины " << std::endl;
	}
};

class ForLorry : public CarStore {
public:
	void Products() {
		std::cout << " большие колёса " << std::endl;
		std::cout << " рулевая система для грузовика " << std::endl;
		std::cout << " шины для грузовика " << std::endl;
	}
};

class ForOldCars : public CarStore {
public:
	void Products() {
		std::cout << " колёса для винтажного автомобиля " << std::endl;
		std::cout << " двигатель " << std::endl;
		std::cout << " специальная рулевая система " << std::endl;
	}
};

class CarShope {
public:
	void AllProducts(CarStore& product) {
		product.Products();
	}
};

void ForMenu() {

	ForUsualCar inform1;
	ForLorry inform2;
	ForOldCars inform3;

	std::cout << "Обычная машина: " << std::endl;
	CarShope Customer1;
	Customer1.AllProducts(inform1);

	std::cout << "\nГрузовик: " << std::endl;
	CarShope Customer2;
	Customer1.AllProducts(inform2);

	std::cout << "\nСтарая модель машины: " << std::endl;
	CarShope Customer3;
	Customer1.AllProducts(inform3);

}

int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	ForMenu();

	return 0;
}