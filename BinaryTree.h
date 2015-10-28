/*
 * BinaryTree.h
 *
 *  Created on: 2015Äê10ÔÂ28ÈÕ
 *      Author: wubian
 */

#ifndef BINARYTREE_H_
#define BINARYTREE_H_


#include <iostream>
#include "SrcPoint.h"

using namespace std;

class BinaryNode
{
public:
	BinaryNode():
		left(NULL),
		right(NULL),
		sp(NULL)
    {}
	BinaryNode(
			SrcPoint* s,
			BinaryNode* l,
			BinaryNode* r)
	{
		sp    = s;
		left  = l;
		right = r;
	}

	~BinaryNode()
	{	}

	BinaryNode* left;
	BinaryNode* right;

	SrcPoint*   sp;
};

class BinaryTree
{
public:

	BinaryTree():
		root(NULL)
    {

    }

	~BinaryTree()
	{

	}

	void BuildTree(const Container& can);



	BinaryNode* root;



private:

	void Sort(const Container& ori,Container& dstCan);




};


#endif /* BINARYTREE_H_ */
