//descrizione di una classe che modelli
//la un'equazione(in una o piu incognite)
//e con vari gradi, ma piu importante dii tutti 
//sia in grado di comportarsi come si addice a 
//un'equazione(
// -proprieta
// -spostamento di membri da una parte)
// -risoluzione step by step
#include <vector>
		//potrei provare a dichoarare questa come interfaccia
		// a basso livello e poi costruire un layer che la 
		// manipoli a basso livello e questa potrebbe diventare
		//una sfida di design ovvero: "monopezzo" o a layer?
		//per ora proviamo a layer
		
class lo_lev_equat{
//a low level interface for equations
	private:
		member m1;  //first member
		member m2;  //second member
	public:
		
};
using namespace std;

class member{
	vector 	
	public:
		//ogni membro deve avere il suo corrispondente
		//cosa talmente importante da fargli avere solo
		//un costruttore
		member(int dim,const vector <float> &oth){
			//inizializza il membro in modo che corrisponda solo e soltanto 
			//un altro membro per tutta la sua vita
			
			//inizializza il membro
			vector <float> mem(dim);
			
			//riceve l'altro membro
			constexpr vector <float> &other ;
		};
		move(int pos){
			//sposta un membro da un
			//membro all'altro un elemento
			* i.pushback(mem.pop());
		};
};
