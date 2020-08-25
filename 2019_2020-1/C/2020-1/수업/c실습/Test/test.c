/*
4. 빙고게임 시뮬레이션
5*5 크기의 빙고게임을 진행하는 모습을 간단하게 시뮬레이션 하려고 한다.
게임의 기본 컨셉은 행번호와 열번호를 입력받으면서, 특정한 행의 5개 칸이 모두 선택되거나, 특정한 열의 5개 칸이 모두 선택되는 상황이 되면 '빙고'를 외치며 게임이 종료되는 것이다.

전반적인 진행의 순서는 다음과 같다.
- 행번호(1~5)와 열번호(1~5)를 입력받는다.
- 정상적인 빙고 매트릭스 번호가 아니면 게임은 바로 끝난다.
- 이미 선택한 칸(행,열)을 다시 입력하게 되면 이미 선택했다는 메시지를 출력하고, 그 입력은 카운트하지 않는다.
- 그 외의 경우에는 입력받은 칸을 마크(-1)한다.
- 이번 시도를 통해 빙고가 완성되었다면(행 하나 또는 열 하나의 5개 칸이 모두 마크된 경우) 빙고를 외치면서 게임을 마친다.
- 게임을 마치고 나면 현재까지 시도된 모든 입력 횟수를 출력한다.
- 시도횟수에 중복선택이나 비정상 칸은 포함시키면 안됨.

** 실행 예
Enter row(1~5) and col(1~5) > 1 1
Enter row(1~5) and col(1~5) > 1 1
(1, 1) already marked!
Enter row(1~5) and col(1~5) > 2 2
Enter row(1~5) and col(1~5) > 2 2
(2, 2) already marked!
Enter row(1~5) and col(1~5) > 4 4
Enter row(1~5) and col(1~5) > 3 3
Enter row(1~5) and col(1~5) > 5 5
Enter row(1~5) and col(1~5) > 4 4
(4, 4) already marked!
Enter row(1~5) and col(1~5) > 0 0
EXIT! 5 tried!

Enter row(1~5) and col(1~5) > 1 1
Enter row(1~5) and col(1~5) > 1 2
Enter row(1~5) and col(1~5) > 1 3
Enter row(1~5) and col(1~5) > 1 4
Enter row(1~5) and col(1~5) > 1 5
BINGO! #1 row is marked all!
EXIT! 5 tried!

Enter row(1~5) and col(1~5) > 1 3
Enter row(1~5) and col(1~5) > 2 3
Enter row(1~5) and col(1~5) > 3 3
Enter row(1~5) and col(1~5) > 4 3
Enter row(1~5) and col(1~5) > 5 3
BINGO! #3 column is marked all!
EXIT! 5 tried!

Enter row(1~5) and col(1~5) > 1 1
Enter row(1~5) and col(1~5) > 2 2
Enter row(1~5) and col(1~5) > 3 3
Enter row(1~5) and col(1~5) > 6 7
EXIT! 3 tried!

Enter row(1~5) and col(1~5) > 1 3
Enter row(1~5) and col(1~5) > 2 3
Enter row(1~5) and col(1~5) > 3 1
Enter row(1~5) and col(1~5) > 3 2
Enter row(1~5) and col(1~5) > 3 4
Enter row(1~5) and col(1~5) > 3 5
Enter row(1~5) and col(1~5) > 4 3
Enter row(1~5) and col(1~5) > 5 3
Enter row(1~5) and col(1~5) > 1 1
Enter row(1~5) and col(1~5) > 3 3
BINGO! #3 row is marked all!
BINGO! #3 column is marked all!
EXIT! 10 tried!
*/