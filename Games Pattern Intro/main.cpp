#include "factory.h"
#include "bridge.h"
#include "anti.h"
#include "otherFactory.h"
#include "otherBridge.h"
#include <iostream>
// @author Dylan Curran

int main()
{
	// Factory esque code
	Factory* m_factory = new OtherFactory;
	m_factory->example();
	delete m_factory;

	// anti code section
	Anti m_anti;
	m_anti.DivideTime();

	// bridge code section
	BridgeHandler m_bridgeHandle;
	m_bridgeHandle->BridgeOutput();
	 
	system("Pause");
	return 0;
}