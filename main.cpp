#include "Node.h"
#include "List.h"
#include <iostream>
#include <string>
#include <fstream>



int main(int argc, char** argv)
{
    std:: string path = argv[1];
    std::string line;
    std::ifstream f;
    int delete_value;
    List new_list = List();
    f.open(path);
    if (!f.is_open()) 
    {
        std::cerr << "error open file" << std::endl;
        return 0;
    }
    while(!f.eof())
    {
        try 
        {
            f >> line;
            delete_value = std::stoi(line);
            new_list.AddElement(new Node(delete_value));
        }
        catch (...)
        {
            std::cerr << "Wrong file format" << std::endl;
            return -1;
        }
    }
    
    std::cout << delete_value << std::endl;
 

    f.close();
    new_list.Delete_node(delete_value);
    std::cout << new_list.coutString() << std::endl;
  

    //Node node1 = Node(7);
    //Node node2 = Node(6);
    //Node node1 = Node(6);
    //std::cout << node1.ToString() << std::endl;
    //Node* point1 = new Node(5); 
    //Node* point2 = new Node(4);
    //Node* point3 = new Node(7);
    //Node* point4 = new Node(9);
    ////List new_list = List();
    //new_list.AddElement(point1);
    //new_list.AddElement(point2);
    //new_list.AddElement(point3);
    //new_list.AddElement(point4);
    //new_list.Delete_node(5);
    //std::cout << new_list.coutString() << std::endl;
    return 0;
}