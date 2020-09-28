# O(n) time | O(n) space

def minRewards(score):
    rewards = [1 for _ in score]
    for i in range(1, len(score)):
        if score[i] > score[i - 1]:
            rewards[i] = rewards[i - 1] + 1
    for i in reversed((range(len(score) - 1))):
        if score[i] > score[i + 1]:
            rewards[i] = max(rewards[i], rewards[i + 1] + 1)
    return sum(rewards)