/*
 * CPoint.h
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#ifndef SRC_CPOINT_H_
#define SRC_CPOINT_H_


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
	void printPoint();
	virtual ~CPoint();
};




#endif /* SRC_CPOINT_H_ */
