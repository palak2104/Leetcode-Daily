* First of all convert the given graph into a normal graph where all the nodes are connected to all the node.<br>
* Convert a new adjecency list by giving a new number to all the nodes<br>
* Now we could do normal prims algo but limitation is all the nodes are connected to all the nodes.<br>
* So we need to keep accessing the priority queue untill we encounter all the nodes.<br>
* But if we do that there will be TC equal to max size of priority queue which will lead to TLE.<br>
* So we will keep a check, if that node is already visited we will continue, otherwise we will add it to our unordered visited map and do all other things.
