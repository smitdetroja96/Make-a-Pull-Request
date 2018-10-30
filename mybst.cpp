#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <string>
#include <vector>


#include <iostream>
#include <algorithm>
using namespace std;


template<typename E>
class node
{
public :

    E data;
    node *l;
    node *r;

    node(const E& datavalue, node *lpointer =NULL, node *rpointer=NULL)
    {
        data = datavalue;
        l = lpointer;
        r = rpointer;
    }
};

template<typename E>
class bst : public node<E>
{
    node<E> *head;
   // node<E> *currentElement;

public:

    bst()
    {
        head  = NULL;
    }

    int newnode(E key)
    {
        node<E> * temp = new node<E>(key,null,null);
        return temp;
    }

    void insert(node<E> *head, const E& data)
    {
        if(head==null)
            return newnode(data);
            else if(data < head->info)
                insert(head->l,data);
            else if(data > head->info)
                insert(head->r,data);
    }

};

int main(){


	int a;
	int choice=0;
	int data;
	bst<int> tree;
	cout<<"1. Insert Element \n 2. Delete Element \n 3. Inorder printing \n 4. Preorder printing \n 5. Postorder Printing \n";
	while(choice!=6)
	{
	cout<<"Enter your choice:";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
	case 1:
	cout<<"Enter the number to insert:";
	cin>>data;
	tree.insert(head,data);
	cout<<endl;
break;

	case 2:
	cout<<"Enter the number to detete:";
	cin>>data;
	//tree->setroot(tree->treedelete(tree->getroot(),data));
	cout<<endl;
	break;
	case 3:
	//tree->inorder(tree->getroot());
	cout<<endl;
	break;
	case 4:
	//tree->preorder(tree->getroot());
	cout<<endl;
	break;
	case 5:
	tree->postorder(tree->getroot());
	cout<<endl;
	break;
	}
	}

    return 0;
}












