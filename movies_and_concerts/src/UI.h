/*
 * UI.h
 *
 *  Created on: May 16, 2019
 *      Author: user
 */

#ifndef UI_H_
#define UI_H_

#include"Controller.h"
class UI{
	private:
		Controller ctr;
	public:
		UI();
		~UI();
		void run();
		void showmenu();
		int login();

};




#endif /* UI_H_ */
