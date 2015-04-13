#include <iostream.h>
#include <conio.h>
#include <classmark.h>

class classmark

{
	int num1, num2, ans;
public:
	classmark()
	{
		num1 = 0;
		num2 = 0;
		ans = 0;
	}
	void putdata(int, int, int);
	int sum(int, int, int);
	float average(int, int, int);
	void display(int, int, int);

};
