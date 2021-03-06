/********************************************************************************
* Copyright (c) 2010-2019 Robert Bosch GmbH
*
* This program and the accompanying materials are made available under the
* terms of the Eclipse Public License 2.0 which is available at
* http://www.eclipse.org/legal/epl-2.0.
*
* SPDX-License-Identifier: EPL-2.0
*
* Contributors:
*    Robert Bosch GmbH - initial contribution
*
********************************************************************************/

/* header definition ******************************************************** */
#ifndef KISO_BMI160_TH_HH_
#define KISO_BMI160_TH_HH_

#include "bmi160.h"

/* mock-ups for the provided interfaces */
FAKE_VALUE_FUNC(int8_t, bmi160_init, struct bmi160_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_write_reg, u8, u8 *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_reg, u8, u8 *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fatal_err, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_err_code, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_i2c_fail_err, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_drop_cmd_err, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_data_rdy_err, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_error_status, u8 *, u8 *, u8 *, u8 *, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_power_mode_stat, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_power_mode_stat, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_power_mode_stat, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_interface_normal)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_x, s16 *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_y, s16 *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_z, s16 *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_r, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_xyz, struct bmi160_mag_t *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_mag_xyzr, struct bmi160_mag_xyzr_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_gyro_x, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_gyro_y, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_gyro_z, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_gyro_xyz, struct bmi160_gyro_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_accel_x, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_accel_y, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_accel_z, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_accel_xyz, struct bmi160_accel_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_sensor_time, u32 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_accel_gyro_sensor_time, u8, struct bmi160_sensortime_accel_gyro_data *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_selftest, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_manual_operation_stat, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_foc_rdy, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_nvm_rdy, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_data_rdy_mag, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_data_rdy, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_data_rdy, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_step_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_significant_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_any_motion_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_pmu_trigger_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_double_tap_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_single_tap_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_orient_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat0_flat_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_high_g_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_low_g_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_data_rdy_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_fifo_full_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_fifo_wm_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat1_nomotion_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_any_motion_first_x, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_any_motion_first_y, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_any_motion_first_z, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_any_motion_sign, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_tap_first_x, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_tap_first_y, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_tap_first_z, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat2_tap_sign, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_high_g_first_x, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_high_g_first_y, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_high_g_first_z, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_high_g_first_sign, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_orient_xy, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_orient_z, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_stat3_flat, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_temp, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_fifo_length, u32 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_fifo_data, u8 *, u16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_output_data_rate, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_output_data_rate, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_bw, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_bw, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_under_sampling_parameter, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_under_sampling_parameter, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_range, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_range, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_output_data_rate, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_output_data_rate, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_bw, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_bw, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_range, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_range, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_output_data_rate, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_output_data_rate, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_down_gyro, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_down_gyro, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_fifo_filter_data, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_fifo_filter_data, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_down_accel, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_down_accel, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_fifo_filter_data, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_fifo_filter_data, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_wm, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_wm, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_time_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_time_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_tag_intr2_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_tag_intr2_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_tag_intr1_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_tag_intr1_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_header_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_header_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_mag_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_mag_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_accel_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_accel_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_fifo_gyro_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_fifo_gyro_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_i2c_device_addr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_i2c_device_addr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_burst, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_burst, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_offset, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_offset, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_manual_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_manual_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_read_addr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_read_addr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_write_addr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_write_addr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_mag_write_data, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_mag_write_data, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_enable_0, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_enable_0, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_enable_1, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_enable_1, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_enable_2, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_enable_2, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_step_detector_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_step_detector_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_edge_ctrl, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_edge_ctrl, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_level, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_level, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_output_type, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_output_type, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_output_enable, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_output_enable, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_latch_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_latch_intr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_input_enable, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_input_enable, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_g, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_g, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_high_g, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_high_g, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_any_motion, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_any_motion, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_nomotion, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_nomotion, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_double_tap, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_double_tap, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_single_tap, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_single_tap, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_flat, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_flat, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_pmu_trig, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_fifo_full, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_fifo_full, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_fifo_wm, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_fifo_wm, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_data_rdy, u8, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_data_rdy, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_tap_source, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_tap_source, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_high_source, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_high_source, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_motion_source, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_motion_source, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_g_durn, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_g_durn, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_g_thres, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_g_thres, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_g_hyst, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_g_hyst, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_low_g_mode, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_low_g_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_high_g_hyst, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_high_g_hyst, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_high_g_durn, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_high_g_durn, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_high_g_thres, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_high_g_thres, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_any_motion_durn, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_any_motion_durn, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_slow_no_motion_durn, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_slow_no_motion_durn, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_any_motion_thres, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_any_motion_thres, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_slow_no_motion_thres, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_slow_no_motion_thres, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_slow_no_motion_select, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_slow_no_motion_select, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_significant_motion_select, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_significant_motion_select, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_unmap_significant_motion_intr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_significant_motion_skip, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_significant_motion_skip, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_significant_motion_proof, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_significant_motion_proof, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_tap_durn, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_tap_durn, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_tap_shock, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_tap_shock, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_tap_quiet, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_tap_quiet, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_tap_thres, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_tap_thres, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_mode, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_blocking, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_blocking, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_hyst, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_hyst, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_theta, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_theta, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_ud_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_ud_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_orient_axes_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_orient_axes_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_flat_theta, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_flat_theta, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_flat_hold, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_flat_hold, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_intr_flat_hyst, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_intr_flat_hyst, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_foc_accel_z, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_foc_accel_z, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_foc_accel_y, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_foc_accel_y, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_foc_accel_x, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_foc_accel_x, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_foc_gyro_enable, u8, s16 *, s16 *, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_nvm_prog_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_nvm_prog_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_spi3, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_spi3, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_foc_gyro_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_i2c_wdt_select, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_i2c_wdt_select, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_i2c_wdt_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_i2c_wdt_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_if_mode, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_if_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_sleep_trigger, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_sleep_trigger, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_wakeup_trigger, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_wakeup_trigger, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_sleep_state, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_sleep_state, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_wakeup_intr, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_wakeup_intr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_selftest_axis, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_selftest_axis, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_selftest_sign, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_selftest_sign, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_selftest_amp, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_selftest_amp, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_selftest_start, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_selftest_start, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_spi_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_spi_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_spare0_trim, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_spare0_trim, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_nvm_counter, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_offset_compensation_xaxis, s8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_offset_compensation_xaxis, s8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_offset_compensation_yaxis, s8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_offset_compensation_yaxis, s8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_offset_compensation_zaxis, s8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_offset_compensation_zaxis, s8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_offset_compensation_xaxis, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_offset_compensation_xaxis, s16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_offset_compensation_yaxis, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_offset_compensation_yaxis, s16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_gyro_offset_compensation_zaxis, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_gyro_offset_compensation_zaxis, s16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_foc_trigger, u8, u8, s8 *)
//FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE,bmi160_accel_foc_trigger_xyz,u8,u8,u8,s8*s8*,s8*)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_accel_offset_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_accel_offset_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_step_count, s16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_step_config, u16 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_step_config, u16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_step_counter_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_step_counter_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_step_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_map_significant_motion_intr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_map_step_detector_intr, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_clear_step_counter)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_command_register, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_target_page, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_target_page, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_paging_enable, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_paging_enable, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_get_pullup_configuration, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_pullup_configuration, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bmm150_mag_interface_init, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bmm150_mag_wakeup)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_bmm150_mag_trim)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bmm150_mag_compensate_xyz, struct bmi160_mag_xyz_s32_t *)
FAKE_VALUE_FUNC(s32, bmi160_bmm150_mag_compensate_X, s16, u16)
FAKE_VALUE_FUNC(s32, bmi160_bmm150_mag_compensate_Y, s16, u16)
FAKE_VALUE_FUNC(s32, bmi160_bmm150_mag_compensate_Z, s16, u16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_bmm150_mag_presetmode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bmm150_mag_set_power_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_bmm150_mag_and_secondary_if_power_mode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_akm_mag_interface_init, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_bst_akm_sensitivity_data)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_akm_set_powermode, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_set_bst_akm_and_secondary_if_powermode, u8)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09911_compensate_X, s16)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09911_compensate_Y, s16)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09911_compensate_Z, s16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_akm09911_compensate_xyz, struct bmi160_bst_akm_xyz_t *)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09912_compensate_X, s16)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09912_compensate_Y, s16)
FAKE_VALUE_FUNC(s32, bmi160_bst_akm09912_compensate_Z, s16)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_akm09912_compensate_xyz, struct bmi160_bst_akm_xyz_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_fifo_headerless_mode, u8, struct bmi160_fifo_data_header_less_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_fifo_headerless_mode_user_defined_length, u16, struct bmi160_fifo_data_header_less_t *, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_fifo_header_data, u8, struct bmi160_fifo_data_header_t *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_read_fifo_header_data_user_defined_length, u16, u8, struct bmi160_fifo_data_header_t *)
FAKE_VALUE_FUNC(struct bmi160_t *, bmi160_get_ptr)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_second_if_mag_compensate_xyz, struct bmi160_mag_fifo_data_t, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas537_fifo_xyz_data, u16 *, u8, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas537_mag_interface_init)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas537_calib_values, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas537_read_xy1y2_data, u8 *, u8 *, u16 *, u16 *, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas537_measure_xyz_data, u8 *, struct yas_vector *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas532_mag_interface_init)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_set_initial_values)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_magnetic_measure_set_offset)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yamaha_yas532_calib_values)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_xy1y2_to_linear, u16 *, s32 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_normal_measurement_data, u8, u8 *, u16 *, u16 *, u8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_measurement_xyz_data, struct yas532_vector *, u8 *, u8, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_acquisition_command_register, u8)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_set_offset, const s8 *)
FAKE_VALUE_FUNC(BMI160_RETURN_FUNCTION_TYPE, bmi160_bst_yas532_fifo_xyz_data, u16 *, u8, s8, u16)

#endif /* KISO_BMI160_TH_HH_ */

/*************************************************************************** */
