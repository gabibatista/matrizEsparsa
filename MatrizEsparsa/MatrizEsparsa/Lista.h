#pragma once
#include "No.h"

class Lista
{

public:
	Lista();
	void incluir(No*);
	void excluir(No*);
	void visualizar();
	bool estaVazia();
	bool procurar(No*);
	~Lista();

private:
	No* inicio;
	No* atual;
	No* fim;

};

