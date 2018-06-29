#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int a, b;
    cout << "Please input two integers: " << endl;
    while (cin >> a >> b){
    	try{
    	    if (b == 0) throw runtime_error("divisor is 0!");
    	    cout << static_cast<double>(a) / b << endl;
    	    cout << "Please input two integers: " << endl;
    	}
		catch (runtime_error err){
			cout << err.what();
			cout << "\nTry Again ? Enter y or n:" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}	
    }
	return 0;
}

