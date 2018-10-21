# Knapsack01

### "The knapsack 0-1 problem"

The knapsack problem or rucksack problem is a problem in combinatorial optimization: Given a set of items, each with a weight and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible. It derives its name from the problem faced by someone who is constrained by a fixed-size knapsack and must fill it with the most valuable items. 

The problem often arises in resource allocation where there are financial constraints and is studied in fields such as combinatorics, computer science, complexity theory, cryptography, applied mathematics, and daily fantasy sports.

### Definition
> The most common problem being solved is the 0-1 knapsack problem, which restricts the number <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;x_i" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;x_i" title="x_i" /></a> of copies of each kind of item to zero or one. Given a set of n items numbered from 1 up to n, each with a weight w_i and a value v_i, along with a maximum weight capacity W: 

Maximise :  <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sum_{i=1}^{n}&space;v_iw_i" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sum_{i=1}^{n}&space;v_iw_i" title="\sum_{i=1}^{n} v_iw_i" /></a>



Subject to : <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sum_{i=1}^{n}&space;v_iw_i&space;<&space;W" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sum_{i=1}^{n}&space;v_iw_i&space;<&space;W" title="\sum_{i=1}^{n} v_iw_i < W" /></a>



