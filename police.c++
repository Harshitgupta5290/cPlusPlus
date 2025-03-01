/*Police of Berland
Question Name: Police Of Berland



Problem Statement



Today is Christmas eve and the citizens of Berland are in a mood to party. But not every citizen can party because some of them are engineers and they have to go to work the next morning.

The city of Berland has N houses lined in a row from 1 to N. You are given an array A. If Ai is 1, then an engineer lives in the ith house, else if Ai is 0, then a non-engineer lives in the ith house.

All non-engineers are playing Christmas songs in high volume. An engineer in the ith house can’t sleep if both of its neighbours are non-engineers and are playing songs.

More specifically if 1<i<N, Ai-1 = 0, Ai = 1, Ai+1 = 0, then the engineer in the ith house can’t sleep because of loud music.

The city of Berland cares for its engineers as they are the building blocks of a nation. So they want their engineers to sleep well on Christmas eve and come to work the next morning. For this, the Police department of Berland has got the task to stop some of the citizens from playing music. But the police wants to bother as few citizens as possible and has come to you for help.

Given array A, print the minimum number of citizens whom the police must intervene from playing music so that none of the engineers is disturbed.



Input Format



First line contains a single integer denoting N.
Next line contains N space separated integers. If ith of these integers is 1 then an engineer lives in the ith house, else if it is 0, then a non-engineer lives in the ith house.


Output Format



Print the minimum number of citizens whom the police must intervene from playing music so that none of the engineers is disturbed.


Constraints



3<=N<=105
Ai is either 0 or 1.


Sample Input 1



6

0 0 1 0 1 0



Sample Output 1



1



Explanation of Sample 1



Police can intervene with the 4th citizen to turn off the music. This way none of the engineers get disturberd.



Things to Note for the Candidate: You can use your own IDE like Visual Studio Code, Eclipse, or any other IDE that you are comfortable with to build your solution code.

The IDE provided on the platform is purely for submission. Avoid using the IDE for coding out the solution.

Test against any custom input in your own IDE. In the IDE provided on the platform, you cannot pass custom test cases and see the output.

Use standard input and standard output in your program for the IDE to run the test cases smoothly against your code. We are giving a sample problem statement along with a solution that will pass the test cases in the IDE. - Sample Problem Statement (Right Click and Open in New Tab to view.)
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i=0; i<n; i++){
	cin>>a[i];
}
int cnt=0;
for(int i=1; i<n-1; i++){
	if(a[i]==0 and a[i-1] == 1 and a[i+1] == 1){
		a[i-1] = 0;
		a[i+1] = 0;
		i += 1;
		cnt++;
	}
}
for(int i=0; i<n; i++){
	if(a[i] == 1 and a[i+1] == 0){
		a[i] = 0;
		i += i;
		cnt++;
	}
	else if(a[i] == 0 and a[i+1] == 1){
		a[i+1] = 0;
		i += 1;
		cnt++;
	}
}
cout<< cnt << endl;
}