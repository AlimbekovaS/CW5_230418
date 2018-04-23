#pragma once
const double pi = 3.14;
class circle
{
private:
	double radius;
public:
	circle() = default;
	circle(double radius)
	{
		this->radius = radius;

	}
	double area() 
	{
		return pi*radius*radius;
	}
	double dlina()
	{
		return 2 * pi*radius;
	}
	//accessors
	double getRadius() { return radius; }

	//operators
	double operator+(circle obj)
	{
		return this->area() + obj.area();
	}

	double operator-(circle obj)
	{
		return this->area() - obj.area();
	}
	double operator/(circle obj)
	{
		return this->area() / obj.area();
	}
	double operator*(circle obj)
	{
		return this->area() * obj.area();
	}
	
	circle operator+(double d)
	{
		this->radius += d;
		return *this;
	}

	//Lab
	//ѕроверка на равенство радиусов двух окружностей(опер ==)
	//сделать оператор копировани€ (=) например с1=с2
	bool operator==(circle obj)
	{
		return this->radius == obj.radius;
	}

	bool operator==(double radius)
	{	
		return (this->radius==radius);
	}
	bool operator>(circle obj)
	{
		return this->dlina() > obj.dlina();
	}

	circle operator+=(double d)
	{
		this->radius += d;
		return *this;
	}
	
};
