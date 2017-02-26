#pragma once

#include "CNodeBase.h"

class CNodeHex8 : public CNodeBase
{
public:
	CNodeHex8( );

	virtual void Update( HotSpot& Spot );

	virtual ULONG GetMemorySize( ) { return 1; }

	virtual NodeSize Draw( ViewInfo& View, int x, int y );
};