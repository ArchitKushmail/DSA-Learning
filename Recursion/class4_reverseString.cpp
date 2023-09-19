#include <bits/stdc++.h> 
void reverse(string &str,int i, int e){
	// Base-case
	if(i>e){
		return;
	}

	// Processing
	swap(str[i],str[e]);
	i++;
	e--;

	// Recursive Call
	reverse(str,i,e);
}
string reverseString(string str)
{
	// Approach-1 using Loops
 	//int i = 0;
	//int j = str.length()-1;
	// while(i<j){
	// 	swap(str[i],str[j]);
	// 	i++;
	// 	j--;
	// }


	// Approach-2 using Recursion
	reverse(str,0,str.length()-1);
	return str;

}