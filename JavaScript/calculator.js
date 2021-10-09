const prompt = require('prompt-sync')();

function calculator(){
	const operator = prompt('Enter operator : ');
	
	const left_operand = parseFloat(prompt('Enter left operand : '));
	const right_operand = parseFloat(prompt('Enter right operand : '));

	op = operator;

	if (op == "-"){
		res = left_operand - right_operand;
	}
	if (op == "+"){
		res = left_operand + right_operand;
	}
	if (op == '*'){
		res = left_operand * right_operand;
	}
	if (op == '/'){
		res = left_operand / right_operand;
	}

	console.log(left_operand, operator, right_operand, " = ", res);

}


calculator();

