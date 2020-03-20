//============================================================================
// Name        : lab9.cpp
// Author      : Ana
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include<string>
#include<cstring>
#include "Tests.h"
#include "Spectacol.h"
#include "Exception.h"
#include "RepoClient.h"
#include "UI.h"

int main() {

	Tests t;
	if(t.runSpectacolTests())
		cout<<"all Spectacol tests are ok"<<endl;
	if(t.runFilmTests())
		cout<<"all Film tests are ok"<<endl;
	if(t.runArtistTests())
		cout<<"all Artist tests are ok"<<endl;
	if(t.runRepoTests())
		cout<<"all Repo tests are ok"<<endl;
	cout<<endl;


	UI ui=UI();
	ui.run();

	return 0;
}
