#include "includes.h"




BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		//MessageBoxA(0, "injected.", 0, 0);
		novacane::init();
	}

	return TRUE;
}
