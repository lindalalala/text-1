#include <iostream>
#include<vector>
#include<stdexcept>
using namespace std;

istream& func(istream& is)
{
	int v;
	while (is >> v, !is.eof())
	{
		if (is.bad())
		{
			throw runtime_error("IO流错误");
		}
		if (is.fail())
		{
			cerr << "数据错误，请重试：" << endl;
			is.clear();
			is.ignore(100, '\n'); // 删除缓冲区中数据，最多忽略100个。当遇到 '\n' 时停止
			continue;
		}
		cout << v << endl;
	}
	is.clear();
	return is;
}

int main()
{

	func(cin);
	return 0;
}

