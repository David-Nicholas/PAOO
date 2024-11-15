Item 4: Make sure that objects are initialized before they’re used.

    Manually initialize objects of built-in type, because C++ only some- times initializes them itself.
    In a constructor, prefer use of the member initialization list to as- signment inside the body of the constructor. List data members in the initialization list in the same order they’re declared in the class.
    Avoid initialization order problems across translation units by re- placing non-local static objects with local static objects.

Item 5: Know what functions C++ silently writes and calls.

    Destructor, Copy Constructor, Move Constructor, Copy Assignment, Move Assignment 

Item 6: Explicitly disallow the use of compiler generated functions you do not want

    The key to the solution is that all the compiler generated functions are public. To prevent these functions from being generated, you must declare them yourself, but there is nothing that requires that you declare them public. Instead, declare the copy constructor and the copy assignment operator private. By declaring a member function explicitly, you prevent compilers from generating their own version, and by making the function private, you keep people from calling it.