#ifndef WAITRESS_H
#define WAITRESS_H

#include "dinermenu.h"
#include "pancakehousemenu.h"
#include "iterator.h"
#include "menucomponent.h"

class Waitress {
	private:
		MenuComponent* allMenus;
	public:
		Waitress(MenuComponent* allMenus);
		void printMenu();
};
#endif
