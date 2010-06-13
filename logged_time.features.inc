<?php

/**
 * Implementation of hook_content_default_fields().
 */
function logged_time_content_default_fields() {
  module_load_include('inc', 'logged_time', 'logged_time.defaults');
  $args = func_get_args();
  return call_user_func_array('_logged_time_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function logged_time_context_default_contexts() {
  module_load_include('inc', 'logged_time', 'logged_time.defaults');
  $args = func_get_args();
  return call_user_func_array('_logged_time_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function logged_time_ctools_plugin_api() {
  module_load_include('inc', 'logged_time', 'logged_time.defaults');
  $args = func_get_args();
  return call_user_func_array('_logged_time_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function logged_time_node_info() {
  module_load_include('inc', 'logged_time', 'logged_time.features.node');
  $args = func_get_args();
  return call_user_func_array('_logged_time_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function logged_time_strongarm() {
  module_load_include('inc', 'logged_time', 'logged_time.defaults');
  $args = func_get_args();
  return call_user_func_array('_logged_time_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function logged_time_views_default_views() {
  module_load_include('inc', 'logged_time', 'logged_time.features.views');
  $args = func_get_args();
  return call_user_func_array('_logged_time_views_default_views', $args);
}
