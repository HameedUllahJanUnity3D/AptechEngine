#include <AptechEngine.h>

class Sandbox : public AptechEngine::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};
int main(){
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}