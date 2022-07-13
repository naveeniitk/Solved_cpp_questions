# New Idea/Logic(s)

### 1695_Zero_Path
for every a[i][j] the possible values(path sum) it can take lies in a interval with a difference of 2.
use this to store all possible path sums for (i, j).

### 1694_Fake_Plastic_Trees
a) for a node, all of its children will be part of some query 1 to that child(c1, c2, c3..) say( 1 to c1 and 1 to c2 and 1 to c3) <br>
b) now the parent of (c1, c2, c3) i.e. current node must be added the values as Parent is also part of the sequence of updating c1, c2, c3.<br>
c) if all the updates done in (c1, c2, c3..) are unable to make value of Parent in its range (< Min value of node) then one extra operation is req<br>
d) then just make this node's value to be maximum permissible as it will be the last in the path of its update
if they make it to the range than the current value of node is just min(values from childs(c1, c2, c3), max permissible value of node)<br>

### 1670 : Where is the Pizza?
a) Think of Elements connected as together as a chain like 1 to 2 to 3 etc.<br>

### 1651C: Fault_Tolerant_Network
a) Implementation question[ nice one ]<br>
b) Think of possible cases, which wires should be connected?<br>

### 1649C: Weird_Sum
a) Write the mathematical equation and then simplify using manhattan distance formula and taking the array in sorted order<br>

### The enchanted Forest
a) think about splitting problem into cases (k>=n && k<n) <br>
b) don't dive to think it might be a dp problem<br>

### 1702_E_Split_Into_Two_Sets
1) Think of using Graphs & cycles <br>
2) what about bipartite?<br>
3) Dsu ?<br>
4) might add some dummy nodes like for (x, y) -> [x, y+n] and [x+n, y] <br>
