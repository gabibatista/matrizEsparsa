#include "stdafx.h"
#include "Lista.h"


Lista::Lista()
{
}

void Lista::incluir(No * no)
{
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	/*---------------- DEVE ESTAR TD ERRADO ----------------*/
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	// se o atual � nulo
	if (!procurar(no)){
		if (this->atual != nullptr) { // se o atual n�o � nulo
			if (this->atual->getValor > no->getValor() && this->atual->getAnte()->getValor() < no->getValor()) { // se o atual � > que o no e o anterior do atual � < que o no => no dever� entrar no meio deles
				no->setAnte(this->atual->getAnte()); // o anterior do no se torna o anterior do atual

				if (this->atual->getAnte() != nullptr) {
					this->atual->getAnte()->setProx(no); // o pr�ximo do anterior do atual se torna o no
				}
				
				no->setProx(this->atual); // o pr�ximo do no se torna o atual
				this->atual->setAnte(no); // o anterior do atual se torna o no
			}
		}
		else if (this->estaVazia()){ // se o atual � nulo
			inicio = no;
			fim = no;
		}
		else {

		}
			
	}
}


bool Lista::estaVazia()
{
	if (this->inicio == nullptr)
		return true;
	return false;
}

bool Lista::procurar(No* no)
{
	if (estaVazia())
		return false;
	else {
		while (this->atual->getValor() < no->getValor())
			this->atual = this->atual->getProx();

		if (this->atual->getValor() == no->getValor())
			return true;
	}

	return false;
}

Lista::~Lista()
{
}
