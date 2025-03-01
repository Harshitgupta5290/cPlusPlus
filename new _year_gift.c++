/*New Year Gifts

Problem Statement

Every year in School during the new year time, the teacher conducts an event for the students called 
New year card to increase the friendship among students.

Student roll numbers from 1 to n take part in the event total n number of students. Each Student i is
 assigned a different Student Si, to which Student i has to make a new year greeting card. 
 Each student is assigned to exactly one other Student, and nobody is assigned to themselves. 
 In other words, all Si must be distinct integers between 1 and n, and for any i, Si≠i must hold.

Every year these assignments were done by the teacher but this year due to the covid-19 situation as the 
teacher was busy with other School work. All the students have been asked to whom they wish to make a card.

Every student (ith) wishes to make a card for jth student. While i!=j , means a student cannot wish to give himself a card,
and every student has to wish for exactly 1 out of the n-1 remaining students.

Find a valid assignment S that maximizes the number of fulfilled wishes of the Students.

 
Input format


The first line of the input gives the number of test cases T to be answered. First-line integer N size of the array

The next line contains N space-separated integers representing the wishes of the students in order 1 to n.

 

Output format

 

In each separate line print the maximum number of students whose wishes will be fulfilled.

 

Constraints:

 

1<= T<= 1000

1<= N<= 10^5

1<= Array[i] <= N

Sum of N over all the test cases does not exceed 10^5.

 

SAMPLE INPUT:

 

1

7

6 4 6 2 4 5 6

 

SAMPLE OUTPUT:

 

4

 

EXPLANATION:

 

In this permutation, 4 students will be happy which is the maximum there can be other permutations as well
 but not with more than 4 students will be happy in any order.

One of the permutations can be [6 ,4 ,7, 2 ,3 ,5 ,1] or [3,4,6,2,1,5,7]

 

Things to Note for the Candidate: You can use your own IDE like Visual Studio Code, Eclipse, 
or any other IDE that you are comfortable with to build your solution code.

The IDE provided on the platform is purely for submission. Avoid using the IDE for coding out the solution.

Test against any custom input in your own IDE. In the IDE provided on the platform, you cannot pass custom test 
cases and see the output.

Use standard input and standard output in your program for the IDE to run the test cases smoothly against your code.
 We are giving a sample problem statement along with a solution that will pass the test cases in the IDE. -
 Sample Problem Statement (Right Click and Open in New Tab to view.)
*/
#include<iostream>
using namespace std;
int countDistinct(int arr[], int n)
{
    int res = 1;
    for(int i=1; i<n;i++){
        int j=0;
        for(j=0; j<i;j++)
              if(arr[i] == arr[j])
                break;
         if(i==j)
           res++;       
    }
    return res;
}
 int main(){
    int test, j =0;
    cin >> test;
    for(int i=0; i<test; ++i){
        int n;
        cin>> n;
        int arr[10];
        for(int i=0; i<n; ++i){
            cin>> arr[i];
        }
        int ans[100];

        ans[j]= countDistinct(arr,n);
        j++;
        for(int i=0;i<n;++i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }