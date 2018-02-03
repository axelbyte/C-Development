/*
 * CPoint.cpp
 *
 *  Created on: 3 feb. 2018
 *      Author: Pedro Juan Ibarra
 */

#include "CPoint.h"
#include <iostream>

CPoint::CPoint(int u,int v) {
	++n;
	x=u;
	y=v;

}
CPoint::CPoint(){
	++n;
	x=0;
	y=0;
}
/*void printPoint(){
	cout << "("<< x <<","<< y<<")"<<endl;
}*/
CPoint::~CPoint() {
	--n;
}

