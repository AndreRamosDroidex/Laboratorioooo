#include <stdlib.h>
#include <iostream>
#include "listas.h"
#include "listasCicl.h"
#include "listasCicl.cpp"
#include "listasC-D.h"
#include "listasC-D.cpp"
#include <string.h>
#include <string>
#include <sstream>
#include "listas_pref.h"
#include "listas_pref.cpp"

using namespace std;

int main(){
	Pilap<string> a;
	a.push_pref("(4+5)");
	a.pop_pref();
	  ///////////////////////////CIRCULARES//////////////////////////////////////
	//IntSLLis<int> a;
	//a.addToActual(1);
	//a.addToActual(2);
	//a.addToActual(3);
	//a.deleteNode(2);
	//a.print_list();
	 ///////////////////////////CIRCULARES_DOBLES//////////////////////////////////////
	//Listdc<int> b;
	//b.addToActual(1);
	//b.addToActual(2);
	//b.addToActual(3);
	//b.deleteNode(2);
	//b.print_listDobl();
	
	return 0;
}



