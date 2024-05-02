import matplotlib.pyplot as plt

def snd():
    x1 = [300, 360, 420, 512, 620, 740, 860]
    y1 = [3500, 3650, 3200, 3175, 3800, 3775, 4400]
    y2 = [2400, 1900, 2450, 2600, 2700, 2800, 2900]
    y3 = [3050, 1700, 2300, 900, 1800, 1400, 1125]
    y4 = [1000, 800, 1000, 500, 950, 1100, 1050]

    plt.plot(x1, y1, 'r', linestyle='--', label='OxO (0)')
    plt.scatter(x1, y1, color='red')

    plt.plot(x1, y2, 'g', linestyle='-', label='OxT (1)')
    plt.scatter(x1, y2, color='g')

    plt.plot(x1, y3, 'b', linestyle='-.', label='TxO (2)')
    plt.scatter(x1, y3, color='b')

    plt.plot(x1, y4, 'c', linestyle=':', label='TxT (3)')
    plt.scatter(x1, y4, color='c')

    plt.grid(which='both', axis='y', linewidth=0.5)
    plt.xlabel('Количество нод')
    plt.ylabel('Speedup clean')

    plt.legend()
    plt.show()


def fst():
    x1 = [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200]
    y1 = [100, 200, 320, 480, 570, 600, 2000, 2412, 2000, 1700, 3000, 1542]
    y2 = [90, 180, 310, 450, 530, 500, 1000, 1700, 2200, 1650, 3000, 1375]
    y3 = [50, 80, 210, 350, 310, 510, 760, 865, 800, 500, 350, 253]
    y4 = [45, 85, 110, 259, 330, 590, 623, 795, 864, 590, 375, 258]

    plt.plot(x1, y1, 'r', linestyle='--', label='OxO (0)')
    plt.scatter(x1, y1, color='red')

    plt.plot(x1, y2, 'g', linestyle='-', label='OxT (1)')
    plt.scatter(x1, y2, color='g')

    plt.plot(x1, y3, 'b', linestyle='-.', label='TxO (2)')
    plt.scatter(x1, y3, color='b')

    plt.plot(x1, y4, 'c', linestyle=':', label='TxT (3)')
    plt.scatter(x1, y4, color='c')

    plt.grid(which='both', axis='y', linewidth=0.5)
    plt.xlabel('Количество нод')
    plt.ylabel('Speedup clean')

    plt.legend()
    plt.show()


if __name__ == "__main__":
    fst()
