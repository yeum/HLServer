#pragma once
#include "HLConfig.h"
#include "HLBoost.h"

class HLServer
{
public:
	HLServer(boost::asio::io_service& io_service);
	~HLServer();

public:
	void initialize();
	void process();
	void stop();

public:
	// boost::asio::ip::tcp::socket socket_;
	boost::asio::io_service		io_service_;
};

