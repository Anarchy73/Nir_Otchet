#include "Quest.h"

Quest::Quest(std::string text, std::string type, std::string rightAnswer) {
	Text = text;
	Type = type;
	RightAnswer = rightAnswer;
}

std::string Quest::getText() {
	return Text;
}

std::string Quest::getType() {
	return Type;
}

std::string Quest::getRightAnswer() {
	return RightAnswer;
}

int Quest::getResult() {
	return Result;
}

void Quest::setResult(int result){
	Result = result;
}



