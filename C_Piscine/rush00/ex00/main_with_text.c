/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsepar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:37:57 by minsepar          #+#    #+#             */
/*   Updated: 2023/08/29 10:31:02 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//외부함수를 사용하기 위해 extern 키워드 사용
extern void	rush(int x, int y);
//입력받은 문자열이 숫자로 이루어진 문자열인지 확인하고 문자열을 숫자로 변환하여 반환하는 함수.수
int	is_valid_str(char *num)
{
	//입력된 문자열에서 숫자를 가져오기 위해 ㅅ
	long	int_checker;

	int_checker = 0;
	//문자열의 끝은 널문자로 끝나므로 문자열의 끝이 아닐때까지
	while (*num != '\0')
	{
		//문자가 0~9에 해당하는 숫자가 아니라면
		if (*num < '0' || *num > '9')
		{
			//숫자가 아니라는 에러를 출력하고 종료.
			write(2, "[Error] not a valid num :\\", 26);
			return (0);
		}
		//문자가 0~9에서 해당하는 숫자라면
		else
		{
			//int_checker가 이미 가지고 있는 숫자의 자리수를 하나 올리고
			int_checker *= 10;
			//문자를 숫자로바꾸어 int_checker에 더함
			int_checker += *num - '0';
			//만약에 int_checker 가 인트범위를 넘어간다면
			if (int_checker > 2147483647)
			{	
				//인트형 오버플로우 에러를 나타내는 에러문자열 출력.
				write(2, "[Error] Integer overflow :(", 27);
				return (0);
			}
		}
		num++;
	}
	return (1);
}

int	atoi(char *str)
{
	int	n;

	n = 0;
	while (*str != 0)
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n);
}
//프로그램 시작 시 입력되는 값 활용하고자 argc,argv 사용.
//argc : argument count , argv : argument values.
//argv에 저장된 주소값으로 가면 chat* []이 있음 각 배열마다 string을 가짐.
int	main(int argc, char *argv[])
{
	//x : 입력받은 행의 값, y : 입력받은 열의 값
	int	x;
	int	y;
	//인자의 개수가 3개이고 두번째 인자와 세번째 인자가 문자열일때
	//(첫번째 인자는 경로를 나타내므로 두번째인자부터 고려)
	if (argc == 3 && is_valid_str(argv[1]) && is_valid_str(argv[2]))
	{	
		///문자열을 인트로 변환
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		//문자열block을 출력하는 러쉬함수 호출
		rush(x, y);
	}
	//인자개수가 3개가 아니라면
	else if (argc != 3)
	{
		//표준 에러출력으로 에러를 알려줌.
		write(2, "[Error] number of arguments not equal to 2 :/", 45);
	}
	return (0);
}
