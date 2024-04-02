tree_node * tree_alloc(char *s);


void tree_free(tree_node * t)
{
    free(t->elem);
    for(tree_node * i = t->child; i != NULL; i = i->next)
    {
        tree_free(i);
    }
    free(i);
}

tree_node * tree_child_add (tree_node * parent, tree_node * child)
{
    if(child->next == NULL)
        return NULL;

    if(parent->child == NULL)
    {
        parent->child = child;
        child->parent = parent;
    }
    else
    {
        tree_node * last;
        last = parent->child;
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = child;
        child->parent = parent;
        
    }
    return parent;
}

int tree_node_degree(tree_node * t)
{
    int degree;

    for(tree_node * i = t->child; i != NULL; i = i->next)
    {
        degree++;
    }

    return degree;
}

int tree_degree(tree_node * t)
{
    int max;

    max = tree_node_degree(t);

    for(tree_node * i = t->child; i != NULL; i = i->next)
    {
        int d;
        d = tree_degree(i);
        if(max < d)
        {
            max = d;
        }
    }
    return max;

    //max(tree_node_degree(t), tree_degree(c) for each chiled)
}

int tree_node_depth(tree_node * t)
{
    int depth = 0;

    for(tree_node * i = t; i->parent != NULL; i->parent)
    {
        depth++;
    }

    return depth;
}

int tree_height(tree_node * t)
{
    // int max;
    // max = tree_node_depth(t) + 1;
    // if(i->child)
    // {
    //     for(tree_node * i = t->child; i->child; i = i->next)
    //     {
    //         int h;
    //         h = tree_height(i) + 1;
    //         if(max < h)
    //             max = h;
    //     }
    // }
    // return max;

    if(t->child == NULL)
        return 1;

    int max = 0;
    for(tree_node * i = t->child; i->child; i = i->next)
    {
        int h;
        h = tree_height(i);
        if(max < h)
            max = h;
    }

    return max + 1;
}



int tree_contains(tree_node * t, char s)
{
    return 1;
}