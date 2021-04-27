/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.19.1/apps/berry/esp32/build_contexts/build_ctx_583787499/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /mongoose-os/platforms/esp32/src/esp32_sys_config.yaml /data/fwbuild-volumes/2.19.1/apps/berry/esp32/build_contexts/build_ctx_583787499/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>

#include "common/mg_str.h"

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif


/* debug type struct mgos_config_debug */
struct mgos_config_debug {
  const char * udp_log_addr;
  int udp_log_level;
  int mbedtls_level;
  int level;
  const char * file_level;
  int event_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
  const char * stdout_topic;
  const char * stderr_topic;
};
const struct mgos_conf_entry *mgos_config_debug_get_schema(void);
void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg);
static inline bool mgos_config_debug_parse(struct mg_str json, struct mgos_config_debug *cfg) {
  mgos_config_debug_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_debug_get_schema(), cfg);
}
static inline bool mgos_config_debug_emit(const struct mgos_config_debug *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_debug_get_schema(), pretty, out);
}
static inline bool mgos_config_debug_emit_f(const struct mgos_config_debug *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_debug_get_schema(), pretty, fname);
}
static inline bool mgos_config_debug_copy(const struct mgos_config_debug *src, struct mgos_config_debug *dst) {
  return mgos_conf_copy(mgos_config_debug_get_schema(), src, dst);
}
static inline void mgos_config_debug_free(struct mgos_config_debug *cfg) {
  return mgos_conf_free(mgos_config_debug_get_schema(), cfg);
}

/* sys type struct mgos_config_sys */
struct mgos_config_sys {
  int esp32_adc_vref;
  int esp32_adc_width;
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
};
const struct mgos_conf_entry *mgos_config_sys_get_schema(void);
void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg);
static inline bool mgos_config_sys_parse(struct mg_str json, struct mgos_config_sys *cfg) {
  mgos_config_sys_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sys_get_schema(), cfg);
}
static inline bool mgos_config_sys_emit(const struct mgos_config_sys *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sys_get_schema(), pretty, out);
}
static inline bool mgos_config_sys_emit_f(const struct mgos_config_sys *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sys_get_schema(), pretty, fname);
}
static inline bool mgos_config_sys_copy(const struct mgos_config_sys *src, struct mgos_config_sys *dst) {
  return mgos_conf_copy(mgos_config_sys_get_schema(), src, dst);
}
static inline void mgos_config_sys_free(struct mgos_config_sys *cfg) {
  return mgos_conf_free(mgos_config_sys_get_schema(), cfg);
}

/* device type struct mgos_config_device */
struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
  const char * public_key;
  const char * sn;
};
const struct mgos_conf_entry *mgos_config_device_get_schema(void);
void mgos_config_device_set_defaults(struct mgos_config_device *cfg);
static inline bool mgos_config_device_parse(struct mg_str json, struct mgos_config_device *cfg) {
  mgos_config_device_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_device_get_schema(), cfg);
}
static inline bool mgos_config_device_emit(const struct mgos_config_device *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_device_get_schema(), pretty, out);
}
static inline bool mgos_config_device_emit_f(const struct mgos_config_device *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_device_get_schema(), pretty, fname);
}
static inline bool mgos_config_device_copy(const struct mgos_config_device *src, struct mgos_config_device *dst) {
  return mgos_conf_copy(mgos_config_device_get_schema(), src, dst);
}
static inline void mgos_config_device_free(struct mgos_config_device *cfg) {
  return mgos_conf_free(mgos_config_device_get_schema(), cfg);
}

/* mqtt type struct mgos_config_mqtt */
struct mgos_config_mqtt {
  int enable;
  const char * server;
  const char * client_id;
  const char * user;
  const char * pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  const char * ssl_cipher_suites;
  const char * ssl_psk_identity;
  const char * ssl_psk_key;
  int clean_session;
  int keep_alive;
  const char * will_topic;
  const char * will_message;
  int will_retain;
  int max_qos;
  int recv_mbuf_limit;
  int require_time;
  int cloud_events;
  int max_queue_length;
};
const struct mgos_conf_entry *mgos_config_mqtt_get_schema(void);
void mgos_config_mqtt_set_defaults(struct mgos_config_mqtt *cfg);
static inline bool mgos_config_mqtt_parse(struct mg_str json, struct mgos_config_mqtt *cfg) {
  mgos_config_mqtt_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mqtt_get_schema(), cfg);
}
static inline bool mgos_config_mqtt_emit(const struct mgos_config_mqtt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mqtt_get_schema(), pretty, out);
}
static inline bool mgos_config_mqtt_emit_f(const struct mgos_config_mqtt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mqtt_get_schema(), pretty, fname);
}
static inline bool mgos_config_mqtt_copy(const struct mgos_config_mqtt *src, struct mgos_config_mqtt *dst) {
  return mgos_conf_copy(mgos_config_mqtt_get_schema(), src, dst);
}
static inline void mgos_config_mqtt_free(struct mgos_config_mqtt *cfg) {
  return mgos_conf_free(mgos_config_mqtt_get_schema(), cfg);
}

/* mqtt1 type struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt1_get_schema(void);
void mgos_config_mqtt1_set_defaults(struct mgos_config_mqtt *cfg);
static inline bool mgos_config_mqtt1_parse(struct mg_str json, struct mgos_config_mqtt *cfg) {
  mgos_config_mqtt1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mqtt1_get_schema(), cfg);
}
static inline bool mgos_config_mqtt1_emit(const struct mgos_config_mqtt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mqtt1_get_schema(), pretty, out);
}
static inline bool mgos_config_mqtt1_emit_f(const struct mgos_config_mqtt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mqtt1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mqtt1_copy(const struct mgos_config_mqtt *src, struct mgos_config_mqtt *dst) {
  return mgos_conf_copy(mgos_config_mqtt1_get_schema(), src, dst);
}
static inline void mgos_config_mqtt1_free(struct mgos_config_mqtt *cfg) {
  return mgos_conf_free(mgos_config_mqtt1_get_schema(), cfg);
}

/* sntp type struct mgos_config_sntp */
struct mgos_config_sntp {
  int enable;
  const char * server;
  int retry_min;
  int retry_max;
  int update_interval;
};
const struct mgos_conf_entry *mgos_config_sntp_get_schema(void);
void mgos_config_sntp_set_defaults(struct mgos_config_sntp *cfg);
static inline bool mgos_config_sntp_parse(struct mg_str json, struct mgos_config_sntp *cfg) {
  mgos_config_sntp_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sntp_get_schema(), cfg);
}
static inline bool mgos_config_sntp_emit(const struct mgos_config_sntp *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sntp_get_schema(), pretty, out);
}
static inline bool mgos_config_sntp_emit_f(const struct mgos_config_sntp *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sntp_get_schema(), pretty, fname);
}
static inline bool mgos_config_sntp_copy(const struct mgos_config_sntp *src, struct mgos_config_sntp *dst) {
  return mgos_conf_copy(mgos_config_sntp_get_schema(), src, dst);
}
static inline void mgos_config_sntp_free(struct mgos_config_sntp *cfg) {
  return mgos_conf_free(mgos_config_sntp_get_schema(), cfg);
}

/* gcp type struct mgos_config_gcp */
struct mgos_config_gcp {
  int enable;
  const char * server;
  const char * project;
  const char * region;
  const char * registry;
  const char * device;
  const char * key;
  const char * ca_cert;
  int token_ttl;
  int enable_config;
  int enable_commands;
};
const struct mgos_conf_entry *mgos_config_gcp_get_schema(void);
void mgos_config_gcp_set_defaults(struct mgos_config_gcp *cfg);
static inline bool mgos_config_gcp_parse(struct mg_str json, struct mgos_config_gcp *cfg) {
  mgos_config_gcp_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_gcp_get_schema(), cfg);
}
static inline bool mgos_config_gcp_emit(const struct mgos_config_gcp *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_gcp_get_schema(), pretty, out);
}
static inline bool mgos_config_gcp_emit_f(const struct mgos_config_gcp *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_gcp_get_schema(), pretty, fname);
}
static inline bool mgos_config_gcp_copy(const struct mgos_config_gcp *src, struct mgos_config_gcp *dst) {
  return mgos_conf_copy(mgos_config_gcp_get_schema(), src, dst);
}
static inline void mgos_config_gcp_free(struct mgos_config_gcp *cfg) {
  return mgos_conf_free(mgos_config_gcp_get_schema(), cfg);
}

/* gps type struct mgos_config_gps */
struct mgos_config_gps {
  int uart_no;
  int baud_rate;
  int update_interval;
};
const struct mgos_conf_entry *mgos_config_gps_get_schema(void);
void mgos_config_gps_set_defaults(struct mgos_config_gps *cfg);
static inline bool mgos_config_gps_parse(struct mg_str json, struct mgos_config_gps *cfg) {
  mgos_config_gps_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_gps_get_schema(), cfg);
}
static inline bool mgos_config_gps_emit(const struct mgos_config_gps *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_gps_get_schema(), pretty, out);
}
static inline bool mgos_config_gps_emit_f(const struct mgos_config_gps *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_gps_get_schema(), pretty, fname);
}
static inline bool mgos_config_gps_copy(const struct mgos_config_gps *src, struct mgos_config_gps *dst) {
  return mgos_conf_copy(mgos_config_gps_get_schema(), src, dst);
}
static inline void mgos_config_gps_free(struct mgos_config_gps *cfg) {
  return mgos_conf_free(mgos_config_gps_get_schema(), cfg);
}

/* mjs type struct mgos_config_mjs */
struct mgos_config_mjs {
  int generate_jsc;
};
const struct mgos_conf_entry *mgos_config_mjs_get_schema(void);
void mgos_config_mjs_set_defaults(struct mgos_config_mjs *cfg);
static inline bool mgos_config_mjs_parse(struct mg_str json, struct mgos_config_mjs *cfg) {
  mgos_config_mjs_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mjs_get_schema(), cfg);
}
static inline bool mgos_config_mjs_emit(const struct mgos_config_mjs *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mjs_get_schema(), pretty, out);
}
static inline bool mgos_config_mjs_emit_f(const struct mgos_config_mjs *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mjs_get_schema(), pretty, fname);
}
static inline bool mgos_config_mjs_copy(const struct mgos_config_mjs *src, struct mgos_config_mjs *dst) {
  return mgos_conf_copy(mgos_config_mjs_get_schema(), src, dst);
}
static inline void mgos_config_mjs_free(struct mgos_config_mjs *cfg) {
  return mgos_conf_free(mgos_config_mjs_get_schema(), cfg);
}

