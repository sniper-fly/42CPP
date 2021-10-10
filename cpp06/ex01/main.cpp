#include <iostream>

typedef struct {
    int id;
    int point;
} Data;

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data data = {
        .id = 21,
        .point = 42
    };
    std::cout << "data ptr:" << &data << std::endl;

    uintptr_t serialized_data = serialize(&data);
    Data* restore_data = deserialize(serialized_data);

    std::cout << "data ptr:" << restore_data << std::endl;
    std::cout << "data id:" << restore_data->id << std::endl;
    std::cout << "data point:" << restore_data->point << std::endl;
}

/*
独自のData structを作成する
serializeで載せてからdeserializeで再度変換して戻ってきた値が最初のポインタと一緒かどうか
*/