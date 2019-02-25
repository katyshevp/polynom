#include <iostream>
#include "TheadList.h"
#include "TMonom.h"
#pragma once

class TPolinom :public THeadList <TMonom>	
{
public:
	void InsMonom(const TMonom &n);
	void operator *=(double d);
	void operator *=(TMonom &m);
	void operator +=(const TPolinom q);
};