#pragma once
#include "common.hh"

class InputManager
{
protected:
	ImVec2 m_last_mouse_pos;
	bool m_navigating_with_controller;
	uint32_t m_buttons;
	bool m_mouse_moved;
	bool m_mouse_moved_only;
	bool m_mouse_clicked_only;

public:
	InputManager();
	void Update();
	inline bool IsNavigatingWithController() { return m_navigating_with_controller; }
	inline bool MouseMoved() { return m_mouse_moved; }
	inline bool MouseMovedOnly() { return m_mouse_moved_only; }
	inline bool MouseClickedOnly() { return m_mouse_clicked_only; }
	inline uint32_t CombinedButtons() { return m_buttons; }
};

extern InputManager g_input_mgr;
