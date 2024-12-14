#pragma once

#ifdef AR_PLATFORM_WIN

extern Aurora::Application* Aurora::CreateApplication();

int main(int argc, char** argv) {
	printf("Aurora Engine\n");
	auto app = Aurora::CreateApplication();
	app->Run();
	delete app;
}

#endif
