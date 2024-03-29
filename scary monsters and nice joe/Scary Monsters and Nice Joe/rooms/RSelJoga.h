
#ifndef __RSELJOGA_H__
#define __RSELJOGA_H__

#include "../core/Tela.h"
#include "../core/GerenteAtor.h"
#include "../classes/CButton.hpp"
#include "../classes/CPreview.hpp"


class RSelJoga: public Tela
{
public:

	void inicializar(GameLoop* _gameloop);
	void atualizar();
	void desenhar();
	void finalizar();

	Tela* proximaTela();

private:
	GameLoop* gameloop;
	FW_Perfil* perfil;
	CPreview** fases;

	FW_Image* background;

	FW_Image* selecione;

	int option;
};

#endif //__RSELJOGA_H__