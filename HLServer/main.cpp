
#include "HLConfig.h"
#include "HLBoost.h"
#include "HLFlatbuffer.h"

int main()
{
	boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	t.wait();

	std::cout << "Hello, world!" << std::endl;

	system("pause");
	return 0;
}