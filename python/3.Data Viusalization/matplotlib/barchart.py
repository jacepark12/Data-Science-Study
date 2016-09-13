import matplotlib.pyplot as plot

movies=['Annie Hall', 'Ben-Hur', 'Casablanca', 'Gandhi', "West Side Story"]
num_oscars=[5,11,3,8, 10]

#막대 너비의 기본값은 0.8
#막대가 가운데로 올 수 있도록 왼쪽 좌표에 0.1씩 더한다
xs=[i + 0.1 for i,_ in enumerate(movies)]

#왼편으로 부터 x축의 위치는 xs, 높이는 num_oscars 막대
plot.bar(xs, num_oscars)
plot.ylabel('# of Academy Awards')
plot.title('Movies')

#막대의 가운데에 오도록 영화 제목 레이블 부착
plot.xticks([i + 0.5 for i,_ in enumerate(movies)],movies)
plot.show()