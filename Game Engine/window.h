#pragma once

#include <iostream>
#include <GLFW/glfw3.h>

namespace engine { namespace graphics {

	class Window {
	private:
		int m_Width, m_Height;
		const char* m_Title;
		GLFWwindow* m_Window;
		bool m_Closed;

	public:
		Window(int width, int height, const char* name);
		~Window();
		void clear() const;
		void update();
		bool closed() const;

		inline int getWidth() const { return m_Width; }
		inline int getHeight() const { return m_Height; }

	private:
		bool init();
	};

} }