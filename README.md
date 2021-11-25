# TreeDisplay
A simple header file that prints out a tree in an easy to read format

## Usage
In order to use the header file you must first make 2 changes to your Tree:

CHANGE 1:
The Children of each node must be a std::vector and have the name "children" (eg ```std::vector<node> children;```).

CHANGE 2:
You must override the << operator, this is what prints out each each "leaf" of the tree (ie this is the information you want to see from each node).
Sample override:

## Example Node Class
```
class Node{
public:
	int value;
	Node(int n) : value(n){}

	std::vector<Node> children;
  
	friend std::ostream& operator<<(std::ostream& os, const Node& n){
	  return os << n.value;
	}
};
```
## Outputting the Tree

Now to print out the tree first include the TreeDisplay.h in your file, then use ```TreeDisplay::print(Node *N);```, where N is the base node of the tree.
This results in an ouput that looks like:
```
3
├─2
│  ├─1
│  │  └─0
│  └─1
│     └─0
├─2
│  ├─1
│  │  └─0
│  └─1
│     └─0
└─2
   ├─1
   │  └─0
   └─1
      └─0

```
