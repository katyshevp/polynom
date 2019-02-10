#include <iostream>
#pragma once

struct TMonom 
{
	double coeff;
	int PowX, PowY, PowZ;
};

bool operator < (const TMonom& m1, const TMonom& m2) 
{
	if (m1.PowX < m2.PowX)
		return true;
	if (m1.PowX == m2.PowX) 
	{
		if (m1.PowY < m2.PowY)
			return true;
		if (m1.PowY == m2.PowY) 
		{
			if (m1.PowZ < m2.PowZ)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool operator > (const TMonom& m1, const TMonom& m2) 
{
	if (m1.PowX > m2.PowX)
		return true;
	if (m1.PowX == m2.PowX)
	{
		if (m1.PowY > m2.PowY)
			return true;
		if (m1.PowY == m2.PowY)
		{
			if (m1.PowZ > m2.PowZ)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool operator == (const TMonom& m1, const TMonom& m2) 
{
	if (m1.PowX == m2.PowX)
	{
		if (m1.PowY == m2.PowY)
		{
			if (m1.PowZ == m2.PowZ)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool operator != (const TMonom& m1, const TMonom& m2) 
{
	if (m1.PowX != m2.PowX)
		return true;
	if (m1.PowY != m2.PowY)
		return true;
	if (m1.PowZ != m2.PowZ)
		return true;
	return false;
}