#include "errors.h"


bool thermostat_enabled = false; // Enabled or Disabled
float thermostat_target = 22; // 72f
float thermostat_swing = 1; // +/- 1 degree

enum thermostat_strategy_t {
	MANUAL,
	SETPOINT,
	SCHEDUAL
} thermostat_strategy;

// Heating or Cooling
enum thermostat_mode_t {
	AUTO, // Automatically switch between heating and cooling depending on the outside tempurature
	HEATING,
	COOLING
} thermostat_mode;


/** thermostat_enable
 * @returns bool thermostat_enabled
 */
bool thermostat_enable() {
	thermostat_enabled = true;
	return thermostat_enabled;
}

/** thermostat_disable
 * @returns bool thermostat_enabled
 */
bool thermostat_disable() {
	thermostat_enabled = false;
	return thermostat_enabled;
}

float thermostat_set_target(float target) {
	thermostat_target = target;
	return thermostat_target;
}

float thermostat_get_target() {
	return thermostat_target;
}

float thermostat_set_swing(float swing) {
	thermostat_swing = swing;
	return thermostat_swing;
}

float thermostat_get_swing() {
	return thermostat_swing;
}

thermostat_mode_t thermostat_set_mode(thermostat_mode_t mode) {
	thermostat_mode = mode;
	return thermostat_mode;
}

thermostat_mode_t thermostat_get_mode() {
	return thermostat_mode;
}

thermostat_strategy_t thermostat_set_strategy(thermostat_strategy_t strategy) {
	thermostat_strategy = strategy;
	return thermostat_strategy;
}

thermostat_strategy_t thermostat_get_strategy() {
	return thermostat_strategy;
}

// This should be called in the main loop of the program
// Return temp??
error_t _thermostat_run() {
	if (thermostat_enabled) {

		switch (thermostat_strategy) {
			case AUTO:
				break;
			case HEATING:
				break:
			case COOLING:
				break;
			default:
				return ERROR_BAD_VALUE;
		}
		
	} else return 0;
}