#pragma once
class No
{
public:
	No();
	~No();

	//getters
	int getValor();
	No* getProx();
	No* getAnte();

	//setters
	void setValor(int);
	void setProx(No*);
	void setAnte(No*);

private:
	int valor;
	No* prox;
	No* ante;
};

