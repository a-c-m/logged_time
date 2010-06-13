<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _time_content_default_fields() {
  $fields = array();

  // Exported field: field_billable
  $fields[] = array(
    'field_name' => 'field_billable',
    'type_name' => 'time',
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
      'label' => 'BIllable',
      'weight' => '33',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_hours
  $fields[] = array(
    'field_name' => 'field_hours',
    'type_name' => 'time',
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
      'description' => 'Number of hours. You can\'t do more than 10 at a time, to insure granularity.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_parent
  $fields[] = array(
    'field_name' => 'field_parent',
    'type_name' => 'time',
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
      'event' => 'event',
      'support_ticket' => 'support_ticket',
      'blog' => 0,
      'book' => 0,
      'casetracker_basic_case' => 0,
      'group' => 0,
      'profile' => 0,
      'casetracker_basic_project' => 0,
      'shoutbox' => 0,
      'support_time' => 0,
      'time' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Log time',
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
    t('BIllable'),
    t('Hours'),
    t('Logged against'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _time_ctools_plugin_api() {
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
function _time_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_time';
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

  $export['content_extra_weights_time'] = $strongarm;
  return $export;
}
