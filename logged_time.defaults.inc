<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _logged_time_content_default_fields() {
  $fields = array();

  // Exported field: field_billable
  $fields[] = array(
    'field_name' => 'field_billable',
    'type_name' => 'logged_time',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Billable
Non-billable
Pre-paid',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Billable',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Billable',
      'weight' => '33',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_hours
  $fields[] = array(
    'field_name' => 'field_hours',
    'type_name' => 'logged_time',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_float',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' hours',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_hours][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hours',
      'weight' => '32',
      'description' => 'Number of hours. You shouldn\'t do more than 10 at a logged_time, to insure granularity.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_parent
  $fields[] = array(
    'field_name' => 'field_parent',
    'type_name' => 'logged_time',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Log logged_time',
        'hover_title' => 'Submit the time you\'ve worked for this item.',
        'destination' => 'node',
      ),
      'fallback' => 'page_not_found',
      'edit_fallback' => 0,
      'label' => 'Logged against',
      'weight' => '31',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  array(
    t('Billable'),
    t('Hours'),
    t('Logged against'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _logged_time_context_default_contexts() {
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
        '1' => 1,
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
    ),
  );
  $context->condition_mode = 0;

  $translatables['logged_time'] = array(
    t('Logged Time'),
    t('Simple node+cck based time logging'),
  );

  $export['logged_time'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _logged_time_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _logged_time_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_logged_time';
  $strongarm->value = array(
    'title' => '34',
    'body_field' => '37',
    'revision_information' => '39',
    'comment_settings' => '42',
    'menu' => '35',
    'book' => '38',
    'path' => '40',
    'attachments' => '41',
    'og_nodeapi' => '36',
  );

  $export['content_extra_weights_logged_time'] = $strongarm;
  
  $export['og_content_type_usage_logged_time'] = 'group_post_standard';
  
  return $export;
}