/* rpc.uart type struct mgos_config_rpc_uart */
struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  const char * dst;
};
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void);
void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg);
static inline bool mgos_config_rpc_uart_parse(struct mg_str json, struct mgos_config_rpc_uart *cfg) {
  mgos_config_rpc_uart_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_uart_get_schema(), cfg);
}
static inline bool mgos_config_rpc_uart_emit(const struct mgos_config_rpc_uart *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_uart_emit_f(const struct mgos_config_rpc_uart *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_uart_copy(const struct mgos_config_rpc_uart *src, struct mgos_config_rpc_uart *dst) {
  return mgos_conf_copy(mgos_config_rpc_uart_get_schema(), src, dst);
}
static inline void mgos_config_rpc_uart_free(struct mgos_config_rpc_uart *cfg) {
  return mgos_conf_free(mgos_config_rpc_uart_get_schema(), cfg);
}

/* rpc type struct mgos_config_rpc */
struct mgos_config_rpc {
  int enable;
  int http_enable;
  int service_sys_enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  const char * acl_file;
  const char * auth_domain;
  const char * auth_file;
  struct mgos_config_rpc_uart uart;
};
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void);
void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg);
static inline bool mgos_config_rpc_parse(struct mg_str json, struct mgos_config_rpc *cfg) {
  mgos_config_rpc_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_get_schema(), cfg);
}
static inline bool mgos_config_rpc_emit(const struct mgos_config_rpc *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_emit_f(const struct mgos_config_rpc *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_copy(const struct mgos_config_rpc *src, struct mgos_config_rpc *dst) {
  return mgos_conf_copy(mgos_config_rpc_get_schema(), src, dst);
}
static inline void mgos_config_rpc_free(struct mgos_config_rpc *cfg) {
  return mgos_conf_free(mgos_config_rpc_get_schema(), cfg);
}

/* wifi.ap type struct mgos_config_wifi_ap */
struct mgos_config_wifi_ap {
  int enable;
  const char * ssid;
  const char * pass;
  int hidden;
  int channel;
  int max_connections;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * dhcp_start;
  const char * dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  const char * hostname;
  int keep_enabled;
  int bandwidth_20mhz;
  const char * protocol;
};
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void);
void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg);
static inline bool mgos_config_wifi_ap_parse(struct mg_str json, struct mgos_config_wifi_ap *cfg) {
  mgos_config_wifi_ap_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_ap_get_schema(), cfg);
}
static inline bool mgos_config_wifi_ap_emit(const struct mgos_config_wifi_ap *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_ap_emit_f(const struct mgos_config_wifi_ap *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_ap_copy(const struct mgos_config_wifi_ap *src, struct mgos_config_wifi_ap *dst) {
  return mgos_conf_copy(mgos_config_wifi_ap_get_schema(), src, dst);
}
static inline void mgos_config_wifi_ap_free(struct mgos_config_wifi_ap *cfg) {
  return mgos_conf_free(mgos_config_wifi_ap_get_schema(), cfg);
}

/* wifi.sta type struct mgos_config_wifi_sta */
struct mgos_config_wifi_sta {
  int enable;
  const char * ssid;
  const char * pass;
  const char * user;
  const char * anon_identity;
  const char * cert;
  const char * key;
  const char * ca_cert;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * nameserver;
  const char * dhcp_hostname;
  const char * protocol;
  int listen_interval_ms;
};
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void);
void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta_get_schema(), cfg);
}

/* wifi.sta1 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void);
void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta1_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta1_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta1_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta1_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta1_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta1_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta1_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta1_get_schema(), cfg);
}

/* wifi.sta2 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void);
void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta2_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta2_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta2_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta2_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta2_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta2_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta2_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta2_get_schema(), cfg);
}

/* wifi type struct mgos_config_wifi */
struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta sta1;
  struct mgos_config_wifi_sta sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
  int sta_ps_mode;
  int sta_all_chan_scan;
};
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void);
void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg);
static inline bool mgos_config_wifi_parse(struct mg_str json, struct mgos_config_wifi *cfg) {
  mgos_config_wifi_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_get_schema(), cfg);
}
static inline bool mgos_config_wifi_emit(const struct mgos_config_wifi *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_emit_f(const struct mgos_config_wifi *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_copy(const struct mgos_config_wifi *src, struct mgos_config_wifi *dst) {
  return mgos_conf_copy(mgos_config_wifi_get_schema(), src, dst);
}
static inline void mgos_config_wifi_free(struct mgos_config_wifi *cfg) {
  return mgos_conf_free(mgos_config_wifi_get_schema(), cfg);
}

/* board.led1 type struct mgos_config_board_led1 */
struct mgos_config_board_led1 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led1_get_schema(void);
void mgos_config_board_led1_set_defaults(struct mgos_config_board_led1 *cfg);
static inline bool mgos_config_board_led1_parse(struct mg_str json, struct mgos_config_board_led1 *cfg) {
  mgos_config_board_led1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led1_get_schema(), cfg);
}
static inline bool mgos_config_board_led1_emit(const struct mgos_config_board_led1 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led1_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led1_emit_f(const struct mgos_config_board_led1 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led1_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led1_copy(const struct mgos_config_board_led1 *src, struct mgos_config_board_led1 *dst) {
  return mgos_conf_copy(mgos_config_board_led1_get_schema(), src, dst);
}
static inline void mgos_config_board_led1_free(struct mgos_config_board_led1 *cfg) {
  return mgos_conf_free(mgos_config_board_led1_get_schema(), cfg);
}

/* board.led2 type struct mgos_config_board_led2 */
struct mgos_config_board_led2 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led2_get_schema(void);
void mgos_config_board_led2_set_defaults(struct mgos_config_board_led2 *cfg);
static inline bool mgos_config_board_led2_parse(struct mg_str json, struct mgos_config_board_led2 *cfg) {
  mgos_config_board_led2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led2_get_schema(), cfg);
}
static inline bool mgos_config_board_led2_emit(const struct mgos_config_board_led2 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led2_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led2_emit_f(const struct mgos_config_board_led2 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led2_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led2_copy(const struct mgos_config_board_led2 *src, struct mgos_config_board_led2 *dst) {
  return mgos_conf_copy(mgos_config_board_led2_get_schema(), src, dst);
}
static inline void mgos_config_board_led2_free(struct mgos_config_board_led2 *cfg) {
  return mgos_conf_free(mgos_config_board_led2_get_schema(), cfg);
}

/* board.led3 type struct mgos_config_board_led3 */
struct mgos_config_board_led3 {
  int pin;
  int active_high;
};
const struct mgos_conf_entry *mgos_config_board_led3_get_schema(void);
void mgos_config_board_led3_set_defaults(struct mgos_config_board_led3 *cfg);
static inline bool mgos_config_board_led3_parse(struct mg_str json, struct mgos_config_board_led3 *cfg) {
  mgos_config_board_led3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_led3_get_schema(), cfg);
}
static inline bool mgos_config_board_led3_emit(const struct mgos_config_board_led3 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_led3_get_schema(), pretty, out);
}
static inline bool mgos_config_board_led3_emit_f(const struct mgos_config_board_led3 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_led3_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_led3_copy(const struct mgos_config_board_led3 *src, struct mgos_config_board_led3 *dst) {
  return mgos_conf_copy(mgos_config_board_led3_get_schema(), src, dst);
}
static inline void mgos_config_board_led3_free(struct mgos_config_board_led3 *cfg) {
  return mgos_conf_free(mgos_config_board_led3_get_schema(), cfg);
}

/* board.btn1 type struct mgos_config_board_btn1 */
struct mgos_config_board_btn1 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn1_get_schema(void);
void mgos_config_board_btn1_set_defaults(struct mgos_config_board_btn1 *cfg);
static inline bool mgos_config_board_btn1_parse(struct mg_str json, struct mgos_config_board_btn1 *cfg) {
  mgos_config_board_btn1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn1_get_schema(), cfg);
}
static inline bool mgos_config_board_btn1_emit(const struct mgos_config_board_btn1 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn1_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn1_emit_f(const struct mgos_config_board_btn1 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn1_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn1_copy(const struct mgos_config_board_btn1 *src, struct mgos_config_board_btn1 *dst) {
  return mgos_conf_copy(mgos_config_board_btn1_get_schema(), src, dst);
}
static inline void mgos_config_board_btn1_free(struct mgos_config_board_btn1 *cfg) {
  return mgos_conf_free(mgos_config_board_btn1_get_schema(), cfg);
}

/* board.btn2 type struct mgos_config_board_btn2 */
struct mgos_config_board_btn2 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn2_get_schema(void);
void mgos_config_board_btn2_set_defaults(struct mgos_config_board_btn2 *cfg);
static inline bool mgos_config_board_btn2_parse(struct mg_str json, struct mgos_config_board_btn2 *cfg) {
  mgos_config_board_btn2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn2_get_schema(), cfg);
}
static inline bool mgos_config_board_btn2_emit(const struct mgos_config_board_btn2 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn2_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn2_emit_f(const struct mgos_config_board_btn2 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn2_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn2_copy(const struct mgos_config_board_btn2 *src, struct mgos_config_board_btn2 *dst) {
  return mgos_conf_copy(mgos_config_board_btn2_get_schema(), src, dst);
}
static inline void mgos_config_board_btn2_free(struct mgos_config_board_btn2 *cfg) {
  return mgos_conf_free(mgos_config_board_btn2_get_schema(), cfg);
}

/* board.btn3 type struct mgos_config_board_btn3 */
struct mgos_config_board_btn3 {
  int pin;
  int pull_up;
};
const struct mgos_conf_entry *mgos_config_board_btn3_get_schema(void);
void mgos_config_board_btn3_set_defaults(struct mgos_config_board_btn3 *cfg);
static inline bool mgos_config_board_btn3_parse(struct mg_str json, struct mgos_config_board_btn3 *cfg) {
  mgos_config_board_btn3_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_btn3_get_schema(), cfg);
}
static inline bool mgos_config_board_btn3_emit(const struct mgos_config_board_btn3 *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_btn3_get_schema(), pretty, out);
}
static inline bool mgos_config_board_btn3_emit_f(const struct mgos_config_board_btn3 *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_btn3_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_btn3_copy(const struct mgos_config_board_btn3 *src, struct mgos_config_board_btn3 *dst) {
  return mgos_conf_copy(mgos_config_board_btn3_get_schema(), src, dst);
}
static inline void mgos_config_board_btn3_free(struct mgos_config_board_btn3 *cfg) {
  return mgos_conf_free(mgos_config_board_btn3_get_schema(), cfg);
}

/* board type struct mgos_config_board */
struct mgos_config_board {
  struct mgos_config_board_led1 led1;
  struct mgos_config_board_led2 led2;
  struct mgos_config_board_led3 led3;
  struct mgos_config_board_btn1 btn1;
  struct mgos_config_board_btn2 btn2;
  struct mgos_config_board_btn3 btn3;
};
const struct mgos_conf_entry *mgos_config_board_get_schema(void);
void mgos_config_board_set_defaults(struct mgos_config_board *cfg);
static inline bool mgos_config_board_parse(struct mg_str json, struct mgos_config_board *cfg) {
  mgos_config_board_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_board_get_schema(), cfg);
}
static inline bool mgos_config_board_emit(const struct mgos_config_board *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_board_get_schema(), pretty, out);
}
static inline bool mgos_config_board_emit_f(const struct mgos_config_board *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_board_get_schema(), pretty, fname);
}
static inline bool mgos_config_board_copy(const struct mgos_config_board *src, struct mgos_config_board *dst) {
  return mgos_conf_copy(mgos_config_board_get_schema(), src, dst);
}
static inline void mgos_config_board_free(struct mgos_config_board *cfg) {
  return mgos_conf_free(mgos_config_board_get_schema(), cfg);
}

/* <root> type struct mgos_config */
struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_sys sys;
  struct mgos_config_device device;
  const char * conf_acl;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_mqtt mqtt1;
  struct mgos_config_sntp sntp;
  struct mgos_config_gcp gcp;
  struct mgos_config_gps gps;
  struct mgos_config_mjs mjs;
  struct mgos_config_rpc rpc;
  struct mgos_config_wifi wifi;
  struct mgos_config_board board;
};
const struct mgos_conf_entry *mgos_config_get_schema(void);
void mgos_config_set_defaults(struct mgos_config *cfg);
static inline bool mgos_config_parse(struct mg_str json, struct mgos_config *cfg) {
  mgos_config_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_get_schema(), cfg);
}
static inline bool mgos_config_emit(const struct mgos_config *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_get_schema(), pretty, out);
}
static inline bool mgos_config_emit_f(const struct mgos_config *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_get_schema(), pretty, fname);
}
static inline bool mgos_config_copy(const struct mgos_config *src, struct mgos_config *dst) {
  return mgos_conf_copy(mgos_config_get_schema(), src, dst);
}
static inline void mgos_config_free(struct mgos_config *cfg) {
  return mgos_conf_free(mgos_config_get_schema(), cfg);
}

