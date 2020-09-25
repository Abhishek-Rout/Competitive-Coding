# O(nd) time | O(n) space

def minNumberOfCoinsForChange(n, denoms):
    num_of_coins = [float("inf") for amount in range(n + 1)]
    num_of_coins[0] = 0
    for denom in denoms:
        for amount in range(len(num_of_coins)):
            if denom <= amount:
                num_of_coins[amount] = min(num_of_coins[amount], num_of_coins[amount - denom] + 1)
    return num_of_coins[n] if num_of_coins[n] != float("inf") else -1