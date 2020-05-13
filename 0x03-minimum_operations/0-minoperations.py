#!/usr/bin/python3
""" function: return min op """

def minOperations(n):
    """ return min op """
    end = 0

    for iter in range(2, n):
        while (n % iter == 0):
            end += iter
            n = n / iter
        return end
    
