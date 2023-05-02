#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

Node* newNode(int val){
	Node* temp= new Node();
	temp->data= val;
	temp->next= NULL;
	return temp;

}

Node* createLL(vector<int>arr, int n){
	Node* head= newNode(arr[0]);
	Node* temp= head;

	for(int i=1;i<n;i++){
		Node* temp1= newNode(arr[i]);
		temp->next=temp1;
		temp=temp1;

	}
	return head;
}

void display(Node* head){
	Node* temp= head;

	while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp=temp->next;
	}
	cout<<"Null"<<endl;
}


Node* deleteLL(Node* head, int val){
	Node* temp= head;
	Node* second= NULL;

	// if(head->data=val){
	// 	temp= head->next;
	// 	delete head;
	// 	return temp;
	// }

	if(head->data==val){
		head=head->next;
		delete temp;
		return head;
	}

	while(temp!=NULL){
		if(temp->data==val){
			second->next= temp->next;
			delete temp;
			break;
		}
		second=temp;
		temp=temp->next;
	}
	return head;

} 


signed main(){

	vector<int>arr={1,2,3,4,5,6,7,8,9};
	int n= arr.size();


	Node* ll=createLL(arr,n);
	display(ll);

	ll = deleteLL(ll,5);
	display(ll);

}