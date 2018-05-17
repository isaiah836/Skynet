# Skynet
Write a program in C++ for the Skynet HK-Aerial
You should initialize a grid search of 8x8.
On each run, your program should choose a random numbered square on the grid numbered 1-64 to indicate where the enemy is located.
The enemy does not move in this simulation.
This program should be able to search for ground based enemies faster then when in the current linear search HK mode, however, you do not need to code in this comparison.
This program is for it's internal AI only and does not require human other other AI players.
This program should keep track of each turn and display this.
This program should use an unpredictable search pattern to the human on the ground.
The AI should used a Binary Search Pattern.
This program should loop unitl the Grid that the enemy is on is found by the Skynet HK-Aerial. At that point the found and engaging enemy status is displayed along with other information such as how long it took to find them by showing how many grids the HK searched before finding the enemy, what where the cordinates of the grids the HK looked at, and how large the search grid was. 
This code will be upgraded often to stay ahead of the enemy. Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
The Grid does not need to be displayed.
