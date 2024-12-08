#pragma once

#include "core.h"

namespace sky {

	class SKY_API application
	{
	public:
		application();
		virtual ~application();

		void run();

	};

	application* createApplication();

};

