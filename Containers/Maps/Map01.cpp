// demonstration of map - created by r j baldwin 17/07/2023

#include <iostream>
#include <map>
#include <string>


class CityRecord
{
public:
	CityRecord() = default;
	CityRecord(std::string city, double pop):mCity{city}, mPop{pop}{}


	friend std::ostream& operator<<(std::ostream& os, const CityRecord& rec);

private:
	std::string mCity{};
	double mPop{};

};

std::ostream& operator<<(std::ostream& os, const CityRecord& rec)
{
	os << rec.mCity << ", " << rec.mPop << '\n';
	return os;
}



int main()

{ 
	std::map<std::string, CityRecord> m;
	m["Manchester"] = CityRecord{ "Manchester", 2.500000 };
	m["Udine"] = CityRecord{ "Udine", 38000 };

	// iterate over the map and print

	for (const auto& pair : m)
	{
		std::cout << pair.first << ": " << pair.second << '\n';
	}

}