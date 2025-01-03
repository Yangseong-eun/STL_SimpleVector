#pragma once
#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
class SimpleVector {
private:
    T* data;
    int currentSize;
    int currentCapacity;

protected:
    void resize(int newCapacity) {
        if (newCapacity <= currentCapacity) {
            return;
        }

        T* newData = new T[newCapacity];
        for (int i = 0; i < currentSize; ++i) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        currentCapacity = newCapacity;
    }

public:
    SimpleVector() : data(new T[10]), currentSize(0), currentCapacity(10) {}
    SimpleVector(int capacity) : data(new T[capacity]), currentSize(0), currentCapacity(capacity) {}

    // 복사 생성자
    SimpleVector(const SimpleVector& other)
        : data(new T[other.currentCapacity]),
        currentSize(other.currentSize),
        currentCapacity(other.currentCapacity) {
        for (int i = 0; i < other.currentSize; i++) {
            data[i] = other.data[i];
        }
    }

    // 소멸자
    ~SimpleVector() { delete[] data; }

    // 요소 추가
    void push_back(const T& value) {
        if (currentSize == currentCapacity) {
            resize(currentCapacity + 5);
        }
        data[currentSize++] = value;
    }

    // 마지막 요소 제거
    void pop_back() {
        if (currentSize > 0) {
            --currentSize;
        }
    }

    // 현재 원소 개수 반환
    int size() const {
        return currentSize;
    }

    // 내부 배열 용량 반환
    int capacity() const {
        return currentCapacity;
    }


    // 정렬 메서드
    void sortData() {
        std::sort(data, data + currentSize);
    }
};
