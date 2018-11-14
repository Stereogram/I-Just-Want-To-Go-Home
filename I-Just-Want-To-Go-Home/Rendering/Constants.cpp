#include "Constants.h"

#include <string>

// Values from AI_MATKEY should be mapped into string variable names that .glsl files can use. 
// http://assimp.sourceforge.net/lib_html/materials.html
const std::string SHADER_DIFFUSE	   = "u_Diffuse";				// color
const std::string SHADER_SPECULAR      = "u_Specular";				// color
const std::string SHADER_AMBIENT	   = "u_Ambient";				// color
const std::string SHADER_EMISSIVE	   = "u_Emisive";				// color
const std::string SHADER_SHININESS	   = "u_Shininess";				// 0-1
const std::string SHADER_OPACITY	   = "u_Opacity";				// 0-1
const std::string SHADER_TEX_NONE      = "u_NoTexture";				// bool 
const std::string SHADER_TEX_DIFFUSE   = "u_TexDiffuse";			// texture 
const std::string SHADER_TEX_SPECULAR  = "u_TexSpecular";			// texture 
const std::string SHADER_TEX_NORMAL    = "u_TexNormal";				// texture 
const std::string SHADER_TEX_HEIGHT    = "u_TexHeight";				// texture
const std::string SHADER_LIGHT_D_POS   = "u_DirectionalLightPos";	// vec3 
const std::string SHADER_LIGHT_D_DIR   = "u_DirectionalLightDir";	// vec3
const std::string SHADER_LIGHT_D_COLOR = "u_DirectionalLightColor";	// vec4 
// todo etc. 