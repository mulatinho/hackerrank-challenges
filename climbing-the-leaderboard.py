#!/bin/python3

import math
import os
import random
import re
import sys

def climbingLeaderboard(ranked, player):
    result = []
    ranking = sorted(set(ranked), reverse=True)
    index = len(ranking) - 1
    current = len(ranking) + 1

    print("ranking: ", ranking)

    for score in player:
        while index >= 0:
            print(".in -> index: {0}, current: {1}, ranking[index]: {2}, score: {3}"
                  .format(index, current, ranking[index], score))
            if score >= ranking[index]:
                current -= 1
            else:
                break
            index -= 1

        print("out -> index: {0}, current: {1}, ranking[index]: {2}, score:{3}"
              .format(index, current, ranking[index], score))
        result.append(current)

    return result

if __name__ == '__main__':
    ranked_count = int(input().strip())

    ranked = list(map(int, input().rstrip().split()))

    player_count = int(input().strip())

    player = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(ranked, player)

    print("ranked: ", ranked)
    print("player: ", player)

    print(result)

