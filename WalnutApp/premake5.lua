project "OpenSoundboard"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++17"
   targetdir "bin/%{cfg.buildcfg}"
   staticruntime "off"

   files { "src/**.h", "src/**.hpp", "src/**.cpp" }

   includedirs
   {
      "../vendor/imgui",
      "../vendor/glfw/include",

      "../Walnut/src",

      "%{IncludeDir.VulkanSDK}",
      "%{IncludeDir.glm}",

      "../vendor/FMOD",
      "../vendor/JSON"
   }

    links
    {
        "Walnut",
        "fmod_vc",
    }

    libdirs {
       "%{prj.location}/lib"
    }

   targetdir ("../bin/" .. outputdir .. "/%{prj.name}")
   objdir ("../bin-int/" .. outputdir .. "/%{prj.name}")

   postbuildcommands {
      "{COPY} \"%{prj.location}/lib/fmod.dll\" \"%{cfg.targetdir}\"",
      "{COPY} \"%{prj.location}/fonts/fontaudio.ttf\" \"%{cfg.targetdir}/fonts/\"",
      "{COPY} \"%{prj.location}/resources/FPOSplashScreen.png\" \"%{cfg.targetdir}/resources/\""
   }

   filter "system:windows"
      systemversion "latest"
      defines { "WL_PLATFORM_WINDOWS" }

   filter "configurations:Debug"
      defines { "WL_DEBUG" }
      runtime "Debug"
      symbols "On"

   filter "configurations:Release"
      defines { "WL_RELEASE" }
      runtime "Release"
      optimize "On"
      symbols "On"

   filter "configurations:Dist"
      kind "WindowedApp"
      defines { "WL_DIST" }
      runtime "Release"
      optimize "On"
      symbols "Off"