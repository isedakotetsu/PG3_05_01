#include <Novice.h>
#include "GameScene.h"


const char kWindowTitle[] = "LE2C_06_イセダ_コテツ";


// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameScene* gameScene = new GameScene();

	gameScene->Initialize();


	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		gameScene->Update();


		gameScene->Draw();


		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	delete gameScene;
	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
