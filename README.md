# Tower_of_Hanoi_AI
After creating an optimized state space tree, Breadth First Search can be used to solve the famous Tower of Hanoi (TOH) problem. I have used simple c++ language in this case.

1. State Representation : At First go through the State Space Tree to understand the logical flow of the problem. State 111 represents that Large, Mid and Small all three are in tower 1. Subsequently, State 213 means Large in tower 2 , Mid in tower 1 and small is in tower 3. This way other states have been created during the state space tree generation. However, during generation the already visited states has been skiped from the list of possible states.

2. Breadth First Search (BFS) has been used to search for the optimized short path towards the goal state 333.
