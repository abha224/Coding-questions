//problem link: https://www.interviewbit.com/problems/repeat-and-missing-number-array/
// a math based solution

vector<int> Solution::repeatedNumber(const vector<int> &a) 
{
    long  sum1 = 0;
	long  sum2 = 0;
	
	for (int i = 0; i < a.size(); i++)
	{
		sum1 += a[i] - (i + 1);
		sum2 += (long(a[i] * a[i])) - long((i + 1)* (i + 1));		
	}
	
	long  b = (sum2 - sum1*sum1) / (2.0 * sum1);
	long  x = sum1 + b;
	
	return vector<int>{int(x), int(b)};
}
