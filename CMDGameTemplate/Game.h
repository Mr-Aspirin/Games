#pragma once
#include <time.h>
#include <conio.h>
#include <iostream>


class Game {
public:
	//��ʼ��
	bool Initialize();
	
	//��Ϸѭ��
	void Loop();
	
	//��Ϸ����
	void Shutdown();

private:
	//��������
	void ProcessInput();
	
	//������Ϸ
	void UpdateGame();
	
	//���ͼ��
	void GenerateOutput();

	//��Ϸ�Ƿ����
	bool isRunning = true;

	//�Ƿ���Ҫ������Ϸ
	bool update = true;

	//�ۼƺ�������
	long tickCount, currentTick;
};