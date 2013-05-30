#include "Colour.h"

#ifndef __COUNTER_H__
#define __COUNTER_H__

class Counter
{
	public:
		Counter():colour(COLOUR_NOT_ASSIGNED),validMover(false),debugId(0){  }
		Counter(CounterColour _colour, int id):colour(_colour),validMover(false),debugId(id){cc=new Counter_Colour(_colour);}
		~Counter(){ printf("deleting counter %d\n", debugId); if (cc!=NULL) delete cc; }
		CounterColour Colour(){ return colour; }
		Counter_Colour* CC(){ return cc; }
		bool isValueMover(void){ return validMover; }
		void SetIsValidMover(bool value) { validMover=value; }
		bool isScorer(void){ return scorer; }
		void SetIsScorer(bool value) { scorer=value; }
	private:
		Counter_Colour* cc;
		CounterColour colour;
		bool validMover;
		bool scorer;
		int debugId;
};

#endif
