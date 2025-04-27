#include <iostream>
#include <string>
#include <memory>

//when you call new - you don't have to call delete
//basically automates the process of allocating memory on the heap when NEW and freeing that memory when DELETE

//1. NEVER use new or delete.It has to be very clear wether a pointer owns the object or doesn't. If it owns the object (for example, it is creating the object),
// use a smart pointer and make_unique or make_shared.

//2. By default, use unique_ptr because it has almost no overhead.If you know it will need to have several owners, use shared_ptr.

//3. When the pointer will not own the object, use raw pointers.For example, when passing an object to a function, the pointer that receives it will not
// own the object(it will still be alive once the function returns), so don't pass the smart pointer, pass a raw pointer.
//To pass a unique_ptr as a raw pointer to a function, the best way is to dereference it and pass it by reference.So the function is just for example
// "void foo(const Class& myObject)", and you call it with "foo(*myPointer)".
//Another way would be to pass the adress itself, with the method "unique_ptr.get()".

//4. Again, never use delete on a raw pointer and assume it does not own the object.

//5. When you create an object inside a function and want to return it, do it as a unique_ptr.The receiver will be able to do whatever they want with it.
// Keep in mind that now, passing a local object from a function by copy will not actually copy it, but move it as an r - value.So it will move into the new unique_ptr,
// without a compiler error.Again, the receiver can do whatever they want, so they can move it into a shared_ptr or even a raw pointer.

//6. When you want to transfer ownership of a unique_ptr, you can do it as a r - value using std::move().This is basically what I just explained that C++ does
// when returning from a function.You can do it to transfer the ownership to a function.

//Smart pointer having an overhead means that it takes up more memory than a normal pointer

//YOU SHOULD PROBABLY USE SMART POINTERS ALL THE TIME - USE UNIQUE POINTER WHENEVER YOU CAN

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destrosed Entity!" << std::endl;
	}
	void Print() {}
};

int main()
{
	std::shared_ptr<Entity> e0;
	{
		//	-	UNIQUE POINTER	-	\\

		//std::unique_ptr<Entity> entity(new Entity());//calling constructor explicitly
		//preferovaný zpùsob níže
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();//slightly safer because if constructor happens to throw an exception, you won't end up having pointer 
																	//with no reference (memory leak)
		//std::unique_ptr<Entity> entity0 = entity;					//you can't copy two unique pointers pointing in the same memory
		entity->Print();

		//	-	SHARED POINTER	-	\\
		//works via reference counting - basically a practice where you keep track of how many references you have to your pointer
		//as soon as the refference count reaches 0, that's when it gets deleted

		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		std::weak_ptr<Entity> weakEntity = sharedEntity;	//doesn't increase rev count - won't keep it alive but can work with it if it IS alive/valid
		//std::shared_ptr<Entity> sharedEntity = std::make_shared(new Entity()); if we construct the entity like this, shared pointer has to do two allocations, this way is wrong
		e0 = sharedEntity;
		
	}
	std::cin.get();
}