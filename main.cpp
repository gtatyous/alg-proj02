/******************************************************
 ** FILE: main.cpp
 **
 ** CLASS:
 ** CSE331
 **
 ** Homework 03 / Project 02
 **
 **
 ** CREATION DATE:
 ** 02/27/2015
 **
 ** NOTES:
 *******************************************************/

#include "bst.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cassert>

using std::string;


int main () 
{
    BST *BST_tree = new BST();
    string key_str;
    int key_int;
    string fileName="";

    std::cout << "Enter the input file name: ";
    std::cin >> fileName;
    std::ifstream infile(fileName);
    //std::assert(infile.is_open());

    while (infile >> key_str)
    {
        key_int = stoi (key_str);
        BST_tree->insert(key_int);
    }  
    
    infile.close();
    BST_tree->preOrder();
    BST_tree->inOrder();
    BST_tree->postOrder();
    delete BST_tree;
    
    return 1;
}
