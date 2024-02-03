//#include<iostream>
//using namespace std;
//class googlrMail {
//public:
//	struct node {
//		int data;
//		node* next;
//		node(int value) {
//			data = value;
//			next = NULL;
//		}
//	};
//	node* read;
//	node* unread;
//	node* trash;
//	//this is constructor
//	googlrMail() {
//		read = unread = trash = NULL;
//	}
//	//add message to unread section
//	void addNodeToUnread(int value) {
//		node* n = new node(value);
//		node* temp = unread;
//		if (temp == NULL)
//		{
//			unread= n;
//			return;
//		}
//		while (temp->next!=NULL)
//		{
//			temp = temp->next;
//		}
//		temp->next = n;
//	}
//	//now make a function for actions
//	void actions(int action, int value) {
//		if (action != 1 && action != 2 && action != 3 && action != 4)
//		{
//			cout << "You entered a wrong action :)" << endl;
//			return;
//		}
//		//case 1
//		if (action == 1)
//		{
//			//check the message exists or not
//			bool found= false;
//			node* temp0 = unread;
//			while (temp0!= NULL) {
//				if (temp0->data == value)
//				{
//					found = true;
//				}
//				temp0 = temp0->next;
//			}
//			if (found == false)
//			{
//				cout << "The message id u entered is not exists :)" << endl;
//				return;
//			}
//			//move the unread message to read
//			node* n = new node(value);
//			node* temp = read;
//			if (temp == NULL)
//			{
//				read = n;
//			}
//			else {
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = n;
//			}
//			//remove message from unread section
//			node* temp2 = unread;
//			node* prev2 = NULL;
//			while (temp2 != NULL)
//			{
//				if (temp2->data == value)
//				{
//					if (prev2 == NULL)
//					{
//						unread = temp2->next;
//					}
//					else
//					{
//						prev2->next = temp2->next;
//					}
//					delete temp2;
//					return;
//				}
//				prev2 = temp2;
//				temp2 = temp2->next;
//			}
//		}
//		//case 2
//		if (action == 2)
//		{
//			//check the message exists or not
//			bool found = false;
//			node* temp0 = read;
//			while (temp0 != NULL) {
//				if (temp0->data == value)
//				{
//					found = true;
//				}
//				temp0 = temp0->next;
//			}
//			if (found == false)
//			{
//				cout << "The message id u entered is not exists :)" << endl;
//				return;
//			}
//			//move the read message to trash
//			node* n = new node(value);
//			node* temp = trash;
//			if (temp == NULL)
//			{
//				trash = n;
//			}
//			else {
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = n;
//			}
//			//remove message from unread section
//			node* temp2 = read;
//			node* prev2 = NULL;
//			while (temp2 != NULL)
//			{
//				if (temp2->data == value)
//				{
//					if (prev2 == NULL)
//					{
//						read = temp2->next;
//					}
//					else
//					{
//						prev2->next = temp2->next;
//					}
//					delete temp2;
//					return;
//				}
//				prev2 = temp2;
//				temp2 = temp2->next;
//			}
//		}
//		//case 3
//		if (action == 3)
//		{
//			//check the message exists or not
//			bool found = false;
//			node* temp0 = unread;
//			while (temp0 != NULL) {
//				if (temp0->data == value)
//				{
//					found = true;
//				}
//				temp0 = temp0->next;
//			}
//			if (found == false)
//			{
//				cout << "The message id u entered is not exists :)" << endl;
//				return;
//			}
//			//move the unread message to trash
//			node* n = new node(value);
//			node* temp = trash;
//			if (temp == NULL)
//			{
//				trash = n;
//			}
//			else {
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = n;
//			}
//			//remove message from read section
//			node* temp2 = unread;
//			node* prev2 = NULL;
//			while (temp2 != NULL)
//			{
//				if (temp2->data == value)
//				{
//					if (prev2 == NULL)
//					{
//						unread = temp2->next;
//					}
//					else
//					{
//						prev2->next = temp2->next;
//					}
//					delete temp2;
//					return;
//				}
//				prev2 = temp2;
//				temp2 = temp2->next;
//			}
//		}
//		//case 4
//		if (action == 4)
//		{
//			//check the message exists or not
//			bool found = false;
//			node* temp0 = trash;
//			while (temp0 != NULL) {
//				if (temp0->data == value)
//				{
//					found = true;
//				}
//				temp0 = temp0->next;
//			}
//			if (found == false)
//			{
//				cout << "The message id u entered is not exists :)" << endl;
//				return;
//			}
//			//move the trash message to read
//			node* n = new node(value);
//			node* temp = read;
//			if (temp == NULL)
//			{
//				read = n;
//			}
//			else {
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = n;
//			}
//			//remove message from read section
//			node* temp2 = trash;
//			node* prev2 = NULL;
//			while (temp2 != NULL)
//			{
//				if (temp2->data == value)
//				{
//					if (prev2 == NULL)
//					{
//						trash = temp2->next;
//					}
//					else
//					{
//						prev2->next = temp2->next;
//					}
//					delete temp2;
//					return;
//				}
//				prev2 = temp2;
//				temp2 = temp2->next;
//			}
//		}
//	}
//	//displays function;
//	void displayUnread()
//	{
//		cout << "Unread Messages:" << endl;
//		node* temp = unread;
//		if (temp == NULL) {
//			cout << "Empty" << endl;
//		}
//		while (temp != NULL)
//		{
//			cout << temp->data << "->";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void displayread()
//	{
//		cout << "Read Messages:" << endl;
//		node* temp = read;
//		if (temp == NULL) {
//			cout << "Empty" << endl;
//		}
//		while (temp != NULL)
//		{
//			cout << temp->data << "->";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void displayTrash()
//	{
//		cout << "Trash Messages:" << endl;
//		node* temp = trash;
//		if (temp == NULL) {
//			cout << "Empty" << endl;
//		}
//		while (temp != NULL)
//		{
//			cout << temp->data << "->";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	googlrMail obj;
//	for (int i = 0; i < 10; i++)
//	{
//		obj.addNodeToUnread(i + 1);
//	}
//	cout << "---------------------------------------------------------------------------" << endl;
//	obj.displayUnread();
//	cout << endl;
//	obj.displayread();
//	obj.displayTrash();
//	cout << "---------------------------------------------------------------------------" << endl;
//	int a, id;
//	do
//	{
//		cout << "Entere the action u wanna perform along with value Format(1 2):";
//		cin >> a >> id;
//		obj.actions(a, id);
//		cout << "\n---------------------------------------------------------------------------" << endl;
//		obj.displayUnread();
//		obj.displayread();
//		obj.displayTrash();
//		cout << "---------------------------------------------------------------------------" << endl;
//	} while (a!=-1);
//	return 0;
//}