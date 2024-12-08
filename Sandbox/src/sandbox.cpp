#include <sky.h>

class Sandbox : public sky::application {
public:
	Sandbox() {

	};

	~Sandbox() {

	};

};

sky::application* sky::createApplication() {
	return new Sandbox();
};