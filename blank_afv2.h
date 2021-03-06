// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __APP_BLANK_AFV2_H__
#define __APP_BLANK_AFV2_H__


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "blank_afv2"
#define ZA_DEVICE_TYPE ZA_COORDINATOR
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_PRICE_CLUSTER_CLIENT
#define ZCL_USING_SIMPLE_METERING_CLUSTER_CLIENT
#define ZCL_USING_KEY_ESTABLISHMENT_CLUSTER_CLIENT
#define ZCL_USING_KEY_ESTABLISHMENT_CLUSTER_SERVER
#define EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
#define EMBER_AF_REPORT_TABLE_SIZE (0)

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_PRICE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SIMPLE_METERING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_KEY_ESTABLISHMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_KEY_ESTABLISHMENT_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** Security Section ****/
#define EMBER_KEY_TABLE_SIZE (0)
#define EMBER_AF_SECURITY_PROFILE HA_SECURITY_PROFILE

/**** Network Section ****/
#define EMBER_AF_RADIO_POWER 3
// Channels: 11, 14, 15, 19, 20, 24, 25
// Binary channel mask: 11000110001100100000000000
#define EMBER_AF_CHANNEL_MASK 0x0318C800UL
#define ZA_EXTENDED_PANID { 0, 0, 0, 0, 0, 0, 0, 0 }

/*** Bindings section ****/
#define EMBER_BINDING_TABLE_SIZE (2)

/*** Address table section ****/
#define EMBER_AF_ADDRESS_TABLE_SIZE (2)
#define EMBER_AF_TRUST_CENTER_ADDRESS_CACHE_SIZE (2)

/**** Fragmentation ****/
// #define EMBER_AF_ENABLE_FRAGMENTATION

/**** Concentrator ****/
#define EMBER_AF_CONCENTRATOR
#define EMBER_CONCENTRATOR_TYPE EMBER_LOW_RAM_CONCENTRATOR
#define EMBER_SOURCE_ROUTE_TABLE_SIZE (7)

/**** Receive statistics ****/

/**** Sleep section ****/
#define EMBER_AF_LONG_POLL_INTERVAL (60)
#define EMBER_AF_SHORT_POLL_INTERVAL (1)
#define EMBER_AF_WAKE_TIMEOUT (4)

/**** LED configuration ****/
#define EMBER_AF_HEARTBEAT_ENABLE
#define EMBER_AF_HEARTBEAT_LED BOARDLED1

/**** Button configuration ****/
#define EMBER_AF_USE_BUTTONS
#define EZSP_APPLICATION_HAS_BUTTON_HANDLER
#define EMBER_AF_FIRST_BUTTON BUTTON0
#define EMBER_AF_SECOND_BUTTON BUTTON1

/**** HAL Section ****/
#define ZA_CLI_FULL

