
// bool check(vector<int> arr){
// int n=arr.size();
// int s=0;
// int e=n-1;
// while(s<=e){
// 	if(arr[s]!=arr[e]){
// return 0;
// 	}
// 	s++;
// 	e--;
// }
// return -1;
// }


// bool isPalindrome(Node *head)
// {
//     // write your code here
// 	vector<int> arr;
// 	Node *temp=head;
// 	while(temp!=NULL){
// 		arr.push_back(temp->data);
// 		temp=temp->next;
// 	}
// 	return check(arr);

// }
#include<iostream>
#include<stack>
#include<limits.h>
#include<vector>
using namespace std;

 int largestRectangle(vector < int > & heights) {
  
  int n=heights.size();

  vector<int>left;
  stack<int>st;

  for(int i=0;i<n;i++){

    int curr=heights[i];

    int area=0;
    while(st.top()>=curr){
      area+=curr;
      st.pop();
    }
    left[i]=area;
    st.push(curr);
  }

////////////////////////////////////////////
vector<int>right;
  stack<int>st1;

  for(int i=n-1;i<=0;i--){

    int curr=heights[i];

    int area=0;
    while(st1.top()>=curr){
      area+=curr;
      st.pop();
    }
    right[i]=area;
    st.push(curr);
  }

  int ans=INT_MIN;

  for(int i=0;i<n;i++){
    int sum=left[i]+right[i]+heights[i];
    if(ans<sum){
      ans=sum;
    }
  }

    return ans;  
  
 }

int main(){
int arr=[];


}



















