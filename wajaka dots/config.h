#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

static const uint32_t background_color = 0xfffaf7f8;

static const uint32_t outer_border_color_inactive = 0xfffafafa;
static const uint32_t inner_border_color_inactive = 0xffe8a2b2;

static const uint32_t outer_border_color_active = 0xfffafafa;
static const uint32_t inner_border_color_active = 0xffff4268;

static const uint32_t outer_border_width = 1;
static const uint32_t inner_border_width = 1;

static const uint32_t select_box_color = 0xffff4268;
static const uint32_t select_box_border = 2;

/* cursor themes:
 * - "swc"  : use swc's built-in cursor, client cursors allowed, no per-chord
 * cursor
 * - "nein" : use the plan 9 cursor set, client cursors blocked, per chord
 * cursors
 */
static const char *const cursor_theme = "nein";

/* recommended st-wl/hst (stock st-wl has some issues) or havoc
 * but anything will work just fine */
static const char *const select_term_app_id = "st-wl-256color";
static const char *const term = "st-wl";

/* a flag for your terminal emulator to setup a windowid
 * - for st-wl: -w
 * - for havoc: -i
 * - for everything else: idk
 */
static const char *const term_flag = "-w";

/* gui programs take over the geometry of the terminal, broken for xwayland */
static const bool enable_terminal_spawning = true;

/* define a list of terminals that you use */
static const char *const terminal_app_ids[] = {"st-wl", "havoc", "alacritty",
                                               NULL};

static const int chord_click_timeout_ms = 250;

static const int32_t move_scroll_edge_threshold = 80;
static const int32_t move_scroll_speed = 16;
static const float move_ease_factor = 0.30f;

static const int timerms = 16;

static const int scrollpx = 64;
static const int scrollease = 4;
static const int scrollcap = 64;

/* scroll chord mode:
 * - true  : drag mouse to scroll in any direction
 * - false : use scroll wheel for vertical scrolling only
 */
static const bool scroll_drag_mode = true;

/* enable zoom feature:
 * - when enabled: scroll wheel controls zoom when in drag scroll mode
 * broken for multiple monitors
 */
static const bool enable_zoom = true;

/* whether or not to center the window.
 * in drag mode, it centers on both axis
 * otherwise on the vertical axis
 */
static const bool center_focus = true;

/* customizable 2-1 chord
 * avaliable options:
 * - sticky: make window not move when scroll
 * - fullscreen: make a window take entire screen
 * - jump: switch focus to the closest window
 */
static const char *const custom_chord = "sticky";

#endif
