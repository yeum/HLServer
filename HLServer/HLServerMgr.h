#pragma once
#include "HLConfig.h"
#include "HLBoost.h"
#include "HLServer.h"

class HLServerMgr
{
public:
	HLServerMgr();
	~HLServerMgr();

public:
	void initialize(int32_t server_port, int32_t thread_num);
	void process(int32_t thread_num);

private:
	std::vector<boost::thread>	threads_;
	boost::asio::io_service		io_service_;
	HLServer*					server_;
};

