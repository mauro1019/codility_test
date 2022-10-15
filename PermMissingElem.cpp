// PermMissingElem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//An array A consisting of N different integers is given.The array contains integers
//in the range[1..(N + 1)], which means that exactly one element is missing.
//
//Your goal is to find that missing element.
//
//Write a function :
//
//int solution(vector<int>& A);
//
//that, given an array A, returns the value of the missing element.
//
//For example, given array A such that :
//
//A[0] = 2
//A[1] = 3
//A[2] = 1
//A[3] = 5
//the function should return 4, as it is the missing element.
//
//Write an efficient algorithm for the following assumptions :
//
//N is an integer within the range[0..100, 000];
//the elements of A are all distinct;
//each element of array A is an integer within the range[1..(N + 1)].

//Find the missing element in a given permutation.

#include <iostream>
#include <vector>
using namespace std;
//
//int solution(vector<int>& A)
//{
//
//	int result = 0;
//	int count;
//	int n = A.size();
//	cout << "Size of vecor  " << n << "\r\n";
//
//	if (n <= 1)
//		return n + 1;
//
//
//	for (int i = 1; i < (n + 1); i++)
//	{
//		cout << "i=" << i << "\r\n";
//		int j;
//		count = 0;
//		for (j = 0; j < n; j++)
//		{
//			cout << "i=" << i << "//" << "j=" << j << " -- " << "A[" << j << "]" << "=" << A[j];
//			if (i == A[j])
//			{
//				count = 0;
//				cout << "   encontre el numero  " << i << "\r\n";
//			}
//			else
//			{
//				count++;
//				cout << " next ---->" << "count =" << count << "\r\n";
//			}
//
//			if (j + 1 == n && count == n)
//			{
//				cout << " ohh "
//					<< "\r\n";
//				result = i;
//			}
//		}
//	}
//
//	return result;
//}

int solution(vector<int>& A) {
	int result = 0;
	int count = 0;
	int count2 = 0;
	int j = 1;
	int n = A.size();
	cout << "Size of vecor  " << n << "\r\n";

	//if (n <= 1)
	//	return n + 1;

	for (int i = 1; i < n + 1; i++) {
		count += A[i - 1];	
		count2 = count2 + j;
		j++;
	}
	//for (int j = 0; j <= n + 1; j++) {
	//	count2 =count2+j;
	//}
	count2 = count2 + j;


	cout << "count2= " << count2 << " --- " << "count" << count;

	return (count2 - count);

}

// Driver code
int main()
{
	vector <int> A{2};
	cout << "\r\nEl elemento faltante es " << solution(A);
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
