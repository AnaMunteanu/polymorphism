/*
 * Artist.h
 *
 *  Created on: May 6, 2019
 *      Author: user
 */

#ifndef ARTIST_H_
#define ARTIST_H_
#include "Spectacol.h"
class Artist:public Spectacol{
private:
	string name;
public:
	Artist();
	~Artist();
	Artist(string, string, int, int, string);
	Artist(const Artist&);
	Artist& operator=(const Artist&);
	string getName();
	void setName(string);
	friend ostream& operator<<(ostream&, const Artist&);

};




#endif /* ARTIST_H_ */
