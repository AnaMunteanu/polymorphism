/*
 * RepoHtml.h
 *
 *  Created on: May 20, 2019
 *      Author: user
 */

#ifndef REPOHTML_H_
#define REPOHTML_H_


#include"RepoBase.h"

class RepoHtml:public RepoBase{

public:
	RepoHtml();
	RepoHtml(const RepoHtml &r);
	~RepoHtml();
	void loadFromFile(char*);

};


#endif /* REPOHTML_H_ */
