#include "backends/imgui_impl_vulkan.h"
#include "IconsFontaudio.h"
#include "imgui.h"
#include "Utils.hpp"
#include "Walnut/Application.h"

namespace osb {
	namespace Utils {
		void AddAudioIcons(char* path)
		{ // Modified from the solution provided on the GitHub issue I opened three years ago: https://github.com/StudioCherno/Walnut/issues/14
			ImGuiIO& io = ImGui::GetIO();

			ImFontConfig config;
			config.MergeMode = true;
			config.GlyphMinAdvanceX = 13.0f; // Use if you want to make the icon monospaced
			static const ImWchar icon_ranges[] = { ICON_MIN_FAD, ICON_MAX_FAD, 0 };
			io.Fonts->AddFontFromFileTTF(path, 13.0f, &config, icon_ranges);

			// Upload Fonts
			{

				VkCommandBuffer command_buffer = Walnut::Application::GetCommandBuffer(true);
				VkDevice g_Device = Walnut::Application::GetDevice();
				ImGui_ImplVulkan_CreateFontsTexture(command_buffer);
				Walnut::Application::FlushCommandBuffer(command_buffer);
				auto err = vkDeviceWaitIdle(g_Device);
				check_vk_result(err);
				ImGui_ImplVulkan_DestroyFontUploadObjects();
			}
		}
	}
}