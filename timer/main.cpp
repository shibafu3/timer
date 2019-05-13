// ����
// chrono���C���N���[�h
// �������Ԃ��L�^
// ���[�v���ō��̎��ԂƏ������Ԃ��r�A臒l�ȏ�̍�������Ώ������Ԃ��X�V���ăv���O�������s

// ���l
// using namespace std::chrono; ���g���Ɗy�B
//
// auto end = std::chrono::system_clock::now();
// auto dur = end - start;
// auto dur_ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
// if (dur_ms >= 10){
// ���X�̕�����
// if (duration_cast<milliseconds>(system_clock::now() - start).count() >= 10){} �Ƃ܂Ƃ߂邱�Ƃ��\�B
// 
// ���̃T���v����10ms���ƂɎ��s
// .count() ���������Ă���̂��͓�B

// �Q�lURL
// http://vivi.dyndns.org/tech/cpp/timeMeasurement.html
// https://cpplover.blogspot.com/2012/05/c11.html


// ���Ԍv�����C�u�����̃C���N���[�h�iC++11�j
#include <chrono>

int main(){
	// �������Ԃ̎擾
	auto start = std::chrono::system_clock::now();
	while (1){
		// ���ݎ��Ԃ̎擾
		auto end = std::chrono::system_clock::now();
		// ���ԍ��̌v�Z
		auto dur = end - start;
		// ms�֕ϊ�
		auto dur_ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
		// ����10ms�ȏ�Ȃ�
		if (dur_ms >= 10){
			// �������Ԃ̍X�V
			start = std::chrono::system_clock::now();

			// cycle program

		}
	}
	return 0;
}
