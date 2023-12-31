#include <fstream>
#include <vector>

#define IN "{project}in.txt"
#define OUT "{project}out.txt"

using u8 = unsigned char;
using u16 = unsigned short;
using u32 = unsigned int;
using u64 = unsigned long long;

using i8 = signed char;
using i16 = signed short;
using i32 = signed int;
using i64 = signed long long;

using f32 = float;
using f64 = double;

using namespace std;

template <typename T>
using vec = vector<T>;

int main()
{
    ifstream in(IN);
    ofstream out(OUT);

    i64 a, b;
    in >> a >> b;

    out << a + b;

    return 0;
}
