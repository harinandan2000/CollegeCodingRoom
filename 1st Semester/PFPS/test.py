import matplotlib.pyplot as plt
x = [i for i in range(-100, 100)]
y = [j*j for j in x]
plt.plot(x, y)
plt.show()