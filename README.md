# SimpleVector 클래스 함수 설명

SimpleVector() (기본 생성자)
초기 크기 10의 배열을 생성하고, currentSize를 0으로 설정합니다.

SimpleVector(int capacity) (사용자 정의 생성자)
사용자 지정 용량으로 배열을 생성합니다.

SimpleVector(const SimpleVector& other) (복사 생성자)
다른 SimpleVector 객체의 데이터를 복사하여 새로운 객체를 생성합니다.

~SimpleVector() (소멸자)
동적으로 할당된 메모리를 해제합니다.

void push_back(const T& value)
배열의 끝에 새로운 요소를 추가합니다. 용량이 부족하면 크기를 5씩 늘립니다.

void pop_back()
배열의 마지막 요소를 제거합니다. 배열이 비어 있는 경우 아무 작업도 하지 않습니다.

int size() const
현재 저장된 요소의 개수를 반환합니다.

int capacity() const
내부 배열의 현재 용량을 반환합니다.

void sortData()
배열의 요소를 정렬합니다. 내부적으로 std::sort를 사용합니다.

void resize(int newCapacity) (protected)
내부 배열의 크기를 증가시킵니다. 새 크기는 기존 크기를 초과해야만 업데이트됩니다.

## 주요 데이터 멤버
T* data
요소를 저장하는 동적 배열 포인터입니다.

int currentSize
현재 저장된 요소의 개수입니다.

int currentCapacity
내부 배열의 용량입니다.
