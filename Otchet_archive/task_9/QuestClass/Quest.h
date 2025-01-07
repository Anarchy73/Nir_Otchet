#pragma once
#include<string>



class Quest {
private:
	// ����� �������
	std::string Text;
	// ��� �������: "��/���", "���� �����", "��������� �������", "�������� �����"
	std::string Type;
	// ���������� �����
	std::string RightAnswer;
	// ������ ������ �� ������ ������ (0, 1): 
	int Result;
public:
	// �����������
	Quest(std::string text, std::string type, std::string rightAnswer);

	// get/set ������
	std::string getText();
	std::string getType();
	std::string getRightAnswer();
	int getResult();
	void setResult(int result);
};

