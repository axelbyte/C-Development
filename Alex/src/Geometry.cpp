/*
 * CPoint.cpp
 *
 *  Created on: 3 feb. 2018
 *      Author: Alejandro Ibarra
 */

#include "Geometry.h"



CPoint::CPoint(int u,int v) {
	++n;//  al contruir un punto aumentamos el numero total en la variable global.
	x=u;
	y=v;

}
CPoint::CPoint(){
	++n;
	x=0;
	y=0;
}

int CPoint::getX() const {
	return x;
}
int CPoint::getY() const {
	return y;
}
void CPoint::setX(const int new_x) {
	x = new_x;
}
void CPoint::setY(const int new_y){
	y = new_y;
}

CPoint::~CPoint() {
	--n; // al destruir un punto disminuimos el numero total en la variable global.
}

CPointArray::CPointArray(){
	size = 0;
	p = new CPoint[this->size];
}

CPointArray::CPointArray(const CPoint points[],const int size){
	this->size = size;
	p = new CPoint[this->size];
	for (int i = 0;i<size;++i){
		p[i].setX(points[i].getX());
		p[i].setY(points[i].getY());
	}
}
CPointArray::CPointArray(const CPointArray& pv){
	this->size = pv.size;
	p = new CPoint[this->size];
	for (int i = 0;i<size;++i){
			p[i].setX(pv.p[i].getX());
			p[i].setY(pv.p[i].getY());
		}
}

void CPointArray::resize(int n){
	int new_size = (this->size<n)?this->size:n;

	CPoint *pTmp;
	pTmp = p;
	p = new CPoint[new_size];
	for (int i = 0;(i<size&&i<new_size);++i){
			p[i].setX(pTmp[i].getX());
			p[i].setY(pTmp[i].getY());
	}
	delete pTmp;
	this->size= new_size;
}
CPointArray::~CPointArray(){
	this->size = 0;
	delete p;
}







