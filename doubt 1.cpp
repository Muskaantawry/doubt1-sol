#include <iostream>
using namespace std;

int main()
{
	int a;
	long b;
	char c;
	float d;
	double e;
	cin >> a>>b>>c>>d>>e ;
    
    cout << a <<"\n" << b <<"\n" << c <<"\n" ;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(3);
    
    cout<< d <<"\n";
    
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    
    cout<< e <<"\n" ;
    return 0;
}
