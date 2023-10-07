#include <iostream>

int main()
{
	setlocale(LC_ALL,"");
	double a,b,c,x1,x2,d;
	std::cout << "¬ведите a\n"; 
	std::cin >> a;
	std::cout << "¬ведите b\n";
	std::cin >> b;
	std::cout << "¬ведите c\n";
	std::cin >> c;
	std::cout << a << "x^2" << " + " << b << "x + " << c << " = 0\n";
	 d = b * b - 4 * a * c; 
	 std::cout << "D = " << d << "\n";
  if (d > 0) 
  {
    x1 = ((-b) + sqrt(d)) / (2 * a);
    x2 = ((-b) - sqrt(d)) / (2 * a);
    std::cout << "x1 = " << x1 << "\n";
    std::cout << "x2 = " << x2 << "\n";
  }
  if (d == 0) 
  {
    x1 = -(b / (2 * a));
    std::cout << "x1 = x2 = " << x1 << "\n";
  }
  if (d < 0) 
    std::cout << "D < 0, ƒействительных корней уравнени€ не существует";
	return 0;
}
