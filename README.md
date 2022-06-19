# New Idea/Logic(s)

### 1. 1695_Zero_Path
for every a[i][j] the possible values(path sum) it can take lies in a interval with a difference of 2.
use this to store all possible path sums for (i, j).

### 1694_Fake_Plastic_Trees
a) for a node, all of its children will be part of some query 1 to that child(c1, c2, c3..) say( 1 to c1 and 1 to c2 and 1 to c3) <br>
b) now the parent of (c1, c2, c3) i.e. current node must be added the values as Parent is also part of the sequence of updating c1, c2, c3.<br>
c) if all the updates done in (c1, c2, c3..) are unable to make value of Parent in its range (< Min value of node) then one extra operation is req<br>
d) then just make this node's value to be maximum permissible as it will be the last in the path of its update
if they make it to the range than the current value of node is just min(values from childs(c1, c2, c3), max permissible value of node)<br>
