/**
 * https://www.coursera.org/lecture/data-structures/stacks-UdKzQ
 *
 * Stack: LIFO (last-in-first-out )
 *
 * stack_push(content): adds content to stack
 * stack_pop(): removes and returns most recently-added key
 */

/********************************\
    Linked List Implementation
\********************************/

#include <cstddef>
#include <iostream>

class StackNode
{
  public:
    // - constructors, assignments, destructor

    /// @param content Content
    StackNode(void* content) : content_(content), next_(NULL)
    {
        std::cout << "Node created.\n";
    }

    /// @param content Content
    /// @param next next node
    StackNode(void* content, StackNode* next) : content_(content), next_(next)
    {
        std::cout << "Node created.\n";
    }

    StackNode() : content_(NULL), next_(NULL)
    {
        std::cout << "Node created.\n";
    }

    ~StackNode()
    {
        std::cout << "Node destroyed.\n";
    }

    // - data

    void*      content_;
    StackNode* next_;
};

class Stack
{
  public:
    // - constructors, assignments, destructor

    Stack() : nodes_(NULL)
    {
        std::cout << "Stack created.\n";
    }

    ~Stack()
    {
        std::cout << "Stack destroyed.\n";
    }

    // - functions

    void push(void* content)
    {
        nodes_ = new StackNode(content, nodes_);
    }

    void* pop()
    {
        if (nodes_ == NULL)
            return NULL;
        else
        {
            StackNode* first_node = nodes_;
            void*      content    = first_node->content_;
            nodes_                = first_node->next_;
            delete first_node;
            return content;
        }
    }

  private:
    StackNode* nodes_;
};

int main(int argc, char const* argv[])
{
    Stack stack;
    stack.push(NULL);
    stack.pop();
    return 0;
}
