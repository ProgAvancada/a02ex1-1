#ifndef BUTTON_H
#define BUTTON_H

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