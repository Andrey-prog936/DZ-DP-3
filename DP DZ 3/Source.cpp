#include <iostream>
using namespace std;

class Pool
{
public:
	int price = 0;
	int One_hour_pleasure(int count, int age, bool needAlcohol)
	{
		price = 10;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_evening_pleasure(int count, int age, bool needAlcohol)
	{
		price = 20;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_night_pleasure(int count, int age, bool needAlcohol)
	{
		price = 30;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int Holidays_pleasure(int count, int age, bool needAlcohol)
	{
		price = 40;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
};

class Bar
{
public:
	int price = 0;
	int One_hour_pleasure(int count, int age, bool needAlcohol)
	{
		price = 5;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_evening_pleasure(int count, int age, bool needAlcohol)
	{
		price = 10;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_night_pleasure(int count, int age, bool needAlcohol)
	{
		price = 20;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int Holidays_pleasure(int count, int age, bool needAlcohol)
	{
		price = 25;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
};

class Restaurant
{
public:
	int price = 0;
	int One_hour_pleasure(int count, int age, bool needAlcohol)
	{
		price = 30;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_evening_pleasure(int count, int age, bool needAlcohol)
	{
		price = 50;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_night_pleasure(int count, int age, bool needAlcohol)
	{
		price = 60;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int Holidays_pleasure(int count, int age, bool needAlcohol)
	{
		price = 85;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
};

class Billiard
{
public:
	int price = 0;
	int One_hour_pleasure(int count, int age, bool needAlcohol)
	{
		price = 12;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_evening_pleasure(int count, int age, bool needAlcohol)
	{
		price = 25;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_night_pleasure(int count, int age, bool needAlcohol)
	{
		price = 50;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int Holidays_pleasure(int count, int age, bool needAlcohol)
	{
		price = 65;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
};

class Massage
{
public:
	int price = 0;
	int One_hour_pleasure(int count, int age, bool needAlcohol)
	{
		price = 25;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_evening_pleasure(int count, int age, bool needAlcohol)
	{
		price = 30;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int One_night_pleasure(int count, int age, bool needAlcohol)
	{
		price = 90;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
	int Holidays_pleasure(int count, int age, bool needAlcohol)
	{
		price = 140;
		if (age < 18) { needAlcohol = false; }
		else { needAlcohol = true; price += 10; }
		price = price * count;
		return price;
	}
};

class Facade
{
private:
	Pool _Pool;
	Bar _Bar;
	Restaurant _Restaurant;
	Billiard _Billiard;
	Massage _Massage;

public:
	int Pool1(int count, int age, bool needAlcohol)
	{
		int PoolPrice1 = _Pool.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << PoolPrice1 << endl;
		return PoolPrice1;
	}
	int Pool2(int count, int age, bool needAlcohol)
	{
		int PoolPrice2 = _Pool.One_evening_pleasure(count, age, needAlcohol);
		cout << "Price: " << PoolPrice2 << endl;
		return PoolPrice2;

	}
	int Pool3(int count, int age, bool needAlcohol)
	{
		int PoolPrice3 = _Pool.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << PoolPrice3 << endl;
		return PoolPrice3;

	}
	int Pool4(int count, int age, bool needAlcohol)
	{
		int PoolPrice4 = _Pool.Holidays_pleasure(count, age, needAlcohol);
		cout << "Price: " << PoolPrice4 << endl;
		return PoolPrice4;

	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int Bar1(int count, int age, bool needAlcohol)
	{
		int BarPrice1 = _Bar.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << BarPrice1 << endl;
		return BarPrice1;
	}
	int Bar2(int count, int age, bool needAlcohol)
	{
		int BarPrice2 = _Bar.One_evening_pleasure(count, age, needAlcohol);
		cout << "Price: " << BarPrice2 << endl;
		return BarPrice2;
	}
	int Bar3(int count, int age, bool needAlcohol)
	{
		int BarPrice3 = _Bar.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << BarPrice3 << endl;
		return BarPrice3;
	}
	int Bar4(int count, int age, bool needAlcohol)
	{
		int BarPrice4 = _Bar.Holidays_pleasure(count, age, needAlcohol);
		cout << "Price: " << BarPrice4 << endl;
		return BarPrice4;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int Restaurant1(int count, int age, bool needAlcohol)
	{
		int RestaurantPrice1 = _Restaurant.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << RestaurantPrice1 << endl;
		return RestaurantPrice1;

	}
	int Restaurant2(int count, int age, bool needAlcohol)
	{
		int RestaurantPrice2 = _Restaurant.One_evening_pleasure(count, age, needAlcohol);
		cout << "Price: " << RestaurantPrice2 << endl;
		return RestaurantPrice2;

	}
	int Restaurant3(int count, int age, bool needAlcohol)
	{
		int price = 0;
		int RestaurantPrice3 = _Restaurant.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << RestaurantPrice3 << endl;
		return RestaurantPrice3;

	}
	int Restaurant4(int count, int age, bool needAlcohol)
	{
		int RestaurantPrice4 = _Restaurant.Holidays_pleasure(count, age, needAlcohol);
		cout << "Price: " << RestaurantPrice4 << endl;
		return RestaurantPrice4;

	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int Billiard1(int count, int age, bool needAlcohol)
	{
		int BilliardPrice1 = _Billiard.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << BilliardPrice1 << endl;
		return BilliardPrice1;
	}
	int Billiard2(int count, int age, bool needAlcohol)
	{
		int BilliardPrice2 = _Billiard.One_evening_pleasure(count, age, needAlcohol);
		cout << "Price: " << BilliardPrice2 << endl;
		return BilliardPrice2;
	}
	int Billiard3(int count, int age, bool needAlcohol)
	{
		int BilliardPrice3 = _Billiard.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << BilliardPrice3 << endl;
		return BilliardPrice3;
	}
	int Billiard4(int count, int age, bool needAlcohol)
	{
		int BilliardPrice4 = _Billiard.Holidays_pleasure(count, age, needAlcohol);
		cout << "Price: " << BilliardPrice4 << endl;
		return BilliardPrice4;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	int Massage1(int count, int age, bool needAlcohol)
	{
		int MassagePrice1 = _Massage.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << MassagePrice1 << endl;
		return MassagePrice1;
	}
	int Massage2(int count, int age, bool needAlcohol)
	{
		int MassagePrice2 = _Massage.One_evening_pleasure(count, age, needAlcohol);
		cout << "Price: " << MassagePrice2 << endl;
		return MassagePrice2;
	}
	int Massage3(int count, int age, bool needAlcohol)
	{
		int MassagePrice3 = _Massage.One_night_pleasure(count, age, needAlcohol);
		cout << "Price: " << MassagePrice3 << endl;
		return MassagePrice3;
	}
	int Massage4(int count, int age, bool needAlcohol)
	{
		int MassagePrice4 = _Massage.Holidays_pleasure(count, age, needAlcohol);
		cout << "Price: " << MassagePrice4 << endl;
		return MassagePrice4;
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
};

int main()
{
	Facade facade;
	facade.Bar1(2, 19, 1);
	facade.Billiard3(2, 19, 1);
	facade.Restaurant2(2, 19, 1);
	facade.Pool3(2, 19, 1);
	facade.Massage4(2, 19, 1);
}


