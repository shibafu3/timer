// 流れ
// chronoをインクルード
// 初期時間を記録
// ループ内で今の時間と初期時間を比較、閾値以上の差があれば初期時間を更新してプログラム実行

// 備考
// using namespace std::chrono; を使うと楽。
//
// auto end = std::chrono::system_clock::now();
// auto dur = end - start;
// auto dur_ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
// if (dur_ms >= 10){
// ↑個々の部分を
// if (duration_cast<milliseconds>(system_clock::now() - start).count() >= 10){} とまとめることも可能。
// 
// このサンプルは10msごとに実行
// .count() が何をしているのかは謎。

// 参考URL
// http://vivi.dyndns.org/tech/cpp/timeMeasurement.html
// https://cpplover.blogspot.com/2012/05/c11.html


// 時間計測ライブラリのインクルード（C++11）
#include <chrono>

int main(){
	// 初期時間の取得
	auto start = std::chrono::system_clock::now();
	while (1){
		// 現在時間の取得
		auto end = std::chrono::system_clock::now();
		// 時間差の計算
		auto dur = end - start;
		// msへ変換
		auto dur_ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
		// 差が10ms以上なら
		if (dur_ms >= 10){
			// 初期時間の更新
			start = std::chrono::system_clock::now();

			// cycle program

		}
	}
	return 0;
}
