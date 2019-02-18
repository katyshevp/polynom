#include <iostream>
#include "TheadList.h"
#include "TMonom.h"
#pragma once

class TPolinom :public THeadList <TMonom>
{
	void InsMonom(const TMonom &n);
};
