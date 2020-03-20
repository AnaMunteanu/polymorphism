/*
 * RepoBase.h
 *
 *  Created on: May 20, 2019
 *      Author: user
 */

#ifndef REPOBASE_H_
#define REPOBASE_H_


#include <iostream>
#include "Exception.h"
#include"Spectacol.h"


class RepoBase{
protected:
	int size;
	Spectacol* *elements;
public:
	RepoBase();
	RepoBase(const RepoBase &r);
	~RepoBase();
	RepoBase& operator=(const RepoBase &r);
	int getSize();
	Spectacol* getElem(int);
	void addElem(Spectacol* el);
	void update(Spectacol*, int);
	virtual void loadFromFile(char*)=0;

};


#endif /* REPOBASE_H_ */
