//Trying to create a binary Tree and able to show all members of it from left to right
#include<iostream>
using namespace std;
class node
{
	public:
	int key;
	node *left;
	node *right;
	void rootNode(string temp)
	{
		//node n;
		string command;
		cout<< "-----------------Please enter Value for " << temp <<" Node:";
		cin >> n.key;
		if(n.leftValueExists(n.key))
		{
			//cout << "-----------------Please enter Left Value for Root Node as " << n.key ":";
			n.insertNode(n.left, "Left");
		}
		if(n.righValueExists(n.key))
		{
				//cout << "-----------------Please enter Right Value for Root Node as " << n.key ":";
				n.insertNode(n.right, "Right");
		}
		
		display(n);
	};
	
	void display(node n)
	{
		node i;
		cout << "Displaying Tree";
		for( i=n
		;i.left==NULL || i.right==NULL
	
		//;i=incrementfor(i.left),j=incrementfor(j.right))
		{
			cout << "\n";
			cout << i.key ;
			cout << "\n";
			cout << i.left << "\t";
			cout << "\t" << j.right;
		}
	};
	node incrementfor(node *n)
	{
		if(n->key != NULL)
		{return *n;}
	};
	
	void insertNode(node *NewNode, string temp)
	{
		NewNode->rootNode(temp);
	};
	bool leftValueExists(int num)
	{
		char leftvalue;
		cout << "Does Left value for Root Node " << num << " Exists[Enter in the form of y/n(lower case)]:";
		cin >> leftvalue;
		if(leftvalue=='y')
		return true;
		else
		return false;
	};
	
		bool righValueExists(int num)
	{
		char rightvalue;
		cout << "Does Right value for " << num << "Exists[Enter in the form of y/n(lower case)]:";
		cin >> rightvalue;
		if(rightvalue=='y')
		return true;
		else
		return false;
	};
};
int main()
{
	node n;
	node temp;
	n.rootNode("First");
	//n.display(temp);
}
