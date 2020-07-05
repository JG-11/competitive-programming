# Same Tree

## Given two binary trees, we need to return if they have identical structure


> We can apply serialization to the BT (encode the tree to string).
> Serialization follows the next path: Top-Down and Left-Right.

### Given the following example
        1
    2       3

We return the next string: "1, 2, 3"

### Following this other one:
        1
    2

We return the next string: "1, 2, null"

### And this last one:
    1
        2
We return: "1, null, 2"


## What do we need?
1. queue<Node*> nodes
2. To empty the queue: Node* aux = nodes.front(), and then nodes.pop()
3. We got two cases:
    if(aux) to_string(aux->value), nodes.push(left and right)
    if(!aux) "null"
4. We repeat serialization with the other tree
5. Then, we need to compare both resulting strings
6. At the end, we return true or false