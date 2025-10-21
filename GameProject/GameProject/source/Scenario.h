#pragma once
#include <vector>

#define	ENEMY_MAX	(5)		// �G�ő�l��

// �摜
extern int cgWord;
extern int cgWord2;


class Scenario {
public:
	Scenario();
	virtual ~Scenario();

	// �G�o���V�i���I���
	struct SCENARIO {
		int numName;	// �،��Ҕԍ��i0�F��, 1�F��, 2�F��, 3�F��, 4�F�s���N�j
		int testimonyCnt;	// �،��J�E���g�i0, 1�F�،�, 2�F�\��, 3�F�I���j
		int	gamecnt;	// gGameCnt�����̒l�ɂȂ�����o��
		float x;    // ���t���o������ʒu X���W
		float y;	// ���t���o������ʒu Y���W
		int wordType;	//���t�̎�ށ@0�F���g�p 1�F�\���@2�F�،� -1�F���[�v�p
		int cgName;	//�摜��
		int waitTime;	//�o���ォ�瓮���o������
		int seName; //������
	};

	void SetChapterScenario(int chapter);	//�`���v�^�[���Ƃ̃V�i���I���Z�b�g
	void SetEnemyPosition(int chaoter);     //�G�̈ʒu���Z�b�g

	std::vector<SCENARIO> scenarioList;		//�V�i���I�p��vector
	std::vector<SCENARIO> GetScenario();	//�V�i���I�̃Q�b�^�[

protected:

};
