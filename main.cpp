#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

int main() {

	// “G‚Ìƒ|ƒCƒ“ƒ^
	Enemy* enemy = new Enemy();

	printf("3•b‚²‚Æ‚É‘JˆÚ‚ª•Ï‚í‚è‚Ü‚·\n");

	for (int i = 0; i < 3; ++i) {

		// 3•b‘Ò‹@
		Sleep(3000);

		// “G‚ÌXV
		enemy->Update();
	}

	// “G‚Ì‰ð•ú
	delete enemy;

	return 0;
}