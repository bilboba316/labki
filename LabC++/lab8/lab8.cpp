#include <iostream>
#include <windows.h>
#include <Math.h>

using namespace std;

void drawCircle(HDC hdc, int x, int y, int radius, COLORREF color) {
	HBRUSH hBrush = CreateSolidBrush(color);
	SelectObject(hdc, hBrush);

	int left = x - radius;
	int right = x + radius;
	int top = y - radius;
	int bottom = y + radius;

	Ellipse(hdc, left, top, right, bottom);
}

int main() {
	int a;
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);
	for (int i = 0; i < 360; i=i+45)
	{
		int x = 100 + 55 * cos(i * 3.14 / 180);
		int y = 100 + 55 * sin(i * 3.14 / 180);
		drawCircle(hdc, x, y, 25, RGB(255, 255, 255));
	}
	drawCircle(hdc, 100, 100, 50, RGB(255, 255, 0));
    ReleaseDC(hwnd, hdc);
	cin >> a;
}