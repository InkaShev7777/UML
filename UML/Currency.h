#pragma once
#include<iostream>
#include<string>
class Currency
{
	std::string Paper_Type;
	std::string Number;
	int* Wear;
	std::string Cuntry;
	int* Year;
	double* Size;
public:
	Currency()
	{
		this->Cuntry = "";
		this->Number = "";
		this->Paper_Type = "";
		this->Size = new double(0);
		this->Wear = new int(100);
		this->Year = new int (2022);
	}
	Currency(std::string Paper_Type,int Year,std::string Number,double Size,std::string Cuntry)
	{
		this->Cuntry = Cuntry;
		this->Number = Number;
		this->Paper_Type = Paper_Type;
		this->Wear = new int(100);
		this->Size = new double(Size);
		this->Year = new int(Year);
	}
	void Top_Wear()
	{
		this->Wear--;
	}
	std::string getNumber()
	{
		return (std::string)this->Number;
	}
	std::string getCuntry()
	{
		return (std::string)this->Cuntry;
	}
	std::string getPaper_Type()
	{
		return (std::string)this->Paper_Type;
	}
	double* getSize()
	{
		return this->Size;
	}
	int* getWear()
	{
		return this->Wear;
	}
	~Currency()
	{
		delete this->Wear;
		delete this->Year;
		delete this->Size;
	}
};

