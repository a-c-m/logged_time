<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function logged_time_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function logged_time_node_info() {
  $items = array(
    'logged_time' => array(
      'name' => t('Logged Time'),
      'module' => 'features',
      'description' => t('A time entry, used for tracking projects progress and billing.'),
      'has_title' => '1',
      'title_label' => t('Short description'),
      'has_body' => '1',
      'body_label' => t('More detail (if needed)'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function logged_time_views_api() {
  return array(
    'api' => '2',
  );
}
