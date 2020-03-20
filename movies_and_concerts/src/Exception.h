/*
 * Exception.h
 *
 *  Created on: May 13, 2019
 *      Author: user
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

class Exception{
private:
	const char* message;
public:
	Exception(const char* m) : message(m){
	}
	const char* getMessage(){
		return message;
	}
};



#endif /* EXCEPTION_H_ */
