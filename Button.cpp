#include "Button.h"
#include "ofMain.h"

//Construtor da classe Button. Observem o uso da lista de inicialização. Ela é executada durante
//a construção dos atributos da classe Button, e roda antes do construtor.

//Outro detalhe importante. Ela executa na ordem que os atributos foram declarados no .h. Portanto,
//é uma boa prática manter essa ordem igual.
Button::Button(float px, float py, float width, float height, bool square)
	: x(px), y(py), w(width), h(height), isDown(false), 
	isDrawing(false), isSquareButton(square)
{
}

void Button::onClick()
{
	isDrawing = !isDrawing;
}

void Button::setup()
{
	
}
void Button::draw()
{
	ofSetColor(isDown ? 220 : 255);
	ofDrawRectangle(x, y, w, h);

    //Lógica que faz o botão desenhar. Perceba que isso é uma lógica da aplicação, não do botão em si.
    //Portanto, a classe do botao se torna específica somente para esse exercício e não pode ser
    //reusada em outros projetos sem retrabalho
	if (isDrawing) 
	{
		if (isSquareButton) 
		{
			ofSetColor(255, 0, 0);
			ofDrawRectangle(x, y + h + 50, 25, 25);

		} 
		else
		{
			ofSetColor(0, 0, 255);
			ofDrawCircle(x, y + h + 50, 25);
		}
	}
}

bool Button::isHovered() 
{
	float mx = ofGetMouseX();
	float my = ofGetMouseY();

	return (mx >= x && mx <= x + w &&
		my >= y && my <= y + h);
}

void Button::update()
{
	if (isDown && !ofGetMousePressed(OF_MOUSE_BUTTON_1))
	{
		onClick();
		isDown = false;
		return;
	}

	if (!isDown && isHovered() && ofGetMousePressed(OF_MOUSE_BUTTON_1))
	{
		isDown = true;
	}
}
