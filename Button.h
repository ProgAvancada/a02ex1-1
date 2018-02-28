#ifndef BUTTON_H
#define BUTTON_H

/*
 Nesta implementação é a própria classe Button que faz o desenho. Utilizamos a propriedade isSquareButton
 para indicar se será desenhado um quadrado ou um círculo, conforme pede o enunciado do exercício.
 */

class Button
{
private:
	float x, y, w, h;
	bool isDown;
	bool isDrawing;
	bool isSquareButton;

	void onClick();
	bool isHovered();

public:
	Button(float px, float py, float width, float height, bool square);	

	void setup();
	void draw();
	void update();

};

#endif
