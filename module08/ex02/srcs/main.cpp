#include <list>
#include <iomanip>
#include "MutantStack.hpp"

int	main()
{
	std::cout << "---------------------------------------------\n";
	std::cout << "---------   TEST 1 (MutantStack)   ----------\n";
	std::cout << "---------------------------------------------" << std::endl;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << mstack.top() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		mstack.pop();

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << mstack.size() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		
		std::cout << "---------------------------------------------\n";
		std::cout << "--  MutantStack: input => 0, 737, 5, 3, 5  --\n";
		std::cout << "---------------------------------------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "---------------------------------------------" << std::endl;
	}

	std::cout << "---------------------------------------------\n";
	std::cout << "-----------   TEST 2 (List)    --------------\n";
	std::cout << "---------------------------------------------" << std::endl;
	{
		std::list<int>	intList;

		intList.push_back(5);
		intList.push_back(17);

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << intList.back() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		intList.pop_back();

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << intList.size() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		intList.push_back(3);
		intList.push_back(5);
		intList.push_back(737);
		intList.push_back(0);

		std::list<int>::iterator it = intList.begin();
		std::list<int>::iterator ite = intList.end();

		++it;
		--it;
		
		std::cout << "---------------------------------------------\n";
		std::cout << "--  List: begin => 5, 3, 5, 737, 0 => end  --\n";
		std::cout << "---------------------------------------------" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "---------------------------------------------" << std::endl;
	}

	std::cout << "---------------------------------------------\n";
	std::cout << "---------   TEST 3 (MutantStack)   ----------\n";
	std::cout << "---------------------------------------------" << std::endl;
	{
		MutantStack<int>	mstack;

		std::cout << "---------------------------------------------" << std::endl;

		mstack.push(1);
		mstack.push(2);
		mstack.push(3);
		mstack.push(4);

		std::stack<int>	s(mstack);

		std::cout << std::setw(10) << "Mstack" << " | " << std::setw(10) << "stack" << std::endl;
		std::cout << std::setw(10) << mstack.top() << " | " << std::setw(10) << s.top() << std::endl;
		mstack.pop();
		s.pop();
		std::cout << std::setw(10) << mstack.top() << " | " << std::setw(10) << s.top() << std::endl;
		mstack.pop();
		s.pop();		
		std::cout << std::setw(10) << mstack.top() << " | " << std::setw(10) << s.top() << std::endl;
		mstack.pop();
		s.pop();
		std::cout << std::setw(10) << mstack.top() << " | " << std::setw(10) << s.top() << std::endl;
		mstack.pop();
		s.pop();
		std::cout << "---------------------------------------------" << std::endl;
	}

	std::cout << "---------------------------------------------\n";
	std::cout << "---------   TEST 4 (MutantStack)   ----------\n";
	std::cout << "---------------------------------------------" << std::endl;
	{
		MutantStack<std::string>	mstack;

		mstack.push("one");
		mstack.push("two");
		mstack.push("three");
		mstack.push("four");

		MutantStack<std::string>	copyMstack1(mstack);
		MutantStack<std::string>	copyMstack2;

		copyMstack2 = mstack;

		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "mstack.size()      = " << mstack.size() << "\n";
		std::cout << "copyMstack1.size() = " << copyMstack1.size() << "\n";
		std::cout << "copyMstack2.size() = " << copyMstack2.size() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "mstack.empty() ==> ";
		if (mstack.empty())
			std::cout << "true" << std::endl;
		else
			std::cout << "false" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;

		MutantStack<std::string>::reverse_iterator	rIt = mstack.rbegin();
		MutantStack<std::string>::reverse_iterator	rIte = mstack.rend();
		
		while (rIt != rIte)
		{
			std::cout << *rIt << std::endl;
			++rIt;
		}
		std::cout << "---------------------------------------------" << std::endl;
	}
	return (0);
}
