<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function logged_time_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logged_time';
  $context->description = 'Simple node+cck based time logging';
  $context->tag = 'Logged Time';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-logged_time_logged-block_1' => array(
          'module' => 'views',
          'delta' => 'logged_time_logged-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-logged_time_logged-block_2' => array(
          'module' => 'views',
          'delta' => 'logged_time_logged-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
      'layout' => 'default',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logged Time');
  t('Simple node+cck based time logging');

  $export['logged_time'] = $context;
  return $export;
}
