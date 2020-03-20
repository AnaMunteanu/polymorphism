/*
 * Client.h
 *
 *  Created on: May 15, 2019
 *      Author: user
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include<cstring>
#include<string>
using namespace std;

class Client{
private:
	string username;
	string parola;
public:
	Client();
	~Client();
	Client(string, string);
	Client(const Client&);
	Client& operator=(const Client &);
	string getUsername();
	string getParola();
	friend ostream& operator<<(ostream&, const Client&);
	void setParola(string);
	void setUsername(string);
	Client* clone();
};



#endif /* CLIENT_H_ */
