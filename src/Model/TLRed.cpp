//---------------------------------------------------------------------------


#pragma hdrstop

#include "TLRed.h"
#include "TLGreen.h"

//---------------------------------------------------------------------------
TLRed::TLRed(TLNetTraffic* context): _context(context) {};

void TLRed::Handle()
{
	printf("Red Light\n");
	_context->setState( new TLGreen(_context) );
}
TLRed::~TLRed(){
	if(_context) {
		delete _context;
	}
};

#pragma package(smart_init)
