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

using namespace std;
/*
questa è la classe piu a contatto con il parser
e per il design scelto dovrà essere l'unico a dialogare
con esso, il nostro amico parser dovrà solo gestire e 
capire l'input e dire al mapper quali sono i valori con la 
x di modo che possa tirarci fuori la nostra mappa	
*/
class mapper{
	
};
class member{
	private:
		map<int , float*>
	public:
		//ogni membro deve avere il suo corrispondente
		//cosa talmente importante da fargli avere solo
		//un costruttore
		member(int dim,const vector<float>& oth){
			//inizializza il membro in modo che corrisponda solo e soltanto 
			//un altro membro per tutta la sua vita
			
			//inizializza il membro
			vector <float> mem(dim);
			
			//riceve l'altro membro
			constexpr vector<float>& other = oth ;
		};
		move(int pos){
			//sposta dal membro chiamante all'altro 
			//un elemento indicato dalla posizione
			other.pushback(mem[pos-1]);
			mem.pop();
		};
		
};
//per il tipo di design adottato si scambieranno le 
//mappe per alterare il funzionamento della classe 
//equazione , per il momento userò solo quella delle x

class x_map{
	private:	
		map<int , float*> xmap;
		/* avrò bisogno di un mapper
		(direttamente collegato al parser)
		che mi dica quali dei caratteri delle
		equazioni sono con la x e quali valori puri(numeri
		senza la x) */ 
	public:
		mapper xmapper;
};
class lo_lev_equat{
//a low level interface for equations
	private:
		member m1;  //first member
		member m2;  //second member
		x_map xmap1;//xmap of first member
		x_map xmap2;//xmap of second member
		oper_map omap1;//omap of first member
		oper_map omap2;//omap of second member
		
		//se voglio la genericità devo mappare esternamente 
		//i segni e le relazioni fra i vari valori dei membri 
	public:
		/*operation sara tipo descritto probabilmente
		in un file esterno dove c'è la roba del parser
		"enum class Operation : char{
		plus = '+', minus = '-' .....
		}"
		
		*/
		do_operation(Operation op,int pos){
			if (op == Operation::minus)
			if (op == Operation::plus)
			if (op == Operation::mult)
			if (op == Operation::div)
		}
};

class x
