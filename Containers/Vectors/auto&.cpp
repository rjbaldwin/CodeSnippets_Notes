
// demonstration of auto& for iteration 

#include <iostream>
#include <vector>
using namespace std;

class Data
{
public:

	Data() = default;
	Data(int num, string nam);

	friend ostream& operator<<(ostream& os, Data& data);
	

private:
	int mNumber{};
	string mName{};
};

Data::Data(int num, string nam)
	:mNumber{num},
	mName{nam}{}



ostream& operator<<(ostream& os, Data& data)
{
	os << "Number: " << data.mNumber << '\n';
	os << "Name: " << data.mName << '\n';
	return os;
}



int main()
{
	Data record01(123, "robert");
	Data record02(1253, "tony");
	Data record03(1453, "pritpal");
	
	vector<Data>v;
	v.push_back(record01);
	v.push_back(record02);
	v.push_back(record03);

	
	
	for (auto& i : v)
		cout << i << endl;

}


