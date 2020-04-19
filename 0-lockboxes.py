#!/usr/bin/python3
#challenge


def canUnlockAll(boxes):
    # loop boxes
    for iter in range(1, len(boxes) - 1):
        # Make list of all keys
        temp = []
        for index in range(len(boxes)):
            if index == iter:
                continue
            for key in boxes[index]:
                temp.append(key)
        # nokey
        if x not in temp:
            return False
    return True
