## BINARY TREES

In C programming, a binary tree is a data structure composed of nodes, where each node contains a data element, and references to two child nodes, conventionally referred to as the left and right children. 
A binary tree's starting node is called the root, and every node without children is called a leaf. 
Binary trees are utilized for efficient searching and sorting operations, with the binary search tree being a notable variant where each node's left child holds a value less than its parent, and the right child holds a value greater. 
This property enables average time complexity for search operations to be O(log n), making it performant for large datasets.

Functions to print binary trees in a pretty way

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

[Original code](Original code from http://stackoverflow.com/a/13755911/5184480)
