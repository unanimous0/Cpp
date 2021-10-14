/*
	Chapter 1    C++의 기초적인 사용법
	Chapter 1.12 링킹 에러 (Linking Error) & 헤더 가드 (Header Guards)
*/

/*
	* Linking Error
	* 헤더파일을 만들 때 Linking Error가 발생하는 이유
	* * 선언 (Declaration)과 정의 (Definition)을 분리하기 때문에 생길 수도 있는 것
	 
	* 컴파일 에러 (Syntax Error)가 아닌 Linking Error가 발생하는 이유
	* * 컴파일러는 사용되는 함수의 프로토 타입을 선언한 Forward Declaration만 확인이 되면 빌드를 진행함
	* * 그러나 그게 실제로 어떻게 작동하는지에 대한 몸체가 없으면, 즉 정의되지 않으면 
	* * Linking 할 때, 몸체를 못찾아서 Linking Error가 발생하는 것
*/