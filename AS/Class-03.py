# Program 3: Write a Python program to calculate Mean, Median, Mode, Variance,
#Standard Deviation, Q1, Q2, Q3 and Skewness for any given dataset.

import numpy as np
import pandas as pd
from scipy import stats
# Your data
data = [75, 89, 66, 52, 90, 68, 83, 94, 77, 60, 38, 47, 87, 65, 97, 49, 65, 70,
            73, 81, 85, 77, 83, 56, 63, 79, 69, 82, 84, 70, 62, 75, 29, 88, 74, 37,
            81, 76, 74, 63, 69, 73, 91, 87, 76, 58, 63, 60, 71, 82]
# Convert to a pandas Series for convenience
data_series = pd.Series(data)
data.sort()
print(data)
# Calculating statistics
mean = data_series.mean()
median = data_series.median()
mode = data_series.mode()[0]
variance = data_series.var()
std_dev = data_series.std()
coef_of_variation = std_dev / mean * 100
q1 = data_series.quantile(0.25)
q2 = median  # Same as median
q3 = data_series.quantile(0.75)
skewness = data_series.skew()





# Printing results
print(f"Mean: {mean}")
print(f"Median: {median}")
print(f"Mode: {mode}")
print(f"Variance: {variance}")
print(f"Standard Deviation: {std_dev}")
print(f"Coefficient of Variation: {coef_of_variation}%")
print(f"Q1: {q1}")
print(f"Q2 (Median): {q2}")
print(f"Q3: {q3}")
print(f"Skewness: {skewness}")