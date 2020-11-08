//
// Created by User on 02.02.2020.
//

#ifndef OOPPROJECT_REPOZYTORIUM_HPP
#define OOPPROJECT_REPOZYTORIUM_HPP

#include <bits/stdc++.h>

template <class T>
class Repozytorium {
private:
    std::vector<std::shared_ptr<T>> elementy;
public:
    void dodaj(std::shared_ptr<T> element);

    void usun(std::shared_ptr<T> element);

    typename std::vector<std::shared_ptr<T>>::iterator begin();

    typename std::vector<std::shared_ptr<T>>::iterator end();

    std::shared_ptr<T> getElement(int index);

    int liczbaElementow();
};

template<class T>
void Repozytorium<T>::dodaj(std::shared_ptr<T> element) {
    elementy.push_back(element);

}

template<class T>
void Repozytorium<T>::usun(std::shared_ptr<T> element) {
    for(int i=0; i<elementy.size();i++)
        if(elementy[i]==element)
            elementy.erase(elementy.begin()+i);
}

template<class T>
typename std::vector<std::shared_ptr<T>>::iterator Repozytorium<T>::begin(){
    return elementy.begin();
}

template<class T>
typename std::vector<std::shared_ptr<T>>::iterator Repozytorium<T>::end(){
    return elementy.end();
}

template<class T>
std::shared_ptr<T> Repozytorium<T>::getElement(int index) {
    if (index >= 0 && index < elementy.size()) {
        return elementy[index];
    }
    return nullptr;
}

template<class T>
int Repozytorium<T>::liczbaElementow() {
    return elementy.size();
}



#endif //OOPPROJECT_REPOZYTORIUM_HPP
