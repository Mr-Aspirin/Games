#include "Game.h"

bool Game::Initialize()
{
	tickCount = clock();
	return true;
}

void Game::Loop()
{
	while (isRunning) {
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void Game::Shutdown()
{

}

void Game::ProcessInput()
{
	//��������
	if (_kbhit()){
		update = false;
		int key = _getch();
		if (key == 'a') {
			//TEST
			std::cout << "a" << std::endl;
			update = true;
		}
	}
}

void Game::UpdateGame()
{
	//����60֡��
	while (clock() - tickCount < 16);
	currentTick = clock();
	//����ʱ�䲽��
	float deltaTime = static_cast<float>((currentTick - tickCount)) / CLOCKS_PER_SEC;
	tickCount = currentTick;

	//TEST
	//update = true;

	//����Ƿ���Ҫ������Ϸ
	if (!update) { return; }
}

void Game::GenerateOutput() {
	//����Ƿ���Ҫ���»���
	if (!update) { return; }

	//���ͼ��
	system("cls");//����

	//TEST
	std::cout << tickCount << std::endl;

	//���ø���
	update = false;
}
