# Program 1: Write a python program to calculate:
#(1) Frequency Distribution
#(2) Relative Frequency Distribution
#(3) Frequency Historgram
#(4) Relative Frequency Histogram
#(5) Symmetry & Skewness

import matplotlib.pyplot as plt
import numpy as np
from scipy.stats import skew

# Data
grades = [75, 89, 66, 52, 90, 68, 83, 94, 77, 60, 38, 47, 87, 65, 97, 49,
          65, 70, 73, 81, 85, 77, 83, 56, 63, 79, 69, 82, 84, 70, 62, 75,
          29, 88, 74, 37, 81, 76, 74, 63, 69, 73, 91, 87, 76,
          58, 63, 60, 71, 82]

# (a) Frequency Distribution
hist, bins= np.histogram(grades, bins=range(29, 100,10))
print("Frequency Distribution:")
for i in range (len(bins) - 1):
  print(f"{bins[i]}-{bins[i-1]}: {hist[i]}")

# (b) Relative Frequency Distribution
relative_freq = hist / len(grades)
print("\n Relative Frequency Distribution:")
for i in range(len(bins)-1):
  print(f"{bins[i]}-{bins[i+1]}: {relative_freq[i]}")

# Histogram
plt.hist(grades, bins=range(29, 100, 10), edgecolor='black')
plt.title('Histogram')
plt.xlabel('Grade Ranges')
plt.ylabel('Frequency')
plt.xticks(range(29,100,10))
plt.show()

# Plotting the relative frequeny histogram
plt.figure(figsize=(10,6))
plt.bar(bins[:-1], relative_freq, width=10, align='edge', edgecolor='black', alpha=0.8)
plt.xticks(bins)
plt.xlabel('Grade Ranges')
plt.ylabel('Relative Frequency')
plt.title('Relative Frequency Distrubution of Grades')
plt.grid(axis='y')
plt.show()