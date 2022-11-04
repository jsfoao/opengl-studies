#pragma once
#include "GL/glew.h"
#include <stb_image.h>
#include <iostream>
#include <string>

using namespace std;

namespace Nata
{
#define TEXTURE_DIFFUSE "diffuse"
#define TEXTURE_SPECULAR "specular"
#define TEXTURE_NORMAL "normal"
#define TEXTURE_METAL "metal"

	class Texture
	{
	public:
		unsigned int ID;
		string Type;
		string Path;
		
		static int LoadFromFile(const char* path, string directory);
	};
}