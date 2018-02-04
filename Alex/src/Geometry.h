/*
 * CPoint.h
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#ifndef SRC_GEOMETRY_H_
#define SRC_GEOMETRY_H_


/*
 *
 */
class CPoint {
private:
	int x;
	int y;

public:
	static int n;

	CPoint();
	CPoint(int u,int v);
int CPoint::getX() const;
int CPoint::getY() const;
void CPoint::setX(const int new_x);
void CPoint::setY(const int new_y);

virtual ~CPoint();
};

class CPointArray{
private:
	int size;
	CPoint *p;
	void CPointArray::resize(int n);

public:
	CPointArray();
	CPointArray(const CPoint points[],const int size);
	CPointArray::CPointArray(const CPointArray& pv);
	CPointArray::~CPointArray();
};



#endif /* SRC_GEOMETRY_H_ */
