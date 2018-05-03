#!/usr/bin/python3
"""Documentation for singly linked list classes"""


class Node():
    """Node class for a singly-linked list"""

    def __init__(self, data, next_node=None):
        if type(data) != int:
            raise TypeError("data must be an integer")
        self.__data = data

        if next_node == None or isinstance(next_node, Node):
            self.__next_node = next_node
        else:
            raise TypeError("next_node must be a Node object")

    @property
    def data(self):
        return self.__data

    @data.setter
    def data(self, value):
        if type(value) != int:
            raise TypeError("data must be an integer")
        self.__data = value

    @property
    def next_node(self):
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        if value == None or isinstance(value, Node):
            self.__next_node = value
        else:
            raise TypeError("next_node must be a Node object")

class SinglyLinkedList():
    def __init__(self):
        """Initializes an empty singly linked list object"""

        self.__head = None

    def sorted_insert(self, value):
        if type(value) != int:
            raise TypeError("data must be an integer")
        temp = None
        iterator = self.__head
        new_node = Node(value)
        if iterator is None:
            new_node.__next_node = None
            self.__head = new_node

        else:
            while iterator is not None and value > iterator.data:
                temp = iterator
                iterator = iterator.__next_node
            if temp is None:
                new_node.__next_node = self.__head
                self.__head = new_node
            else:
                temp.__next_node = new_node
                new_node.__next_node = iterator

    def __str__(self):
        linked_list = []
        iterator = self.__head
        while iterator is not None:
            linked_list.append(iterator.data)
            iterator = iterator.__next_node
        return ('\n'.join(str(i) for i in linked_list))
