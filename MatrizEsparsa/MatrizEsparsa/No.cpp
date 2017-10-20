#include "stdafx.h"
#include "No.h"


No::No()
{
}


No::~No()
{
}

int No::getValor()
{
	return valor;
}

No * No::getProx()
{
	return this->prox;
}

No * No::getAnte()
{
	return this->ante;
}

void No::setValor(int valor)
{
	this->valor = valor;
}

void No::setProx(No * prox)
{
	this->prox = prox;
}

void No::setAnte(No * ante)
{
	this->ante = ante;
}