/**** Callback Section ****/
#define EMBER_CALLBACK_REGISTRATION_START
#define EMBER_CALLBACK_REGISTRATION_ABORT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_JOINABLE_NETWORK_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_CONTINUE_JOINABLE_NETWORK_SEARCH
#define EMBER_CALLBACK_NETWORK_FIND_OPERATION_COMPLETE
#define EMBER_CALLBACK_INITIATE_KEY_ESTABLISHMENT
#define EMBER_CALLBACK_INITIATE_INTER_PAN_KEY_ESTABLISHMENT
#define EMBER_CALLBACK_PERFORMING_KEY_ESTABLISHMENT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_SERVER_COMMAND_RECEIVED
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_INITIATE_KEY_ESTABLISHMENT_REQUEST
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_EPHEMERAL_DATA_REQUEST
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_CONFIRM_KEY_DATA_REQUEST
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_TERMINATE_KEY_ESTABLISHMENT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_SERVER_MESSAGE_SENT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_CLIENT_COMMAND_RECEIVED
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_INITIATE_KEY_ESTABLISHMENT_RESPONSE
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_EPHEMERAL_DATA_RESPONSE
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_CONFIRM_KEY_DATA_RESPONSE
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_CLIENT_MESSAGE_SENT
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_CLIENT_DEFAULT_RESPONSE
#define EMBER_CALLBACK_KEY_ESTABLISHMENT_CLUSTER_KEY_ESTABLISHMENT_CLUSTER_SERVER_DEFAULT_RESPONSE
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_GET_PROFILE_RESPONSE
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REQUEST_MIRROR
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REMOVE_MIRROR
#define EMBER_CALLBACK_SIMPLE_METERING_CLUSTER_REQUEST_FAST_POLL_MODE_RESPONSE
#define EMBER_CALLBACK_ZIGBEE_KEY_ESTABLISHMENT
#define EMBER_APPLICATION_HAS_ZIGBEE_KEY_ESTABLISHMENT_HANDLER
#define EMBER_CALLBACK_EZSP_ZIGBEE_KEY_ESTABLISHMENT
#define EZSP_APPLICATION_HAS_ZIGBEE_KEY_ESTABLISHMENT_HANDLER
#define EMBER_CALLBACK_INITIATE_PARTNER_LINK_KEY_EXCHANGE
#define EMBER_CALLBACK_PARTNER_LINK_KEY_EXCHANGE_REQUEST
#define EMBER_CALLBACK_PARTNER_LINK_KEY_EXCHANGE_RESPONSE
#define EMBER_CALLBACK_PRICE_CLUSTER_PRICE_CLUSTER_CLIENT_INIT
#define EMBER_CALLBACK_PRICE_CLUSTER_PRICE_CLUSTER_CLIENT_TICK
#define EMBER_CALLBACK_PRICE_CLUSTER_PUBLISH_PRICE
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_APP 0x0002
#define EMBER_AF_PRINT_ATTRIBUTES 0x0004
#define EMBER_AF_PRINT_BITS { 0x07 }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Application",\
  "Attributes",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 3




// Generated plugin macros

// Use this macro to check if Key Establishment plugin is included
#define EMBER_AF_PLUGIN_KEY_ESTABLISHMENT
#define EZSP_APPLICATION_HAS_CBKE_HANDLERS

// Use this macro to check if Network Find plugin is included
#define EMBER_AF_PLUGIN_NETWORK_FIND
// User options for plugin Network Find
#define EMBER_AF_PLUGIN_NETWORK_FIND_DURATION 5

// Use this macro to check if Partner Link Key Exchange plugin is included
#define EMBER_AF_PLUGIN_PARTNER_LINK_KEY_EXCHANGE
// User options for plugin Partner Link Key Exchange
#define EMBER_AF_PLUGIN_PARTNER_LINK_KEY_EXCHANGE_TIMEOUT_SECONDS 5

// Use this macro to check if Price client plugin plugin is included
#define EMBER_AF_PLUGIN_PRICE_CLIENT
// User options for plugin Price client plugin
#define EMBER_AF_PLUGIN_PRICE_CLIENT_TABLE_SIZE 2

// Use this macro to check if Simple metering client plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_METERING_CLIENT

// Use this macro to check if Smart Energy Registration plugin is included
#define EMBER_AF_PLUGIN_SMART_ENERGY_REGISTRATION
// User options for plugin Smart Energy Registration
#define EMBER_AF_PLUGIN_SMART_ENERGY_REGISTRATION_ESI_TABLE_SIZE 3
#define EMBER_AF_PLUGIN_SMART_ENERGY_REGISTRATION_ESI_REDISCOVERY
#define EMBER_AF_PLUGIN_SMART_ENERGY_REGISTRATION_ESI_DISCOVERY_PERIOD 3


// Generated API headers


// Custom macros
#ifdef APP_SERIAL
#undef APP_SERIAL
#endif
#define APP_SERIAL 1

#ifdef EMBER_ASSERT_SERIAL_PORT
#undef EMBER_ASSERT_SERIAL_PORT
#endif
#define EMBER_ASSERT_SERIAL_PORT 1

#ifdef EMBER_AF_BAUD_RATE
#undef EMBER_AF_BAUD_RATE
#endif
#define EMBER_AF_BAUD_RATE 19200



#endif // __APP_BLANK_AFV2_H__
