#include <iostream>
using namespace std;
#include "Time.h"

void testTimeAssignment();
void testTimeSimplify();
void testTimeAddition();
void testTimeSubtraction();
void testTimePlusPlus();
void testTimeMinusMinus();
void testTimeRelationalOperators();
void testTimeExtractionOperator();
void testIntegerConversion();

int main()
{
	//testTimeAssignment();
	//testTimeSimplify();
	//testTimeAddition();
	//testTimeSubtraction();
	//testTimePlusPlus();
	//testTimeMinusMinus();
	//testTimeRelationalOperators();
	//testTimeExtractionOperator();
	testIntegerConversion();
}


void testTimeSimplify()
{
	Time myTime(36, 61, 61);
	Time myOtherTime(-1, -1, -1);

	cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << " " << myTime.getSeconds() << endl;
	myTime.simplify();
	cout << myTime.getDays() << " " << myTime.getHours() << ":" << myTime.getMinutes() << " " << myTime.getSeconds() << endl;

	cout << myOtherTime.getDays() << " " << myOtherTime.getHours() << ":" << myOtherTime.getMinutes() << " " << myOtherTime.getSeconds() << endl;
	myOtherTime.simplify();
	cout << myOtherTime.getDays() << " " << myOtherTime.getHours() << ":" << myOtherTime.getMinutes() << " " << myOtherTime.getSeconds() << endl;

}

void testTimeAddition()
{
	Time now(10, 22);
	Time dinner(18, 30);
	Time later = now + dinner;
	cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << ":" << later.getSeconds() << endl;
}

void testTimeSubtraction()
{
	Time now(10, 22);
	Time dinner(18, 30);
	Time later = dinner - now;
	cout << later.getDays() << " " << later.getHours() << ":" << later.getMinutes() << ":" << later.getSeconds() << endl;
}

void testTimeAssignment()
{

	Time classStart(9, 40);

	//cout << now.getHours() << ":" << now.getMinutes() << endl;


	//now = classStart;
	//cout << now.getHours() << ":" << now.getMinutes() << endl;

}

void testTimePlusPlus()
{
	Time now(11, 24, 59);
	
	for (int i = 0; i < 100; i++)
	{
		now++;
		cout << now.getDays() << " " << now.getHours() << " " << now.getMinutes() << " " << now.getSeconds() << " " << endl;
	}
}

void testTimeMinusMinus()
{
	Time now(11, 24, 59);

	for (int i = 0; i < 100; i++)
	{
		now--;
		cout << now.getDays() << " " << now.getHours() << " " << now.getMinutes() << " " << now.getSeconds() << " " << endl;
	}
}

void testTimeRelationalOperators()
{
	Time now(11, 59);
	Time later(1, 1, 1, 1);

	cout << (now > later) << endl;
	cout << (now < later) << endl;
}

void testTimeExtractionOperator()
{
	Time now(0, 12, 17, 32);
	cout << now;
}

void testIntegerConversion()
{
	Time tommorowsClass(1, 9, 40, 0);
	cout << static_cast<int>(tommorowsClass) << endl;
	cout << 1 + tommorowsClass;
}