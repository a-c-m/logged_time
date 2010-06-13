<?php

/**
 * Implementation of hook_content_default_fields().
 */
function time_content_default_fields() {
  module_load_include('inc', 'time', 'time.defaults');
  $args = func_get_args();
  return call_user_func_array('_time_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function time_ctools_plugin_api() {
  module_load_include('inc', 'time', 'time.defaults');
  $args = func_get_args();
  return call_user_func_array('_time_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function time_node_info() {
  module_load_include('inc', 'time', 'time.features.node');
  $args = func_get_args();
  return call_user_func_array('_time_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function time_strongarm() {
  module_load_include('inc', 'time', 'time.defaults');
  $args = func_get_args();
  return call_user_func_array('_time_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function time_views_default_views() {
  module_load_include('inc', 'time', 'time.features.views');
  $args = func_get_args();
  return call_user_func_array('_time_views_default_views', $args);
}
