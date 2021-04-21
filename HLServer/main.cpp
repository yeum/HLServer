
#include "HLConfig.h"
#include "HLBoost.h"
#include "HLFlatbuffer.h"
#include "HLServerMgr.h"

int main()
{
	HLServerMgr server_mgr;
	int32_t max_thread_num = boost::thread::hardware_concurrency();
	server_mgr.initialize(37000, max_thread_num);

	system("pause");
	return 0;
}