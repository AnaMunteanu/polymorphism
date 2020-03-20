/*
 * Tests.h
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#ifndef TESTS_H_
#define TESTS_H_

class Tests{
	public:
		bool testConstructorWithoutPar();
		bool testConstructorWithPar();
		bool testCopyConstructor();
		bool testOperatorEq();
		bool testGetNrDisponibile();
		bool testGetNrVandute();
		bool testGetLoc();
		bool testGetData();
		bool testSetNrDisponibile();
		bool testSetNrVandute();
		bool testSetData();
		bool testSetLoc();
		bool runSpectacolTests();

		bool filmConstrWithoutPar();
		bool filmConstrWithPar();
		bool filmCopyConstr();
		bool filmOperatorEq();
		bool filmGetNume();
		bool filmGetActori();
		bool filmSetNume();
		bool filmSetActori();
		bool runFilmTests();

		bool artistConstrWithoutPar();
		bool artistConstrWithPar();
		bool artistCopyConstr();
		bool artistOperatorEq();
		bool artistGetName();
		bool artistSetName();
		bool runArtistTests();

		bool testRepoAddElem();
		bool testRepoGetAll();
		bool testRepoUpdate();
		bool runRepoTests();


};




#endif /* TESTS_H_ */
