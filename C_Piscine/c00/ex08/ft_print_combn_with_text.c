/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:37:31 by jeshin            #+#    #+#             */
/*   Updated: 2023/08/28 09:40:17 by jeshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//숫자가 마지막인지 확인하는 함수
int	check_is_last(int len, char	*print_num)
{
	//now : print_num배열에서 현재를 가리키는 인덱스
	//next : 다음을 가리키는 인덱스
	//count : 비교할 횟수
	int	now;
	int	next;
	int	count;
	
	//0번부터 비교
	//길이가 4이라면 3번만 비교하면 되므로 count = len-1;
	now = 0;
	count = len -1;
	//현재 숫자가 마지막 숫자라면
	if (print_num[now] == 10 - len + '0')
	{
		//길이가 1이라면 현재숫자가 마지막일 때 비교할 next가 없으므로 종료.
		if (len == 1)
			return (1);
		//count 만큼 반복
		while (count--)
		{
			//다음 인덱스는 현재 인덱스 +1
			next = now + 1;
			//다음 숫자와 현재 숫자의 차이가 1이 아니라면
			if (print_num[next] - print_num[now] != 1)
				//마지막 숫자가 아니므로 false반환
				return (0);
			now++;
		}
		//위 if와 while을 통과하였다면 마지막 숫자이므로 true 반환.
		return (1);
	}
	return (0);
}
//프린트 함수.
void	print(int len, char *print_num)
{
	int	temp;

	temp = 0;
	//숫자의 길이만큼 print_num에 있는 숫자를 출력
	while (temp < len)
	{
		write(1, (print_num + temp), 1);
		temp++;
	}
	//만약 이 숫자가 마지막 숫자가 아니라면 ", "를 출력.
	if (!check_is_last(len, print_num))
		write(1, ", ", 2);
}
//combi함수 : 재귀를 이용해서 조합을 만드는 함수.
//print_num에 숫자를 순서대로 넣고 집합의 사이즈가 len과 같으면 프린트 후 종료.
//
//start : 0~9까지 숫자를 가지는 nums집합에서, 인덱스를 가리키는 변수.
//pres : (present) print_num 집합의 인덱스를 가리키는 변수.
void	combi(int start, int pres, int len, char	*print_num)
{
	//combi함수가 호출 될때마다 0~9까지의 숫자의 배열인 nums를 만듬.
	int	nums[10];
	int	temp;

	temp = 0;
	while (temp < 10)
	{
		nums[temp] = temp;
		temp++;
	}
	//재귀함수가 불린 횟수를 level 이라고 할 때
	//level 은 pres +1 과 같음.
	//level 이 숫자의 길이 len 과 같을 때
	if (pres + 1 == len)
	{
		//프린트 하고 함수 종료.
		print(len, print_num);
		return ;
	}
	//숫자의 각 자리수의 최대범위까지, 각 자리수의 숫자를 ++시키며 함수 재호출.
	while (start < 10 - len + (pres + 1))
	{
		//nums와 pres_nums의 인덱스를 가리키는 인덱스를 하나씩 증가시키고
		start++;
		pres++;
		//프린트할 집합에 start가 가리키는 nums의 숫자를 넣음. 
		print_num[pres] = nums[start] + '0';
		//인덱스가 하나씩 증가된 상태에서 combi 호출.
		combi(start, pres, len, print_num);
		//인덱스 원복.
		pres--;
	}
}
//만들어야 할 함수 
void	ft_print_combn(int n)
{
	//print_num : 프린트 할 숫자의 집합.
	//temp : print_num을 초기화 하기위해 필요한 임시변수.
	char	print_num[10];
	int		temp;

	temp = 0;
	//temp가 9일때까지 프린트 할 집합인 print_num을 0으로 초기화
	while (temp < 10)
	{
		print_num[temp] = '0';
		temp++;
	}
	//combi함수 호출
	combi(-1, -1, n, print_num);
}
