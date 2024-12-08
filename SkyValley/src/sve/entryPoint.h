#pragma once

#ifdef SKY_PLATFORM_WINDOWS

extern sky::application* sky::createApplication();

int main(int argc, char** argv) {

	printf("SkyValley Engine\n");
	auto app = sky::createApplication();
	app->run();
	delete app;

};

#endif
