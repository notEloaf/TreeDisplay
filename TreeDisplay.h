#include <iostream>
#include <string>

class TreeDisplay{
public:
	template<class T>
	static void print(T *baseNode){
		std::cout << *baseNode << std::endl;
		for(int i = 0; i < baseNode->children.size(); i++){
			bool L = i== baseNode->children.size()-1 ? true : false;
			printchildren(&baseNode->children[i], "", L);
		}
	}
private:
	TreeDisplay();
	template<class T>
	static void printchildren(T *node, std::string prefix, bool last){
		std::cout << prefix + (last ? "└─" : "├─") << *node << std::endl;
		for(int i = 0; i < node->children.size(); i++){
			bool L = i== node->children.size()-1 ? true : false;
			std::string test = prefix;
			printchildren(&node->children[i],prefix + (last ? "   " : "│  ") , L);
		}
	}
};