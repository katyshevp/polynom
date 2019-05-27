#pragma once
template <class T>
struct TLink
{
	T val;
	TLink *pNext;
};
template <class T>
class THeadList
{
public:
	THeadList();		//����������� �� ���������
	~THeadList();		//����������
//protected :	//��� ������ ������ ��������� ��������� ������
public:
	TLink <T> *pHead,	//��������� �� ������
		*pFirst,		//��������� �� ������ ������� � ������
		*pLast,			//��������� �� ��������� ������� � ������
		*pPrev,			//��������� �� ���������� �����
		*pCurr;			//��������� �� ������� �����
	int pos;			//������� ����� � ������
	int size;			//������ ������
	void InsCurrent(const T & elem);	//�������� ����� ����� ���������� � ������� ������
	void InsFirst(const T &elem);	//�������� ����� � ������  ������
	void InsLast(const T &elem);	//�������� ����� � ����� ������
	void DelCurrent();	//������� ������� �����
	void Reset();		//�������� ��������
	void GoNext();		//������ ��������� ����������� ������ �� 1 �����
	bool IsEnd();		// �������� �� ����� ������
	void PrintList();
};

template <class T>
THeadList <T>::THeadList()
{
	pHead = new TLink <T>;
	pHead->pNext = pHead;
	pFirst = pCurr = pLast = pPrev = pHead;
	size = 0;
	pos = 0;
}
template <class T>
THeadList <T >::~THeadList()
{
	pCurr = pFirst;
	while (pCurr != pHead)
	{
		pPrev = pCurr;
		pCurr = pCurr->pNext;
		delete pPrev;
	}
	delete pHead;
}

template <class T>
void THeadList <T> ::InsCurrent(const T &elem)
{
	if (pCurr == pHead && pPrev == pLast)
	{
		InsLast(elem);
		pCurr = pLast;
		pos = size;
	}
	else
	{
		TLink <T> *tmp = new TLink <T>;
		tmp->val = elem;
		pPrev->pNext = tmp;
		tmp->pNext = pCurr;
		if (size == 0)
		{
			pos = 1;
			pLast = tmp;
			pFirst = tmp;
		}
		if (pos == 1)
		{
			pFirst = tmp;
		}
		pCurr = tmp;
		size++;
	}
}
template <class T>
void THeadList <T> ::InsFirst(const T &elem)
{
	TLink<T> *tmp = new TLink<T>;
	tmp->val = elem;
	if (size > 0)
	{
		pHead->pNext = tmp;
		tmp->pNext = pFirst;
		if (size == 1)
			pLast = tmp->pNext;
		pFirst = tmp;
		size++;
		pos++;
		if (pos == 2)
		{
			pPrev = tmp;
		}
	}
	else
	{
		pHead->pNext = tmp;
		tmp->pNext = pHead;
		pFirst = tmp;
		pLast = tmp;
		pLast->pNext = pHead;
		size++;
		pos = 1;
		pCurr = pFirst;
	}
}
template <class T>
void THeadList <T> ::InsLast(const T & elem)
{
	TLink<T> *tmp = new TLink<T>;
	tmp->val = elem;
	pLast->pNext = tmp;
	tmp->pNext = pHead;
	if (size == 0)
	{
		pFirst = tmp;
		pCurr = tmp;
		pos = 1;
	}
	pLast = tmp;
	size++;

}
template <class T>
void THeadList <T>::DelCurrent()
{
	if (size == 0)
		throw "Error";
	TLink<T> *tmp = pCurr;
	pPrev->pNext = tmp->pNext;
	delete tmp;
	pCurr = pPrev->pNext;
	size--;
	if (pos > size)
	{
		pos = 0;
		pLast = pPrev;
	}
	if (pos == 1)
		pFirst = pCurr;
	if (size == 0)
	{
		pFirst = pLast = pPrev = pCurr = pHead;
		pos = 0;
	}
}
template <class T>
void THeadList <T> ::Reset()
{
	if (size == 0)
		throw "Error";
	pCurr = pFirst;
	pPrev = pHead;
	pos = 1;
}
template <class T>
void THeadList <T>::GoNext()
{
	if (IsEnd())
		throw "Error";
	pPrev = pCurr;
	pCurr = pCurr->pNext;
	if (pCurr != pHead)
		pos++;
	else
		pos = 0;
}
template <class T>
bool THeadList<T>::IsEnd()
{
	return (pCurr == pHead);
}

template <class T>
void THeadList<T>::PrintList() {
	TLink<T> *tmp = pFirst;
	while (tmp != pHead)
	{
		std::cout << tmp->val << std::endl;
		tmp = tmp->pNext;
	}
	std::cout << std::endl;
}