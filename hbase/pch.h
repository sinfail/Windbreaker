﻿#ifndef PCH_H
#define PCH_H

#pragma once
#define VERSION "1.0.0"
//Windows
#include <windows.h>
#include <exception>
#include <ctime>
#include <fstream>
#include<filesystem>
#include <D3D11.h>
#include<wrl/client.h>
#include <mutex>
#include <optional>
#include <functional>
#include <stack>
#include <cstdint>
#include <set>
#include <random>

//C++
#include "fmt/format.h"
#include"nlohmann/json.hpp"
#include"natives.h"
#pragma execution_character_set("utf-8")

#define MENU_PATH "C:\\Wbreaker"
#define MENU_NAME "Wbreaker"

namespace hbase
{
	using namespace std::chrono_literals;

	template <typename T>
	using comptr = Microsoft::WRL::ComPtr<T>;

	inline HMODULE g_hmodule{};
	inline HANDLE g_mainThread{};
	inline DWORD g_mainThreadId{};
	inline bool g_running{ true };
}
#include"logger.h"
#include"settings.h"
#endif //PCH_H
