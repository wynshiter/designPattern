// designPattern.cpp: 定义应用程序的入口点。
//
#include "designPattern.h"
#include "Structural\Adapter\Adapter.h" 

using namespace std;

int main(int argc, char* argv[])
{
	cout << __cplusplus << endl; // 比如我的 C++ 版本是 199711，对比下面的参数是 C++98
	//Adapter* adt = new Adapter(); 
	Target* adt = new Adapter();
	adt->Request();
	return 0;
}
