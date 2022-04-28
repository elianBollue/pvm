#include "linked_list.h"


/*
  Counts the number of elements in the list.

  The null pointer is written nullptr in C++.
*/
unsigned length(linked_list* lst)
{
    unsigned counter = 0;
    auto anderelst = lst;
    while (anderelst != nullptr) {
        counter++;
        anderelst = (*anderelst).next;
    }
    return counter;
}

/*
  Finds the penultimate node in the list.
  The penultimate node is the node just before the last one.
  If there is no penultimate node (because the list is too short),
  return nullptr.
*/
linked_list* penultimate(linked_list* lst)
{
    if (lst == nullptr || (*lst).next == nullptr) {
        return nullptr;
    }
    else
    {
        linked_list* currentlist = lst;
        linked_list* nextlist = (*lst).next;

        while ((*nextlist).next != nullptr) {
            nextlist = (*nextlist).next;
            currentlist = (*currentlist).next;
        }
        return currentlist;
    }
}

/*
  Returns a pointer to the longest list.
  Keep it as efficient as possible: if you
  get a list of 1 long and one of 1 billion long,
  you do not want to spend time counting a billion elements.

  If both lists have equal length, return nullptr.
*/
linked_list* longest(linked_list* xs, linked_list* ys)
{
    auto p = xs, q = ys;

    while (p != nullptr && q != nullptr) {
        p = (*p).next;
        q = (*q).next;
    }
    if (p == nullptr && q == nullptr) {
        return nullptr;
    }
    else
    {
        return p != nullptr ? xs : ys;
    }
}

/*
  Given a non-cyclic linked list, modifies
  it so as to make it cyclic by having
  the last node point to the first.
*/
void make_cyclic(linked_list* lst)
{
    linked_list* first_node = lst;

    while ((*lst).next != nullptr) {
        lst = (*lst).next;
    }
    (*lst).next = first_node;
}

/*
  Checks whether the linked list contains
  a cycle. You will not need a special
  data structure for this (i.e. no arrays,
  lists, sets, ... are necessary).
  If you need inspiration for how to do this,
  look up hares and tortoises.
*/
bool has_cycle(linked_list* lst)
{
    if (lst == nullptr) {
        return false;
    }
    else
    {
        linked_list* tortoise = lst;
        linked_list* hare = (*lst).next;

        while (tortoise != hare) {
            if (hare == nullptr || (*hare).next == nullptr) {
                return false;
            }
            else
            {
                tortoise = (*tortoise).next;
                hare = (*(*hare).next).next;
            }
        }
    }
}
