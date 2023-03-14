#include <iostream>
using namespace std;
 
void func(void* i)
{
	cout << "func1" << endl;
}
 
void func2(int i)
{
	cout << "func2" << endl;
}
 
int main(int argc,char* argv[])
{
	func(NULL);
	func(nullptr);
    int *p = NULL;
    *p = 5;
    cout << *p << endl;
	// getchar();
}