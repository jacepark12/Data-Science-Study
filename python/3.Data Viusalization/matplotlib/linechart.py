import matplotlib.pyplot as plot

years = [1950, 1960, 1970, 1980, 1990, 2000, 2010]
gdp = [300.2, 543.3, 1075.9, 2862.5, 5979.6, 10289.7, 14958.3]

# x축에 연도 y축에 gdp 표시
plot.plot(years, gdp, color='green', marker = 'o', linestyle='solid')

#제목
plot.title("Nominal GDP")

#y축에 레이블 추가
plot.ylabel("Billions of $")
plot.show()

