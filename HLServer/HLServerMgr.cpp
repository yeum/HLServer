#include "HLServerMgr.h"

HLServerMgr::HLServerMgr()
{
}

HLServerMgr::~HLServerMgr()
{
}

void HLServerMgr::initialize(int32_t server_port, int32_t thread_num)
{
	server_ = new HLServer(io_service_);
	server_->initialize();
}

void HLServerMgr::process(int32_t thread_num)
{
	threads_.reserve(thread_num);
	threads_.emplace_back([&] {
		server_->process();
	});

	for (int i = 0; i < thread_num; ++i)
	{
		threads_[i].join();
	}
}
