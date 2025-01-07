#pragma once
#include<string>



class Quest {
private:
	// Текст вопроса
	std::string Text;
	// Тип вопроса: "Да/Нет", "Один ответ", "Несколько ответов", "Короткий ответ"
	std::string Type;
	// Правильный ответ
	std::string RightAnswer;
	// Оценка ответа на данный вопрос (0, 1): 
	int Result;
public:
	// Конструктор
	Quest(std::string text, std::string type, std::string rightAnswer);

	// get/set методы
	std::string getText();
	std::string getType();
	std::string getRightAnswer();
	int getResult();
	void setResult(int result);
};

