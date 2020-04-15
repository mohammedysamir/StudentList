#include"StudentList.h"
StudentList::StudentList() {
	front = end = NULL;
	length = 0;
}
void StudentList::search(int id) {
	if (length == 0)
		cout << "empty List" << endl;
	else {
		bool Found = false;
		Node* current = front;
		while (current != NULL) {
			if (current->item.get_ID() == id) {
				cout << current->item << endl;
				Found = true;
				break;
			}
			current = current->next;
		}
		if (Found == false) 
			cout << "this ID is not found" << endl;
	}
}
void StudentList::insert(Student s) {
	Node* newnode = new Node;
	newnode->item = s;
	if(length==0){
		front = end = newnode;
		newnode->next = NULL;
	}
	else if(length!=0&&newnode->item.get_ID()<front->item.get_ID()){
		newnode->next = front;
		front = newnode;
	}
	else {
		Node* current = front->next;
		Node* pre = front;
		/*		f/         p/e  c
				1	2 (5) 6 7
		*/
		while (newnode->item.get_ID() > current->item.get_ID()&&current!=end)
		{
			pre = pre->next;
			current = current->next;
		}
		if(current==end)
		{
			//changed this condition
			pre = current;
			current = current->next;
			pre->next = newnode;
			end = newnode;
			newnode->next=NULL;
		}
		if(current!=NULL) {
			pre->next = newnode;
			newnode->next = current;
		}

	}
	length++;
}
void StudentList::Delete(int id) {
	Node* pre = front;
	Node* current = pre->next;
	bool Found = false;
	if (length == 0)
		cout << "empty List" << endl;
	//changed this part ..to check if it's just one element
	 else if(length == 1&& pre->item.get_ID() == id) {
		front = end = NULL;
		length = 0;
		Found = true;
	}
	//to check first element and delete it 
	 else if (pre->item.get_ID()==id) {
		front = front->next;
		delete pre;
		Found = true;
		length--;
	}
	//
	else {
		while (current != NULL) {
			if (current->item.get_ID() == id) {
				pre->next = current->next;
				delete current;
				Found = true;
				length--;
				break;
			}
			pre = pre->next;
			current = current->next;
		}
	}
	if (Found == false)
		cout << "this Student is not found" << endl;
	
}

void StudentList::Display() {
	if (length == 0)
		cout << "empty List" << endl;
	else {
		Node* current = front;
		cout << "[";
		while (current != NULL) {
			cout << current->item<<",";
			current = current->next;
		}
		cout << "]" << endl;
	}
}