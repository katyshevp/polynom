#include "TPolinom.h"

void TPolinom::InsMonom(const TMonom &n)
{
	if (size == 0)
		InsFirst(n);
	else
	{
		for (Reset(); !IsEnd(); GoNext())
		{
			if (pCurr->val == n)
			{
				pCurr->val.coeff = n.coeff;
				if (pCurr->val.coeff == 0)
					DelCurr();
				break;
			}
			if (n > pCurr->val)
			{
				InsCurr(n);
				break;
			}
		}
		if (pCurr == pHead)
			InsCurr(n);
	}
}

void TPolinom::operator*=(double d)
{
	for (Reset(); !IsEnd(); GoNext())
	{
		pCurr->val.coeff *= d;
	}
}

void TPolinom::operator*=(TMonom &m)
{
	for (Reset(); !IsEnd(); GoNext())
	{
		pCurr->val.coeff *= m.coeff;
		if (pCurr->val.coeff == 0)
		{
			DelCurr();
			break;
		}
		pCurr->val.PowX += m.PowX;
		pCurr->val.PowY += m.PowY;
		pCurr->val.PowZ += m.PowZ;
	}
}

void TPolinom::operator+=(TPolinom q)
{
	TMonom pM, qM, rM;
	Reset(); q.Reset();
	while (1)
	{
		pM = pCurr->val;
		qM = q.pCurr->val;
		if (pM > qM)
			GoNext();
		else
			if (pM < qM)
			{
				InsCurr(qM);
				q.GoNext();
			}
			else
				if (pM.PowZ == -1)
					break;
				else
				{
					double r = pM.coeff + qM.coeff;
					if (r == 0)
					{
						DelCurr();
						q.GoNext;
					}
					else
					{
						pCurr->val.coeff = r;
						q.GoNext();
						GoNext();
					}
				}
	} 
}