extern struct mgos_config mgos_sys_config;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg);
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_udp_log_addr(void);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_udp_log_addr(void) { return mgos_config_get_default_debug_udp_log_addr(); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_udp_log_level(void);
static inline int mgos_sys_config_get_debug_udp_log_level(void) { return mgos_config_get_debug_udp_log_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_udp_log_level(void) { return mgos_config_get_default_debug_udp_log_level(); }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_udp_log_level(int v) { mgos_config_set_debug_udp_log_level(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_mbedtls_level(void);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_mbedtls_level(void) { return mgos_config_get_default_debug_mbedtls_level(); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_level(void);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_level(void) { return mgos_config_get_default_debug_level(); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_file_level(void);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_file_level(void) { return mgos_config_get_default_debug_file_level(); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_event_level(void);
static inline int mgos_sys_config_get_debug_event_level(void) { return mgos_config_get_debug_event_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_event_level(void) { return mgos_config_get_default_debug_event_level(); }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_event_level(int v) { mgos_config_set_debug_event_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stdout_uart(void);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stdout_uart(void) { return mgos_config_get_default_debug_stdout_uart(); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stderr_uart(void);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stderr_uart(void) { return mgos_config_get_default_debug_stderr_uart(); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_debug_factory_reset_gpio(void);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_factory_reset_gpio(void) { return mgos_config_get_default_debug_factory_reset_gpio(); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_default_debug_mg_mgr_hexdump_file(); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* debug.stdout_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char * mgos_config_get_debug_stdout_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_stdout_topic(void);
static inline const char * mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_stdout_topic(void) { return mgos_config_get_default_debug_stdout_topic(); }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stdout_topic(const char * v) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, v); }

/* debug.stderr_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char * mgos_config_get_debug_stderr_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_stderr_topic(void);
static inline const char * mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_stderr_topic(void) { return mgos_config_get_default_debug_stderr_topic(); }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stderr_topic(const char * v) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg);
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }

/* sys.esp32_adc_vref */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_VREF
int mgos_config_get_sys_esp32_adc_vref(const struct mgos_config *cfg);
int mgos_config_get_default_sys_esp32_adc_vref(void);
static inline int mgos_sys_config_get_sys_esp32_adc_vref(void) { return mgos_config_get_sys_esp32_adc_vref(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_esp32_adc_vref(void) { return mgos_config_get_default_sys_esp32_adc_vref(); }
void mgos_config_set_sys_esp32_adc_vref(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_esp32_adc_vref(int v) { mgos_config_set_sys_esp32_adc_vref(&mgos_sys_config, v); }

/* sys.esp32_adc_width */
#define MGOS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
#define MGOS_SYS_CONFIG_HAVE_SYS_ESP32_ADC_WIDTH
int mgos_config_get_sys_esp32_adc_width(const struct mgos_config *cfg);
int mgos_config_get_default_sys_esp32_adc_width(void);
static inline int mgos_sys_config_get_sys_esp32_adc_width(void) { return mgos_config_get_sys_esp32_adc_width(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_esp32_adc_width(void) { return mgos_config_get_default_sys_esp32_adc_width(); }
void mgos_config_set_sys_esp32_adc_width(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_esp32_adc_width(int v) { mgos_config_set_sys_esp32_adc_width(&mgos_sys_config, v); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_tz_spec(void);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_tz_spec(void) { return mgos_config_get_default_sys_tz_spec(); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_sys_wdt_timeout(void);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_wdt_timeout(void) { return mgos_config_get_default_sys_wdt_timeout(); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_pref_ota_lib(void);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_pref_ota_lib(void) { return mgos_config_get_default_sys_pref_ota_lib(); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg);
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_id(void);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_id(void) { return mgos_config_get_default_device_id(); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_license(void);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_license(void) { return mgos_config_get_default_device_license(); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_mac(void);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_mac(void) { return mgos_config_get_default_device_mac(); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_public_key(void);
static inline const char * mgos_sys_config_get_device_public_key(void) { return mgos_config_get_device_public_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_public_key(void) { return mgos_config_get_default_device_public_key(); }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_public_key(const char * v) { mgos_config_set_device_public_key(&mgos_sys_config, v); }

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_sn(void);
static inline const char * mgos_sys_config_get_device_sn(void) { return mgos_config_get_device_sn(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_sn(void) { return mgos_config_get_default_device_sn(); }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_sn(const char * v) { mgos_config_set_device_sn(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_conf_acl(void);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_conf_acl(void) { return mgos_config_get_default_conf_acl(); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

/* mqtt */
#define MGOS_CONFIG_HAVE_MQTT
#define MGOS_SYS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt *mgos_config_get_mqtt(const struct mgos_config *cfg);
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }

/* mqtt.enable */
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
int mgos_config_get_mqtt_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_enable(void);
static inline int mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_enable(void) { return mgos_config_get_default_mqtt_enable(); }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_enable(int v) { mgos_config_set_mqtt_enable(&mgos_sys_config, v); }

/* mqtt.server */
#define MGOS_CONFIG_HAVE_MQTT_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
const char * mgos_config_get_mqtt_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_server(void);
static inline const char * mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_server(void) { return mgos_config_get_default_mqtt_server(); }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_server(const char * v) { mgos_config_set_mqtt_server(&mgos_sys_config, v); }

/* mqtt.client_id */
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
const char * mgos_config_get_mqtt_client_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_client_id(void);
static inline const char * mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_client_id(void) { return mgos_config_get_default_mqtt_client_id(); }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_client_id(const char * v) { mgos_config_set_mqtt_client_id(&mgos_sys_config, v); }

/* mqtt.user */
#define MGOS_CONFIG_HAVE_MQTT_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
const char * mgos_config_get_mqtt_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_user(void);
static inline const char * mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_user(void) { return mgos_config_get_default_mqtt_user(); }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_user(const char * v) { mgos_config_set_mqtt_user(&mgos_sys_config, v); }

/* mqtt.pass */
#define MGOS_CONFIG_HAVE_MQTT_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
const char * mgos_config_get_mqtt_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_pass(void);
static inline const char * mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_pass(void) { return mgos_config_get_default_mqtt_pass(); }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_pass(const char * v) { mgos_config_set_mqtt_pass(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt_reconnect_timeout_min(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt_reconnect_timeout_min(void);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt_reconnect_timeout_min(void) { return mgos_config_get_default_mqtt_reconnect_timeout_min(); }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double v) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt_reconnect_timeout_max(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt_reconnect_timeout_max(void);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt_reconnect_timeout_max(void) { return mgos_config_get_default_mqtt_reconnect_timeout_max(); }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double v) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
const char * mgos_config_get_mqtt_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_cert(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_cert(void) { return mgos_config_get_default_mqtt_ssl_cert(); }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char * v) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, v); }

/* mqtt.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
const char * mgos_config_get_mqtt_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_key(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_key(void) { return mgos_config_get_default_mqtt_ssl_key(); }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_key(const char * v) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, v); }

/* mqtt.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char * mgos_config_get_mqtt_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_ca_cert(void) { return mgos_config_get_default_mqtt_ssl_ca_cert(); }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char * v) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt_ssl_cipher_suites(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_cipher_suites(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_cipher_suites(void) { return mgos_config_get_default_mqtt_ssl_cipher_suites(); }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt_ssl_psk_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_psk_identity(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_psk_identity(void) { return mgos_config_get_default_mqtt_ssl_psk_identity(); }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char * v) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char * mgos_config_get_mqtt_ssl_psk_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_psk_key(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_psk_key(void) { return mgos_config_get_default_mqtt_ssl_psk_key(); }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char * v) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt.clean_session */
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int mgos_config_get_mqtt_clean_session(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_clean_session(void);
static inline int mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_clean_session(void) { return mgos_config_get_default_mqtt_clean_session(); }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_clean_session(int v) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, v); }

/* mqtt.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int mgos_config_get_mqtt_keep_alive(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_keep_alive(void);
static inline int mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_keep_alive(void) { return mgos_config_get_default_mqtt_keep_alive(); }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_keep_alive(int v) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, v); }

/* mqtt.will_topic */
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char * mgos_config_get_mqtt_will_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_will_topic(void);
static inline const char * mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_will_topic(void) { return mgos_config_get_default_mqtt_will_topic(); }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_topic(const char * v) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, v); }

/* mqtt.will_message */
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char * mgos_config_get_mqtt_will_message(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_will_message(void);
static inline const char * mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_will_message(void) { return mgos_config_get_default_mqtt_will_message(); }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_message(const char * v) { mgos_config_set_mqtt_will_message(&mgos_sys_config, v); }

/* mqtt.will_retain */
#define MGOS_CONFIG_HAVE_MQTT_WILL_RETAIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_RETAIN
int mgos_config_get_mqtt_will_retain(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_will_retain(void);
static inline int mgos_sys_config_get_mqtt_will_retain(void) { return mgos_config_get_mqtt_will_retain(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_will_retain(void) { return mgos_config_get_default_mqtt_will_retain(); }
void mgos_config_set_mqtt_will_retain(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_will_retain(int v) { mgos_config_set_mqtt_will_retain(&mgos_sys_config, v); }

/* mqtt.max_qos */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
int mgos_config_get_mqtt_max_qos(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_max_qos(void);
static inline int mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_max_qos(void) { return mgos_config_get_default_mqtt_max_qos(); }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_max_qos(int v) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, v); }

/* mqtt.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int mgos_config_get_mqtt_recv_mbuf_limit(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_recv_mbuf_limit(void);
static inline int mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_recv_mbuf_limit(void) { return mgos_config_get_default_mqtt_recv_mbuf_limit(); }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int v) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt.require_time */
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int mgos_config_get_mqtt_require_time(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_require_time(void);
static inline int mgos_sys_config_get_mqtt_require_time(void) { return mgos_config_get_mqtt_require_time(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_require_time(void) { return mgos_config_get_default_mqtt_require_time(); }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_require_time(int v) { mgos_config_set_mqtt_require_time(&mgos_sys_config, v); }

/* mqtt.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int mgos_config_get_mqtt_cloud_events(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_cloud_events(void);
static inline int mgos_sys_config_get_mqtt_cloud_events(void) { return mgos_config_get_mqtt_cloud_events(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_cloud_events(void) { return mgos_config_get_default_mqtt_cloud_events(); }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_cloud_events(int v) { mgos_config_set_mqtt_cloud_events(&mgos_sys_config, v); }

/* mqtt.max_queue_length */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QUEUE_LENGTH
int mgos_config_get_mqtt_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_max_queue_length(void);
static inline int mgos_sys_config_get_mqtt_max_queue_length(void) { return mgos_config_get_mqtt_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_max_queue_length(void) { return mgos_config_get_default_mqtt_max_queue_length(); }
void mgos_config_set_mqtt_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_max_queue_length(int v) { mgos_config_set_mqtt_max_queue_length(&mgos_sys_config, v); }

/* mqtt1 */
#define MGOS_CONFIG_HAVE_MQTT1
#define MGOS_SYS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt *mgos_config_get_mqtt1(const struct mgos_config *cfg);
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt1(void) { return mgos_config_get_mqtt1(&mgos_sys_config); }

/* mqtt1.enable */
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
int mgos_config_get_mqtt1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_enable(void);
static inline int mgos_sys_config_get_mqtt1_enable(void) { return mgos_config_get_mqtt1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_enable(void) { return mgos_config_get_default_mqtt1_enable(); }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_enable(int v) { mgos_config_set_mqtt1_enable(&mgos_sys_config, v); }

/* mqtt1.server */
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
const char * mgos_config_get_mqtt1_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_server(void);
static inline const char * mgos_sys_config_get_mqtt1_server(void) { return mgos_config_get_mqtt1_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_server(void) { return mgos_config_get_default_mqtt1_server(); }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_server(const char * v) { mgos_config_set_mqtt1_server(&mgos_sys_config, v); }

/* mqtt1.client_id */
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char * mgos_config_get_mqtt1_client_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_client_id(void);
static inline const char * mgos_sys_config_get_mqtt1_client_id(void) { return mgos_config_get_mqtt1_client_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_client_id(void) { return mgos_config_get_default_mqtt1_client_id(); }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_client_id(const char * v) { mgos_config_set_mqtt1_client_id(&mgos_sys_config, v); }

/* mqtt1.user */
#define MGOS_CONFIG_HAVE_MQTT1_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
const char * mgos_config_get_mqtt1_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_user(void);
static inline const char * mgos_sys_config_get_mqtt1_user(void) { return mgos_config_get_mqtt1_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_user(void) { return mgos_config_get_default_mqtt1_user(); }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_user(const char * v) { mgos_config_set_mqtt1_user(&mgos_sys_config, v); }

/* mqtt1.pass */
#define MGOS_CONFIG_HAVE_MQTT1_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
const char * mgos_config_get_mqtt1_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_pass(void);
static inline const char * mgos_sys_config_get_mqtt1_pass(void) { return mgos_config_get_mqtt1_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_pass(void) { return mgos_config_get_default_mqtt1_pass(); }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_pass(const char * v) { mgos_config_set_mqtt1_pass(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt1_reconnect_timeout_min(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt1_reconnect_timeout_min(void);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_mqtt1_reconnect_timeout_min(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_default_mqtt1_reconnect_timeout_min(); }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_min(double v) { mgos_config_set_mqtt1_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt1_reconnect_timeout_max(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt1_reconnect_timeout_max(void);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_mqtt1_reconnect_timeout_max(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_default_mqtt1_reconnect_timeout_max(); }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_max(double v) { mgos_config_set_mqtt1_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt1.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
const char * mgos_config_get_mqtt1_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_cert(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cert(void) { return mgos_config_get_mqtt1_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_cert(void) { return mgos_config_get_default_mqtt1_ssl_cert(); }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cert(const char * v) { mgos_config_set_mqtt1_ssl_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
const char * mgos_config_get_mqtt1_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_key(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_key(void) { return mgos_config_get_mqtt1_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_key(void) { return mgos_config_get_default_mqtt1_ssl_key(); }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_key(const char * v) { mgos_config_set_mqtt1_ssl_key(&mgos_sys_config, v); }

/* mqtt1.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char * mgos_config_get_mqtt1_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_ca_cert(void) { return mgos_config_get_mqtt1_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_ca_cert(void) { return mgos_config_get_default_mqtt1_ssl_ca_cert(); }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_ca_cert(const char * v) { mgos_config_set_mqtt1_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt1_ssl_cipher_suites(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_cipher_suites(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_mqtt1_ssl_cipher_suites(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_default_mqtt1_ssl_cipher_suites(); }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt1_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt1_ssl_psk_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_psk_identity(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_identity(void) { return mgos_config_get_mqtt1_ssl_psk_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_psk_identity(void) { return mgos_config_get_default_mqtt1_ssl_psk_identity(); }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_identity(const char * v) { mgos_config_set_mqtt1_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char * mgos_config_get_mqtt1_ssl_psk_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_psk_key(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_key(void) { return mgos_config_get_mqtt1_ssl_psk_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_psk_key(void) { return mgos_config_get_default_mqtt1_ssl_psk_key(); }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_key(const char * v) { mgos_config_set_mqtt1_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt1.clean_session */
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int mgos_config_get_mqtt1_clean_session(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_clean_session(void);
static inline int mgos_sys_config_get_mqtt1_clean_session(void) { return mgos_config_get_mqtt1_clean_session(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_clean_session(void) { return mgos_config_get_default_mqtt1_clean_session(); }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_clean_session(int v) { mgos_config_set_mqtt1_clean_session(&mgos_sys_config, v); }

/* mqtt1.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int mgos_config_get_mqtt1_keep_alive(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_keep_alive(void);
static inline int mgos_sys_config_get_mqtt1_keep_alive(void) { return mgos_config_get_mqtt1_keep_alive(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_keep_alive(void) { return mgos_config_get_default_mqtt1_keep_alive(); }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_keep_alive(int v) { mgos_config_set_mqtt1_keep_alive(&mgos_sys_config, v); }

/* mqtt1.will_topic */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char * mgos_config_get_mqtt1_will_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_will_topic(void);
static inline const char * mgos_sys_config_get_mqtt1_will_topic(void) { return mgos_config_get_mqtt1_will_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_will_topic(void) { return mgos_config_get_default_mqtt1_will_topic(); }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_topic(const char * v) { mgos_config_set_mqtt1_will_topic(&mgos_sys_config, v); }

/* mqtt1.will_message */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char * mgos_config_get_mqtt1_will_message(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_will_message(void);
static inline const char * mgos_sys_config_get_mqtt1_will_message(void) { return mgos_config_get_mqtt1_will_message(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_will_message(void) { return mgos_config_get_default_mqtt1_will_message(); }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_message(const char * v) { mgos_config_set_mqtt1_will_message(&mgos_sys_config, v); }

/* mqtt1.will_retain */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_RETAIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_RETAIN
int mgos_config_get_mqtt1_will_retain(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_will_retain(void);
static inline int mgos_sys_config_get_mqtt1_will_retain(void) { return mgos_config_get_mqtt1_will_retain(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_will_retain(void) { return mgos_config_get_default_mqtt1_will_retain(); }
void mgos_config_set_mqtt1_will_retain(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_will_retain(int v) { mgos_config_set_mqtt1_will_retain(&mgos_sys_config, v); }

/* mqtt1.max_qos */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
int mgos_config_get_mqtt1_max_qos(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_max_qos(void);
static inline int mgos_sys_config_get_mqtt1_max_qos(void) { return mgos_config_get_mqtt1_max_qos(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_max_qos(void) { return mgos_config_get_default_mqtt1_max_qos(); }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_max_qos(int v) { mgos_config_set_mqtt1_max_qos(&mgos_sys_config, v); }

/* mqtt1.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int mgos_config_get_mqtt1_recv_mbuf_limit(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_recv_mbuf_limit(void);
static inline int mgos_sys_config_get_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_mqtt1_recv_mbuf_limit(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_default_mqtt1_recv_mbuf_limit(); }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_recv_mbuf_limit(int v) { mgos_config_set_mqtt1_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt1.require_time */
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int mgos_config_get_mqtt1_require_time(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_require_time(void);
static inline int mgos_sys_config_get_mqtt1_require_time(void) { return mgos_config_get_mqtt1_require_time(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_require_time(void) { return mgos_config_get_default_mqtt1_require_time(); }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_require_time(int v) { mgos_config_set_mqtt1_require_time(&mgos_sys_config, v); }

/* mqtt1.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int mgos_config_get_mqtt1_cloud_events(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_cloud_events(void);
static inline int mgos_sys_config_get_mqtt1_cloud_events(void) { return mgos_config_get_mqtt1_cloud_events(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_cloud_events(void) { return mgos_config_get_default_mqtt1_cloud_events(); }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_cloud_events(int v) { mgos_config_set_mqtt1_cloud_events(&mgos_sys_config, v); }

/* mqtt1.max_queue_length */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QUEUE_LENGTH
int mgos_config_get_mqtt1_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_max_queue_length(void);
static inline int mgos_sys_config_get_mqtt1_max_queue_length(void) { return mgos_config_get_mqtt1_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_max_queue_length(void) { return mgos_config_get_default_mqtt1_max_queue_length(); }
void mgos_config_set_mqtt1_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_max_queue_length(int v) { mgos_config_set_mqtt1_max_queue_length(&mgos_sys_config, v); }

/* sntp */
#define MGOS_CONFIG_HAVE_SNTP
#define MGOS_SYS_CONFIG_HAVE_SNTP
const struct mgos_config_sntp *mgos_config_get_sntp(const struct mgos_config *cfg);
static inline const struct mgos_config_sntp *mgos_sys_config_get_sntp(void) { return mgos_config_get_sntp(&mgos_sys_config); }

/* sntp.enable */
#define MGOS_CONFIG_HAVE_SNTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SNTP_ENABLE
int mgos_config_get_sntp_enable(const struct mgos_config *cfg);
int mgos_config_get_default_sntp_enable(void);
static inline int mgos_sys_config_get_sntp_enable(void) { return mgos_config_get_sntp_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sntp_enable(void) { return mgos_config_get_default_sntp_enable(); }
void mgos_config_set_sntp_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_enable(int v) { mgos_config_set_sntp_enable(&mgos_sys_config, v); }

/* sntp.server */
#define MGOS_CONFIG_HAVE_SNTP_SERVER
#define MGOS_SYS_CONFIG_HAVE_SNTP_SERVER
const char * mgos_config_get_sntp_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_sntp_server(void);
static inline const char * mgos_sys_config_get_sntp_server(void) { return mgos_config_get_sntp_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sntp_server(void) { return mgos_config_get_default_sntp_server(); }
void mgos_config_set_sntp_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sntp_server(const char * v) { mgos_config_set_sntp_server(&mgos_sys_config, v); }

/* sntp.retry_min */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MIN
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MIN
int mgos_config_get_sntp_retry_min(const struct mgos_config *cfg);
int mgos_config_get_default_sntp_retry_min(void);
static inline int mgos_sys_config_get_sntp_retry_min(void) { return mgos_config_get_sntp_retry_min(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sntp_retry_min(void) { return mgos_config_get_default_sntp_retry_min(); }
void mgos_config_set_sntp_retry_min(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_retry_min(int v) { mgos_config_set_sntp_retry_min(&mgos_sys_config, v); }

/* sntp.retry_max */
#define MGOS_CONFIG_HAVE_SNTP_RETRY_MAX
#define MGOS_SYS_CONFIG_HAVE_SNTP_RETRY_MAX
int mgos_config_get_sntp_retry_max(const struct mgos_config *cfg);
int mgos_config_get_default_sntp_retry_max(void);
static inline int mgos_sys_config_get_sntp_retry_max(void) { return mgos_config_get_sntp_retry_max(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sntp_retry_max(void) { return mgos_config_get_default_sntp_retry_max(); }
void mgos_config_set_sntp_retry_max(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_retry_max(int v) { mgos_config_set_sntp_retry_max(&mgos_sys_config, v); }

/* sntp.update_interval */
#define MGOS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_SNTP_UPDATE_INTERVAL
int mgos_config_get_sntp_update_interval(const struct mgos_config *cfg);
int mgos_config_get_default_sntp_update_interval(void);
static inline int mgos_sys_config_get_sntp_update_interval(void) { return mgos_config_get_sntp_update_interval(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sntp_update_interval(void) { return mgos_config_get_default_sntp_update_interval(); }
void mgos_config_set_sntp_update_interval(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sntp_update_interval(int v) { mgos_config_set_sntp_update_interval(&mgos_sys_config, v); }

/* gcp */
#define MGOS_CONFIG_HAVE_GCP
#define MGOS_SYS_CONFIG_HAVE_GCP
const struct mgos_config_gcp *mgos_config_get_gcp(const struct mgos_config *cfg);
static inline const struct mgos_config_gcp *mgos_sys_config_get_gcp(void) { return mgos_config_get_gcp(&mgos_sys_config); }

/* gcp.enable */
#define MGOS_CONFIG_HAVE_GCP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE
int mgos_config_get_gcp_enable(const struct mgos_config *cfg);
int mgos_config_get_default_gcp_enable(void);
static inline int mgos_sys_config_get_gcp_enable(void) { return mgos_config_get_gcp_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gcp_enable(void) { return mgos_config_get_default_gcp_enable(); }
void mgos_config_set_gcp_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable(int v) { mgos_config_set_gcp_enable(&mgos_sys_config, v); }

/* gcp.server */
#define MGOS_CONFIG_HAVE_GCP_SERVER
#define MGOS_SYS_CONFIG_HAVE_GCP_SERVER
const char * mgos_config_get_gcp_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_server(void);
static inline const char * mgos_sys_config_get_gcp_server(void) { return mgos_config_get_gcp_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_server(void) { return mgos_config_get_default_gcp_server(); }
void mgos_config_set_gcp_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_server(const char * v) { mgos_config_set_gcp_server(&mgos_sys_config, v); }

/* gcp.project */
#define MGOS_CONFIG_HAVE_GCP_PROJECT
#define MGOS_SYS_CONFIG_HAVE_GCP_PROJECT
const char * mgos_config_get_gcp_project(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_project(void);
static inline const char * mgos_sys_config_get_gcp_project(void) { return mgos_config_get_gcp_project(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_project(void) { return mgos_config_get_default_gcp_project(); }
void mgos_config_set_gcp_project(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_project(const char * v) { mgos_config_set_gcp_project(&mgos_sys_config, v); }

/* gcp.region */
#define MGOS_CONFIG_HAVE_GCP_REGION
#define MGOS_SYS_CONFIG_HAVE_GCP_REGION
const char * mgos_config_get_gcp_region(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_region(void);
static inline const char * mgos_sys_config_get_gcp_region(void) { return mgos_config_get_gcp_region(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_region(void) { return mgos_config_get_default_gcp_region(); }
void mgos_config_set_gcp_region(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_region(const char * v) { mgos_config_set_gcp_region(&mgos_sys_config, v); }

/* gcp.registry */
#define MGOS_CONFIG_HAVE_GCP_REGISTRY
#define MGOS_SYS_CONFIG_HAVE_GCP_REGISTRY
const char * mgos_config_get_gcp_registry(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_registry(void);
static inline const char * mgos_sys_config_get_gcp_registry(void) { return mgos_config_get_gcp_registry(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_registry(void) { return mgos_config_get_default_gcp_registry(); }
void mgos_config_set_gcp_registry(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_registry(const char * v) { mgos_config_set_gcp_registry(&mgos_sys_config, v); }

/* gcp.device */
#define MGOS_CONFIG_HAVE_GCP_DEVICE
#define MGOS_SYS_CONFIG_HAVE_GCP_DEVICE
const char * mgos_config_get_gcp_device(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_device(void);
static inline const char * mgos_sys_config_get_gcp_device(void) { return mgos_config_get_gcp_device(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_device(void) { return mgos_config_get_default_gcp_device(); }
void mgos_config_set_gcp_device(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_device(const char * v) { mgos_config_set_gcp_device(&mgos_sys_config, v); }

/* gcp.key */
#define MGOS_CONFIG_HAVE_GCP_KEY
#define MGOS_SYS_CONFIG_HAVE_GCP_KEY
const char * mgos_config_get_gcp_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_key(void);
static inline const char * mgos_sys_config_get_gcp_key(void) { return mgos_config_get_gcp_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_key(void) { return mgos_config_get_default_gcp_key(); }
void mgos_config_set_gcp_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_key(const char * v) { mgos_config_set_gcp_key(&mgos_sys_config, v); }

/* gcp.ca_cert */
#define MGOS_CONFIG_HAVE_GCP_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_GCP_CA_CERT
const char * mgos_config_get_gcp_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_gcp_ca_cert(void);
static inline const char * mgos_sys_config_get_gcp_ca_cert(void) { return mgos_config_get_gcp_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_gcp_ca_cert(void) { return mgos_config_get_default_gcp_ca_cert(); }
void mgos_config_set_gcp_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_gcp_ca_cert(const char * v) { mgos_config_set_gcp_ca_cert(&mgos_sys_config, v); }

/* gcp.token_ttl */
#define MGOS_CONFIG_HAVE_GCP_TOKEN_TTL
#define MGOS_SYS_CONFIG_HAVE_GCP_TOKEN_TTL
int mgos_config_get_gcp_token_ttl(const struct mgos_config *cfg);
int mgos_config_get_default_gcp_token_ttl(void);
static inline int mgos_sys_config_get_gcp_token_ttl(void) { return mgos_config_get_gcp_token_ttl(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gcp_token_ttl(void) { return mgos_config_get_default_gcp_token_ttl(); }
void mgos_config_set_gcp_token_ttl(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_token_ttl(int v) { mgos_config_set_gcp_token_ttl(&mgos_sys_config, v); }

/* gcp.enable_config */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_CONFIG
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_CONFIG
int mgos_config_get_gcp_enable_config(const struct mgos_config *cfg);
int mgos_config_get_default_gcp_enable_config(void);
static inline int mgos_sys_config_get_gcp_enable_config(void) { return mgos_config_get_gcp_enable_config(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gcp_enable_config(void) { return mgos_config_get_default_gcp_enable_config(); }
void mgos_config_set_gcp_enable_config(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable_config(int v) { mgos_config_set_gcp_enable_config(&mgos_sys_config, v); }

/* gcp.enable_commands */
#define MGOS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
#define MGOS_SYS_CONFIG_HAVE_GCP_ENABLE_COMMANDS
int mgos_config_get_gcp_enable_commands(const struct mgos_config *cfg);
int mgos_config_get_default_gcp_enable_commands(void);
static inline int mgos_sys_config_get_gcp_enable_commands(void) { return mgos_config_get_gcp_enable_commands(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gcp_enable_commands(void) { return mgos_config_get_default_gcp_enable_commands(); }
void mgos_config_set_gcp_enable_commands(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gcp_enable_commands(int v) { mgos_config_set_gcp_enable_commands(&mgos_sys_config, v); }

/* gps */
#define MGOS_CONFIG_HAVE_GPS
#define MGOS_SYS_CONFIG_HAVE_GPS
const struct mgos_config_gps *mgos_config_get_gps(const struct mgos_config *cfg);
static inline const struct mgos_config_gps *mgos_sys_config_get_gps(void) { return mgos_config_get_gps(&mgos_sys_config); }

/* gps.uart_no */
#define MGOS_CONFIG_HAVE_GPS_UART_NO
#define MGOS_SYS_CONFIG_HAVE_GPS_UART_NO
int mgos_config_get_gps_uart_no(const struct mgos_config *cfg);
int mgos_config_get_default_gps_uart_no(void);
static inline int mgos_sys_config_get_gps_uart_no(void) { return mgos_config_get_gps_uart_no(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gps_uart_no(void) { return mgos_config_get_default_gps_uart_no(); }
void mgos_config_set_gps_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gps_uart_no(int v) { mgos_config_set_gps_uart_no(&mgos_sys_config, v); }

/* gps.baud_rate */
#define MGOS_CONFIG_HAVE_GPS_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_GPS_BAUD_RATE
int mgos_config_get_gps_baud_rate(const struct mgos_config *cfg);
int mgos_config_get_default_gps_baud_rate(void);
static inline int mgos_sys_config_get_gps_baud_rate(void) { return mgos_config_get_gps_baud_rate(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gps_baud_rate(void) { return mgos_config_get_default_gps_baud_rate(); }
void mgos_config_set_gps_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gps_baud_rate(int v) { mgos_config_set_gps_baud_rate(&mgos_sys_config, v); }

/* gps.update_interval */
#define MGOS_CONFIG_HAVE_GPS_UPDATE_INTERVAL
#define MGOS_SYS_CONFIG_HAVE_GPS_UPDATE_INTERVAL
int mgos_config_get_gps_update_interval(const struct mgos_config *cfg);
int mgos_config_get_default_gps_update_interval(void);
static inline int mgos_sys_config_get_gps_update_interval(void) { return mgos_config_get_gps_update_interval(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_gps_update_interval(void) { return mgos_config_get_default_gps_update_interval(); }
void mgos_config_set_gps_update_interval(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_gps_update_interval(int v) { mgos_config_set_gps_update_interval(&mgos_sys_config, v); }

/* mjs */
#define MGOS_CONFIG_HAVE_MJS
#define MGOS_SYS_CONFIG_HAVE_MJS
const struct mgos_config_mjs *mgos_config_get_mjs(const struct mgos_config *cfg);
static inline const struct mgos_config_mjs *mgos_sys_config_get_mjs(void) { return mgos_config_get_mjs(&mgos_sys_config); }

/* mjs.generate_jsc */
#define MGOS_CONFIG_HAVE_MJS_GENERATE_JSC
#define MGOS_SYS_CONFIG_HAVE_MJS_GENERATE_JSC
int mgos_config_get_mjs_generate_jsc(const struct mgos_config *cfg);
int mgos_config_get_default_mjs_generate_jsc(void);
static inline int mgos_sys_config_get_mjs_generate_jsc(void) { return mgos_config_get_mjs_generate_jsc(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mjs_generate_jsc(void) { return mgos_config_get_default_mjs_generate_jsc(); }
void mgos_config_set_mjs_generate_jsc(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mjs_generate_jsc(int v) { mgos_config_set_mjs_generate_jsc(&mgos_sys_config, v); }

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_enable(void);
static inline int mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_enable(void) { return mgos_config_get_default_rpc_enable(); }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_enable(int v) { mgos_config_set_rpc_enable(&mgos_sys_config, v); }

/* rpc.http_enable */
#define MGOS_CONFIG_HAVE_RPC_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_HTTP_ENABLE
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_http_enable(void);
static inline int mgos_sys_config_get_rpc_http_enable(void) { return mgos_config_get_rpc_http_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_http_enable(void) { return mgos_config_get_default_rpc_http_enable(); }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_http_enable(int v) { mgos_config_set_rpc_http_enable(&mgos_sys_config, v); }

/* rpc.service_sys_enable */
#define MGOS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_service_sys_enable(void);
static inline int mgos_sys_config_get_rpc_service_sys_enable(void) { return mgos_config_get_rpc_service_sys_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_service_sys_enable(void) { return mgos_config_get_default_rpc_service_sys_enable(); }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_service_sys_enable(int v) { mgos_config_set_rpc_service_sys_enable(&mgos_sys_config, v); }

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_frame_size(void);
static inline int mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_frame_size(void) { return mgos_config_get_default_rpc_max_frame_size(); }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_frame_size(int v) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, v); }

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_queue_length(void);
static inline int mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_queue_length(void) { return mgos_config_get_default_rpc_max_queue_length(); }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_queue_length(int v) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, v); }

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void);
static inline int mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(); }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int v) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, v); }

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_acl_file(void);
static inline const char * mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_acl_file(void) { return mgos_config_get_default_rpc_acl_file(); }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl_file(const char * v) { mgos_config_set_rpc_acl_file(&mgos_sys_config, v); }

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_domain(void);
static inline const char * mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_domain(void) { return mgos_config_get_default_rpc_auth_domain(); }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_domain(const char * v) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, v); }

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_file(void);
static inline const char * mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_file(void) { return mgos_config_get_default_rpc_auth_file(); }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_file(const char * v) { mgos_config_set_rpc_auth_file(&mgos_sys_config, v); }

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_uart_no(void);
static inline int mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_uart_no(void) { return mgos_config_get_default_rpc_uart_uart_no(); }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_uart_no(int v) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, v); }

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_baud_rate(void);
static inline int mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_baud_rate(void) { return mgos_config_get_default_rpc_uart_baud_rate(); }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int v) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, v); }

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_fc_type(void);
static inline int mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_fc_type(void) { return mgos_config_get_default_rpc_uart_fc_type(); }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_fc_type(int v) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, v); }

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_uart_dst(void);
static inline const char * mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_uart_dst(void) { return mgos_config_get_default_rpc_uart_dst(); }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_uart_dst(const char * v) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, v); }

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_enable(void);
static inline int mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_enable(void) { return mgos_config_get_default_wifi_ap_enable(); }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_enable(int v) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, v); }

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ssid(void);
static inline const char * mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ssid(void) { return mgos_config_get_default_wifi_ap_ssid(); }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ssid(const char * v) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, v); }

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_pass(void);
static inline const char * mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_pass(void) { return mgos_config_get_default_wifi_ap_pass(); }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_pass(const char * v) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, v); }

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_hidden(void);
static inline int mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_hidden(void) { return mgos_config_get_default_wifi_ap_hidden(); }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_hidden(int v) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, v); }

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_channel(void);
static inline int mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_channel(void) { return mgos_config_get_default_wifi_ap_channel(); }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_channel(int v) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, v); }

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_max_connections(void);
static inline int mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_max_connections(void) { return mgos_config_get_default_wifi_ap_max_connections(); }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_max_connections(int v) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, v); }

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ip(void);
static inline const char * mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ip(void) { return mgos_config_get_default_wifi_ap_ip(); }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ip(const char * v) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, v); }

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_netmask(void);
static inline const char * mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_netmask(void) { return mgos_config_get_default_wifi_ap_netmask(); }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_netmask(const char * v) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, v); }

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_gw(void);
static inline const char * mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_gw(void) { return mgos_config_get_default_wifi_ap_gw(); }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_gw(const char * v) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, v); }

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_start(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_start(void) { return mgos_config_get_default_wifi_ap_dhcp_start(); }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char * v) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, v); }

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_end(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_end(void) { return mgos_config_get_default_wifi_ap_dhcp_end(); }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char * v) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, v); }

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void);
static inline int mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_default_wifi_ap_trigger_on_gpio(); }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int v) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, v); }

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_disable_after(void);
static inline int mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_disable_after(void) { return mgos_config_get_default_wifi_ap_disable_after(); }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_disable_after(int v) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, v); }

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_hostname(void);
static inline const char * mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_hostname(void) { return mgos_config_get_default_wifi_ap_hostname(); }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_hostname(const char * v) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, v); }

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_keep_enabled(void);
static inline int mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_keep_enabled(void) { return mgos_config_get_default_wifi_ap_keep_enabled(); }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int v) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, v); }

/* wifi.ap.bandwidth_20mhz */
#define MGOS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_BANDWIDTH_20MHZ
int mgos_config_get_wifi_ap_bandwidth_20mhz(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_bandwidth_20mhz(void);
static inline int mgos_sys_config_get_wifi_ap_bandwidth_20mhz(void) { return mgos_config_get_wifi_ap_bandwidth_20mhz(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_bandwidth_20mhz(void) { return mgos_config_get_default_wifi_ap_bandwidth_20mhz(); }
void mgos_config_set_wifi_ap_bandwidth_20mhz(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_bandwidth_20mhz(int v) { mgos_config_set_wifi_ap_bandwidth_20mhz(&mgos_sys_config, v); }

/* wifi.ap.protocol */
#define MGOS_CONFIG_HAVE_WIFI_AP_PROTOCOL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PROTOCOL
const char * mgos_config_get_wifi_ap_protocol(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_protocol(void);
static inline const char * mgos_sys_config_get_wifi_ap_protocol(void) { return mgos_config_get_wifi_ap_protocol(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_protocol(void) { return mgos_config_get_default_wifi_ap_protocol(); }
void mgos_config_set_wifi_ap_protocol(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_protocol(const char * v) { mgos_config_set_wifi_ap_protocol(&mgos_sys_config, v); }

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_enable(void);
static inline int mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_enable(void) { return mgos_config_get_default_wifi_sta_enable(); }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_enable(int v) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, v); }

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ssid(void) { return mgos_config_get_default_wifi_sta_ssid(); }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ssid(const char * v) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, v); }

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_pass(void) { return mgos_config_get_default_wifi_sta_pass(); }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_pass(const char * v) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, v); }

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_user(void);
static inline const char * mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_user(void) { return mgos_config_get_default_wifi_sta_user(); }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_user(const char * v) { mgos_config_set_wifi_sta_user(&mgos_sys_config, v); }

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_anon_identity(void) { return mgos_config_get_default_wifi_sta_anon_identity(); }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char * v) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, v); }

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_cert(void) { return mgos_config_get_default_wifi_sta_cert(); }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_cert(const char * v) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, v); }

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_key(void);
static inline const char * mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_key(void) { return mgos_config_get_default_wifi_sta_key(); }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_key(const char * v) { mgos_config_set_wifi_sta_key(&mgos_sys_config, v); }

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ca_cert(void) { return mgos_config_get_default_wifi_sta_ca_cert(); }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char * v) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, v); }

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ip(void) { return mgos_config_get_default_wifi_sta_ip(); }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ip(const char * v) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, v); }

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_netmask(void) { return mgos_config_get_default_wifi_sta_netmask(); }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_netmask(const char * v) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, v); }

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_gw(void) { return mgos_config_get_default_wifi_sta_gw(); }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_gw(const char * v) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, v); }

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_nameserver(void) { return mgos_config_get_default_wifi_sta_nameserver(); }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char * v) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, v); }

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta_dhcp_hostname(); }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta.protocol */
#define MGOS_CONFIG_HAVE_WIFI_STA_PROTOCOL
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PROTOCOL
const char * mgos_config_get_wifi_sta_protocol(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_protocol(void);
static inline const char * mgos_sys_config_get_wifi_sta_protocol(void) { return mgos_config_get_wifi_sta_protocol(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_protocol(void) { return mgos_config_get_default_wifi_sta_protocol(); }
void mgos_config_set_wifi_sta_protocol(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_protocol(const char * v) { mgos_config_set_wifi_sta_protocol(&mgos_sys_config, v); }

/* wifi.sta.listen_interval_ms */
#define MGOS_CONFIG_HAVE_WIFI_STA_LISTEN_INTERVAL_MS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_LISTEN_INTERVAL_MS
int mgos_config_get_wifi_sta_listen_interval_ms(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_listen_interval_ms(void);
static inline int mgos_sys_config_get_wifi_sta_listen_interval_ms(void) { return mgos_config_get_wifi_sta_listen_interval_ms(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_listen_interval_ms(void) { return mgos_config_get_default_wifi_sta_listen_interval_ms(); }
void mgos_config_set_wifi_sta_listen_interval_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_listen_interval_ms(int v) { mgos_config_set_wifi_sta_listen_interval_ms(&mgos_sys_config, v); }

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta1_enable(void);
static inline int mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta1_enable(void) { return mgos_config_get_default_wifi_sta1_enable(); }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta1_enable(int v) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, v); }

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ssid(void) { return mgos_config_get_default_wifi_sta1_ssid(); }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char * v) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, v); }

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_pass(void) { return mgos_config_get_default_wifi_sta1_pass(); }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_pass(const char * v) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, v); }

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_user(void);
static inline const char * mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_user(void) { return mgos_config_get_default_wifi_sta1_user(); }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_user(const char * v) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, v); }

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_anon_identity(void) { return mgos_config_get_default_wifi_sta1_anon_identity(); }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char * v) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, v); }

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_cert(void) { return mgos_config_get_default_wifi_sta1_cert(); }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_cert(const char * v) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, v); }

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_key(void);
static inline const char * mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_key(void) { return mgos_config_get_default_wifi_sta1_key(); }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_key(const char * v) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, v); }

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ca_cert(void) { return mgos_config_get_default_wifi_sta1_ca_cert(); }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char * v) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, v); }

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ip(void) { return mgos_config_get_default_wifi_sta1_ip(); }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ip(const char * v) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, v); }

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_netmask(void) { return mgos_config_get_default_wifi_sta1_netmask(); }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char * v) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, v); }

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_gw(void) { return mgos_config_get_default_wifi_sta1_gw(); }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_gw(const char * v) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, v); }

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_nameserver(void) { return mgos_config_get_default_wifi_sta1_nameserver(); }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char * v) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, v); }

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta1_dhcp_hostname(); }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta1.protocol */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PROTOCOL
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PROTOCOL
const char * mgos_config_get_wifi_sta1_protocol(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_protocol(void);
static inline const char * mgos_sys_config_get_wifi_sta1_protocol(void) { return mgos_config_get_wifi_sta1_protocol(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_protocol(void) { return mgos_config_get_default_wifi_sta1_protocol(); }
void mgos_config_set_wifi_sta1_protocol(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_protocol(const char * v) { mgos_config_set_wifi_sta1_protocol(&mgos_sys_config, v); }

/* wifi.sta1.listen_interval_ms */
#define MGOS_CONFIG_HAVE_WIFI_STA1_LISTEN_INTERVAL_MS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_LISTEN_INTERVAL_MS
int mgos_config_get_wifi_sta1_listen_interval_ms(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta1_listen_interval_ms(void);
static inline int mgos_sys_config_get_wifi_sta1_listen_interval_ms(void) { return mgos_config_get_wifi_sta1_listen_interval_ms(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta1_listen_interval_ms(void) { return mgos_config_get_default_wifi_sta1_listen_interval_ms(); }
void mgos_config_set_wifi_sta1_listen_interval_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta1_listen_interval_ms(int v) { mgos_config_set_wifi_sta1_listen_interval_ms(&mgos_sys_config, v); }

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta2_enable(void);
static inline int mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta2_enable(void) { return mgos_config_get_default_wifi_sta2_enable(); }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta2_enable(int v) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, v); }

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ssid(void) { return mgos_config_get_default_wifi_sta2_ssid(); }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char * v) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, v); }

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_pass(void) { return mgos_config_get_default_wifi_sta2_pass(); }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_pass(const char * v) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, v); }

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_user(void);
static inline const char * mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_user(void) { return mgos_config_get_default_wifi_sta2_user(); }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_user(const char * v) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, v); }

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_anon_identity(void) { return mgos_config_get_default_wifi_sta2_anon_identity(); }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char * v) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, v); }

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_cert(void) { return mgos_config_get_default_wifi_sta2_cert(); }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_cert(const char * v) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, v); }

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_key(void);
static inline const char * mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_key(void) { return mgos_config_get_default_wifi_sta2_key(); }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_key(const char * v) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, v); }

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ca_cert(void) { return mgos_config_get_default_wifi_sta2_ca_cert(); }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char * v) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, v); }

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ip(void) { return mgos_config_get_default_wifi_sta2_ip(); }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ip(const char * v) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, v); }

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_netmask(void) { return mgos_config_get_default_wifi_sta2_netmask(); }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char * v) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, v); }

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_gw(void) { return mgos_config_get_default_wifi_sta2_gw(); }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_gw(const char * v) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, v); }

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_nameserver(void) { return mgos_config_get_default_wifi_sta2_nameserver(); }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char * v) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, v); }

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta2_dhcp_hostname(); }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta2.protocol */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PROTOCOL
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PROTOCOL
const char * mgos_config_get_wifi_sta2_protocol(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_protocol(void);
static inline const char * mgos_sys_config_get_wifi_sta2_protocol(void) { return mgos_config_get_wifi_sta2_protocol(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_protocol(void) { return mgos_config_get_default_wifi_sta2_protocol(); }
void mgos_config_set_wifi_sta2_protocol(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_protocol(const char * v) { mgos_config_set_wifi_sta2_protocol(&mgos_sys_config, v); }

/* wifi.sta2.listen_interval_ms */
#define MGOS_CONFIG_HAVE_WIFI_STA2_LISTEN_INTERVAL_MS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_LISTEN_INTERVAL_MS
int mgos_config_get_wifi_sta2_listen_interval_ms(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta2_listen_interval_ms(void);
static inline int mgos_sys_config_get_wifi_sta2_listen_interval_ms(void) { return mgos_config_get_wifi_sta2_listen_interval_ms(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta2_listen_interval_ms(void) { return mgos_config_get_default_wifi_sta2_listen_interval_ms(); }
void mgos_config_set_wifi_sta2_listen_interval_ms(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta2_listen_interval_ms(int v) { mgos_config_set_wifi_sta2_listen_interval_ms(&mgos_sys_config, v); }

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_cfg_idx(void);
static inline int mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_cfg_idx(void) { return mgos_config_get_default_wifi_sta_cfg_idx(); }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int v) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, v); }

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_connect_timeout(void);
static inline int mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_connect_timeout(void) { return mgos_config_get_default_wifi_sta_connect_timeout(); }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int v) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, v); }

/* wifi.sta_ps_mode */
#define MGOS_CONFIG_HAVE_WIFI_STA_PS_MODE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PS_MODE
int mgos_config_get_wifi_sta_ps_mode(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_ps_mode(void);
static inline int mgos_sys_config_get_wifi_sta_ps_mode(void) { return mgos_config_get_wifi_sta_ps_mode(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_ps_mode(void) { return mgos_config_get_default_wifi_sta_ps_mode(); }
void mgos_config_set_wifi_sta_ps_mode(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_ps_mode(int v) { mgos_config_set_wifi_sta_ps_mode(&mgos_sys_config, v); }

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_all_chan_scan(void);
static inline int mgos_sys_config_get_wifi_sta_all_chan_scan(void) { return mgos_config_get_wifi_sta_all_chan_scan(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_all_chan_scan(void) { return mgos_config_get_default_wifi_sta_all_chan_scan(); }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_all_chan_scan(int v) { mgos_config_set_wifi_sta_all_chan_scan(&mgos_sys_config, v); }

/* board */
#define MGOS_CONFIG_HAVE_BOARD
#define MGOS_SYS_CONFIG_HAVE_BOARD
const struct mgos_config_board *mgos_config_get_board(const struct mgos_config *cfg);
static inline const struct mgos_config_board *mgos_sys_config_get_board(void) { return mgos_config_get_board(&mgos_sys_config); }

/* board.led1 */
#define MGOS_CONFIG_HAVE_BOARD_LED1
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1
const struct mgos_config_board_led1 *mgos_config_get_board_led1(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led1 *mgos_sys_config_get_board_led1(void) { return mgos_config_get_board_led1(&mgos_sys_config); }

/* board.led1.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_PIN
int mgos_config_get_board_led1_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led1_pin(void);
static inline int mgos_sys_config_get_board_led1_pin(void) { return mgos_config_get_board_led1_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led1_pin(void) { return mgos_config_get_default_board_led1_pin(); }
void mgos_config_set_board_led1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_pin(int v) { mgos_config_set_board_led1_pin(&mgos_sys_config, v); }

/* board.led1.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED1_ACTIVE_HIGH
int mgos_config_get_board_led1_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led1_active_high(void);
static inline int mgos_sys_config_get_board_led1_active_high(void) { return mgos_config_get_board_led1_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led1_active_high(void) { return mgos_config_get_default_board_led1_active_high(); }
void mgos_config_set_board_led1_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led1_active_high(int v) { mgos_config_set_board_led1_active_high(&mgos_sys_config, v); }

/* board.led2 */
#define MGOS_CONFIG_HAVE_BOARD_LED2
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2
const struct mgos_config_board_led2 *mgos_config_get_board_led2(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led2 *mgos_sys_config_get_board_led2(void) { return mgos_config_get_board_led2(&mgos_sys_config); }

/* board.led2.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_PIN
int mgos_config_get_board_led2_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led2_pin(void);
static inline int mgos_sys_config_get_board_led2_pin(void) { return mgos_config_get_board_led2_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led2_pin(void) { return mgos_config_get_default_board_led2_pin(); }
void mgos_config_set_board_led2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_pin(int v) { mgos_config_set_board_led2_pin(&mgos_sys_config, v); }

/* board.led2.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED2_ACTIVE_HIGH
int mgos_config_get_board_led2_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led2_active_high(void);
static inline int mgos_sys_config_get_board_led2_active_high(void) { return mgos_config_get_board_led2_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led2_active_high(void) { return mgos_config_get_default_board_led2_active_high(); }
void mgos_config_set_board_led2_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led2_active_high(int v) { mgos_config_set_board_led2_active_high(&mgos_sys_config, v); }

/* board.led3 */
#define MGOS_CONFIG_HAVE_BOARD_LED3
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3
const struct mgos_config_board_led3 *mgos_config_get_board_led3(const struct mgos_config *cfg);
static inline const struct mgos_config_board_led3 *mgos_sys_config_get_board_led3(void) { return mgos_config_get_board_led3(&mgos_sys_config); }

/* board.led3.pin */
#define MGOS_CONFIG_HAVE_BOARD_LED3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_PIN
int mgos_config_get_board_led3_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_led3_pin(void);
static inline int mgos_sys_config_get_board_led3_pin(void) { return mgos_config_get_board_led3_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led3_pin(void) { return mgos_config_get_default_board_led3_pin(); }
void mgos_config_set_board_led3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_pin(int v) { mgos_config_set_board_led3_pin(&mgos_sys_config, v); }

/* board.led3.active_high */
#define MGOS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
#define MGOS_SYS_CONFIG_HAVE_BOARD_LED3_ACTIVE_HIGH
int mgos_config_get_board_led3_active_high(const struct mgos_config *cfg);
int mgos_config_get_default_board_led3_active_high(void);
static inline int mgos_sys_config_get_board_led3_active_high(void) { return mgos_config_get_board_led3_active_high(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_led3_active_high(void) { return mgos_config_get_default_board_led3_active_high(); }
void mgos_config_set_board_led3_active_high(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_led3_active_high(int v) { mgos_config_set_board_led3_active_high(&mgos_sys_config, v); }

/* board.btn1 */
#define MGOS_CONFIG_HAVE_BOARD_BTN1
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1
const struct mgos_config_board_btn1 *mgos_config_get_board_btn1(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn1 *mgos_sys_config_get_board_btn1(void) { return mgos_config_get_board_btn1(&mgos_sys_config); }

/* board.btn1.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PIN
int mgos_config_get_board_btn1_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn1_pin(void);
static inline int mgos_sys_config_get_board_btn1_pin(void) { return mgos_config_get_board_btn1_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn1_pin(void) { return mgos_config_get_default_board_btn1_pin(); }
void mgos_config_set_board_btn1_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pin(int v) { mgos_config_set_board_btn1_pin(&mgos_sys_config, v); }

/* board.btn1.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN1_PULL_UP
int mgos_config_get_board_btn1_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn1_pull_up(void);
static inline int mgos_sys_config_get_board_btn1_pull_up(void) { return mgos_config_get_board_btn1_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn1_pull_up(void) { return mgos_config_get_default_board_btn1_pull_up(); }
void mgos_config_set_board_btn1_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn1_pull_up(int v) { mgos_config_set_board_btn1_pull_up(&mgos_sys_config, v); }

/* board.btn2 */
#define MGOS_CONFIG_HAVE_BOARD_BTN2
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2
const struct mgos_config_board_btn2 *mgos_config_get_board_btn2(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn2 *mgos_sys_config_get_board_btn2(void) { return mgos_config_get_board_btn2(&mgos_sys_config); }

/* board.btn2.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PIN
int mgos_config_get_board_btn2_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn2_pin(void);
static inline int mgos_sys_config_get_board_btn2_pin(void) { return mgos_config_get_board_btn2_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn2_pin(void) { return mgos_config_get_default_board_btn2_pin(); }
void mgos_config_set_board_btn2_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pin(int v) { mgos_config_set_board_btn2_pin(&mgos_sys_config, v); }

/* board.btn2.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN2_PULL_UP
int mgos_config_get_board_btn2_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn2_pull_up(void);
static inline int mgos_sys_config_get_board_btn2_pull_up(void) { return mgos_config_get_board_btn2_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn2_pull_up(void) { return mgos_config_get_default_board_btn2_pull_up(); }
void mgos_config_set_board_btn2_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn2_pull_up(int v) { mgos_config_set_board_btn2_pull_up(&mgos_sys_config, v); }

/* board.btn3 */
#define MGOS_CONFIG_HAVE_BOARD_BTN3
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3
const struct mgos_config_board_btn3 *mgos_config_get_board_btn3(const struct mgos_config *cfg);
static inline const struct mgos_config_board_btn3 *mgos_sys_config_get_board_btn3(void) { return mgos_config_get_board_btn3(&mgos_sys_config); }

/* board.btn3.pin */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PIN
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PIN
int mgos_config_get_board_btn3_pin(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn3_pin(void);
static inline int mgos_sys_config_get_board_btn3_pin(void) { return mgos_config_get_board_btn3_pin(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn3_pin(void) { return mgos_config_get_default_board_btn3_pin(); }
void mgos_config_set_board_btn3_pin(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pin(int v) { mgos_config_set_board_btn3_pin(&mgos_sys_config, v); }

/* board.btn3.pull_up */
#define MGOS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
#define MGOS_SYS_CONFIG_HAVE_BOARD_BTN3_PULL_UP
int mgos_config_get_board_btn3_pull_up(const struct mgos_config *cfg);
int mgos_config_get_default_board_btn3_pull_up(void);
static inline int mgos_sys_config_get_board_btn3_pull_up(void) { return mgos_config_get_board_btn3_pull_up(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_board_btn3_pull_up(void) { return mgos_config_get_default_board_btn3_pull_up(); }
void mgos_config_set_board_btn3_pull_up(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_board_btn3_pull_up(int v) { mgos_config_set_board_btn3_pull_up(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

bool mgos_config_is_default_str(const char *s);

/* Backward compatibility. */
const struct mgos_conf_entry *mgos_config_schema(void);

#ifdef __cplusplus
}
#endif
