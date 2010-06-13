<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _time_node_info() {
  $items = array(
    'time' => array(
      'name' => t('Time'),
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
