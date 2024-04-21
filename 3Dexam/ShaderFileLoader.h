#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>

class ShaderLoader {
public:
	static std::string LoadShaderFromFile(const std::string& filePath);
};