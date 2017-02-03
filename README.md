# List
## Implementing the Vector interface using a linked list.

To get started, you should grab the code from the [vector example](https://github.com/BYUCS235/Vector/tree/master/V1) and make sure it is running in your development environment.

Now we are going to remove the array data structure and replace it with a linked list.  To get started, we will need to insert a "Node" structure for our linked list.
```c++
class MyVector: public VectorInterface<T>
{
private:
	struct Node {
	 T data; // The data we are storing
	 Node* next; // A pointer to the next Node 
	 Node(const T& the_data, Node* next_val = NULL) :
	   data(the_data) {next = next_val; num_items = 0; mylist = NULL;}
	};
	
	Node *mylist;
	int num_items;
```
Notice that the struct was inserted into the "private" part of our class, so it is not visible outside of the class.  Also notice that the constructor for Node is passed a value for the Node and a next pointer.  The constructor initializes the values using an initialization list and an assignment inside the body of the constructor.  At this point, we just have a null pointer "mylist" which means that the list is empty.
