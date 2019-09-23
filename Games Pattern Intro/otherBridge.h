#pragma once
#include "bridge.h"
class BridgeHandler
{
public:
	BridgeHandler() : m_bridge(new Bridge()) {};
	Bridge* operator->() { return m_bridge; };
private:
	Bridge* m_bridge;
};
