/*Write a function : vector<string> solution(vector<string>& A, vector<string>& B)
That, when passed 2 vectors of names, it will return a vector containing the names that
appear in either or both vectos. The returned vector should have no duplicates*/
#include <iostream>
#include <sstream>
#include <string>
#include<vector>
#include <algorithm>


using namespace std;


vector<string> concat(vector<string>& a, vector<string>& b) {
	vector<string> ret = vector<string>();
	copy(a.begin(), a.end(), back_inserter(ret));
	copy(b.begin(), b.end(), back_inserter(ret));
	return ret;
}

vector<string> solution(vector<string>& A, vector<string>& B)
{
	vector<string> sol = concat(A, B);
	sort(sol.begin(), sol.end());
	sol.erase(unique(sol.begin(), sol.end()), sol.end());

	return sol;
}



int main()
{
	int names1, names2;
	string name;

	cout << "How many names do you want to place in the 1st vector?";
	cin >> names1;
	cout << "How many names do you want to place in the 2nd vector?";
	cin >> names2;

	vector<string> stn1;
	vector<string> stn2;

	for (int i = 0; i < names1; i++)
	{
		cout << "Enter " << i + 1 << " name in the 1st vector: ";
		cin >> name;
		stn1.push_back(name);
	}
	for (int i = 0; i < names2; i++)
	{
		cout << "Enter " << i + 1 << " name int the 2nd vector: ";
		cin >> name;
		stn2.push_back(name);
	}
	cout << "1st vector elements are : " << endl;
	for (string x : stn1)
		std::cout << x << std::endl;
	cout << "2nd vector elements are : " << endl;
	for (string y : stn2)
		std::cout << y << std::endl;

	vector<string> stn3 = solution(stn1, stn2);
	cout << "3rd vector with unique elements from the 1st and 2nd vector : " << endl;
	for (string z : stn3)
		std::cout << z << std::endl;

	return 0;
}