# include <iostream >     //Include the header file with the required definitions
using namespace std;      //Use the namespace here to call functions(eg. cout, endl, ...) more easily in the following code 

int GetFibonacci(int n)   //GetFibonacci function. Input an integer(n). Return an interger.
{
	unsigned int i = 0, j = 1, t, k;  //Declaration and definition. i, j, t, k are all integers. Here i is the 0th number of the Fibonacci sequence, while j is the 1st number of the Fibonacci sequence.
	for (k = 0; k <= n; ++k)   //For loop. Initialize k to be 0. Add 1 to k after operations in the braces below and check if k is smaller or equal to n. If not, quit the loop. 
	{
		t = i + j;     //Add i and j, then let t equals to the sum
		i = j;         //Let i equals to j
		j = t;         //Let j equals to t
	}
	return j;          //Return the value of j to where this function is called
}

int main(int argc, char *argv[])    //Main function, the entry point of this program
{
	int p = GetFibonacci(10);    //Declaration and definition. p is an integer. Call the GetFibonacci function with input 10 to get a result and let p equals to the result. 
	cout << p << endl;           //Output the value of p, then inserts a new-line character and flushes the stream.
}