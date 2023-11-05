//
// xemu User Interface
//
// Copyright (C) 2020-2022 Matt Borgerson
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#pragma once

class DebugApuWindow
{
public:
    bool m_is_open;
    DebugApuWindow();
    void Draw();
};

class DebugVideoWindow
{
public:
    bool m_is_open;
    bool m_transparent;
    bool m_position_restored;
    bool m_resize_init_complete;
    float m_prev_scale;

    DebugVideoWindow();
    void Draw();
};

class FPSManager
{
private:
    bool active;

public:
    FPSManager();
    void Draw();
};

extern DebugApuWindow apu_window;
extern DebugVideoWindow video_window;
extern FPSManager FPSManager_window;
