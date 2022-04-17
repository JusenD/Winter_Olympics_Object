#include"CMD.h"
#include"Calculator.h"
int main() {

	CMD::init();
	CMD::circle();
	return 0;
}



//计算器功能
//string expression, result; char buffer[200];
//while (true) {
//	cin.getline(buffer, 200);
//	expression = buffer;
//	result = calculator(expression);
//	if (result == "") { cout << "，请重新输入" << endl; continue; }
//	cout << result << endl;
//}
