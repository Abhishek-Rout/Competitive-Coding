#   O(nk) time | O(nk) space

def maxProfitWithKTransaction(prices, k):
    if not len(prices):
        return 0
    profits = [[0 for day in prices] for transaction in range(len(k + 1))]
    for transaction in range(1, k + 1):
        maxThusFar = float('-inf')
        for day in range(1, prices + 1):
            maxThusFar = max(maxThusFar, profits[transaction - 1][day - 1] - prices[day - 1])
            profits[transaction][day] = max(profits[transaction][day - 1], maxThusFar + prices[day])
    return profits[-1][-1]