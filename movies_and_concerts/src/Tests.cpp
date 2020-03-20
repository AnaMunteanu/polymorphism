/*
 * Tests.cpp
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#include"Tests.h"
#include"Spectacol.h"
#include"Film.h"
#include"Artist.h"
#include <assert.h>
#include <stdio.h>
#include "RepoCsv.h"

bool Tests::testConstructorWithoutPar(){

	Spectacol s;
	assert(s.getData()=="");
	assert(s.getNrDisponibile()==0);
	return true;
}

bool Tests::testConstructorWithPar(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	assert(s.getData()=="31.08.2019");
	assert(s.getNrDisponibile()==10);
	assert(s.getLoc()=="parc");
	assert(s.getNrVandute()==100);
	return true;

}

bool Tests::testCopyConstructor(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	Spectacol s2(s);
	assert(s2==s);
	return true;
}

bool Tests::testOperatorEq(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	Spectacol s2=s;
	assert(s2==s);
	return true;
}

bool Tests::testGetNrDisponibile(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	assert(s.getNrDisponibile()==10);
	return true;
}

bool Tests::testGetNrVandute(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	assert(s.getNrVandute()==100);
	return true;
}

bool Tests::testGetLoc(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	assert(s.getLoc()=="parc");
	return true;
}

bool Tests::testGetData(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	assert(s.getData()=="31.08.2019");
	return true;
}

bool Tests::testSetNrDisponibile(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	s.setNrDisponibile(15);
	assert(s.getNrDisponibile()==15);
	return true;
}

bool Tests::testSetNrVandute(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	s.setNrVandute(15);
	assert(s.getNrVandute()==15);
	return true;
}

bool Tests::testSetData(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	s.setData("15");
	assert(s.getData()=="15");
	return true;
}

bool Tests::testSetLoc(){

	Spectacol s("31.08.2019", "parc", 10, 100);
	s.setLoc("Ubb");
	assert(s.getLoc()=="Ubb");
	return true;
}
bool Tests::runSpectacolTests(){
	assert(testConstructorWithoutPar() && testConstructorWithPar() &&testCopyConstructor() &&testOperatorEq()
			&& testGetNrDisponibile() && testGetNrVandute() && testGetLoc()&& testGetData() &&testSetNrDisponibile()
			&& testSetNrVandute() && testSetData() && testSetLoc());
	return true;
}

bool Tests::filmConstrWithoutPar(){

	Film f;
	assert(f.getData()=="");
	assert(f.getNrDisponibile()==0);
	assert(f.getActori().size()==0);
	assert(f.getNume()=="");

	return true;
}

bool Tests::filmConstrWithPar(){



	Film f("31.08.2019", "parc", 10, 100, "Orphan", "Leo");
	assert(f.getData()=="31.08.2019");
	assert(f.getNrDisponibile()==10);
	assert(f.getLoc()=="parc");
	assert(f.getNrVandute()==100);
	assert(f.getActori()=="Leo");
	assert(f.getNume()=="Orphan");
	return true;
}

bool Tests::filmCopyConstr(){


	Film f2("31.08.2019", "parc", 10, 100, "Orphan", "Leo");
	Film f(f2);
	assert(f.getData()=="31.08.2019");
	assert(f.getNrDisponibile()==10);
	assert(f.getLoc()=="parc");
	assert(f.getNrVandute()==100);
	assert(f.getActori()=="Leo");
	assert(f.getNume()=="Orphan");
	return true;

}

bool Tests::filmOperatorEq(){

	Film f2("31.08.2019", "parc", 10, 100, "Orphan", "Leo");
	Film f=f2;
	assert(f.getData()=="31.08.2019");
	assert(f.getNrDisponibile()==10);
	assert(f.getLoc()=="parc");
	assert(f.getNrVandute()==100);
	assert(f.getActori()=="Leo");
	assert(f.getNume()=="Orphan");
	return true;
}

bool Tests::filmGetNume(){

	Film f2("31.08.2019", "parc", 10, 100, "Orphan", "Leo");
	assert(f2.getNume()=="Orphan");
	return true;

}

bool Tests::filmGetActori(){


	Film f2("31.08.2019", "parc", 10, 100, "Orphan", "Leo");
	assert(f2.getActori()=="Leo");
	return true;
}

bool Tests::filmSetNume(){

	Film f;
	f.setNume("Orphan");
	assert(f.getNume()=="Orphan");
	return true;
}

bool Tests::filmSetActori(){


	Film f;
	f.setActori("Leo");
	assert(f.getActori()=="Leo");
	return true;
}

bool Tests::runFilmTests(){
	assert(filmConstrWithoutPar() && filmConstrWithPar() &&filmCopyConstr() &&filmOperatorEq()
			&& filmGetNume() && filmGetActori() && filmSetNume() && filmSetActori());
	return true;
}

bool Tests::artistConstrWithoutPar(){

	Artist a;
	assert(a.getData()=="");
	assert(a.getNrDisponibile()==0);
	assert(a.getName()=="");
	return true;
}

bool Tests::artistConstrWithPar(){
	Artist a("31.08.2019", "parc", 10, 100, "Rudimental");
	assert(a.getData()=="31.08.2019");
	assert(a.getNrDisponibile()==10);
	assert(a.getLoc()=="parc");
	assert(a.getNrVandute()==100);
	assert(a.getName()=="Rudimental");

	return true;
}

bool Tests::artistCopyConstr(){
	Artist a2("31.08.2019", "parc", 10, 100, "Rudimental");
	Artist a(a2);
	assert(a.getData()=="31.08.2019");
	assert(a.getNrDisponibile()==10);
	assert(a.getLoc()=="parc");
	assert(a.getNrVandute()==100);
	assert(a.getName()=="Rudimental");
	return true;
}

bool Tests::artistOperatorEq(){

	Artist a2("31.08.2019", "parc", 10, 100, "Rudimental");
	Artist a=a2;
	assert(a.getData()=="31.08.2019");
	assert(a.getNrDisponibile()==10);
	assert(a.getLoc()=="parc");
	assert(a.getNrVandute()==100);
	assert(a.getName()=="Rudimental");
	return true;
}

bool Tests::artistGetName(){

	Artist a("31.08.2019", "parc", 10, 100, "Rudimental");
	assert(a.getName()=="Rudimental");
	return true;
}

bool Tests::artistSetName(){

	Artist a;
	a.setName("Rudimental");
	assert(a.getName()=="Rudimental");
	return true;
}
bool Tests::runArtistTests(){

	assert(artistConstrWithoutPar() && artistConstrWithPar() && artistCopyConstr()
			&& artistOperatorEq() && artistGetName() && artistSetName());
	return true;
}

bool Tests::testRepoAddElem(){
	Spectacol* s=new Spectacol("31.08.2019", "parc", 10, 100);
	RepoCsv v;
	v.addElem(s);
	assert(v.getSize()==1);
	assert(*v.getElem(0)==*s);
	delete s;

	return true;
}

bool Tests::testRepoGetAll(){

	RepoCsv v;
	Spectacol* s=new Spectacol("31.08.2019", "parc", 10, 100);
	v.addElem(s);
	assert(*v.getElem(0)==*s);
	delete s;
	return true;
}

bool Tests::testRepoUpdate(){

	RepoCsv v;
	Spectacol* s=new Spectacol("31.08.2019", "parc", 10, 100);
	v.addElem(s);
	Artist* s2=new Artist("31.10.2019", "parc", 10, 100, "Ana");
	v.update(s2, 0);
	assert(*v.getElem(0)==*s2);
	delete s2, s;
	return true;
}
bool Tests::runRepoTests(){
	assert(testRepoAddElem()&& testRepoGetAll() && testRepoUpdate());
	return true;
}
