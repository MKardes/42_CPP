/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:21:19 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/20 15:21:20 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {  
        std::cout << std::endl << "---------Test-1---------" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    {
        std::cout << std::endl << "---------Test-2---------" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        std::cout << "Stack 1" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);


        MutantStack<int> mstack1;
        mstack1.push(511);
        mstack1.push(-21);
        it = mstack1.begin();
        ite = mstack1.end();

        std::cout << "Stack 2" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        mstack1.swap(mstack);

        it = mstack.begin();
        ite = mstack.end();

        std::cout << std::endl << "Stack 1" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        it = mstack1.begin();
        ite = mstack1.end();
        ++it;
        --it;
        std::cout << "Stack 2" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::cout << std::endl;
        std::cout << "Top of Stack2: " << mstack1.top() << std::endl;
        std::cout << "Size: "<< mstack1.size() << std::endl;
        mstack1.pop();
        mstack1.pop();
        std::cout << "Size "<< mstack1.size() << std::endl;
    }
    return 0;
}
