<?php

/**
 * Implementation of hook_content_default_fields().
 */
function logged_time_content_default_fields() {
  $fields = array();

  // Exported field: field_billable
  $fields['logged_time-field_billable'] = array(
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
  $fields['logged_time-field_hours'] = array(
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
  $fields['logged_time-field_parent'] = array(
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
      'support_ticket' => 'support_ticket',
      'book' => 0,
      'event' => 0,
      'group' => 0,
      'logged_time' => 0,
      'profile' => 0,
      'shoutbox' => 0,
      'support_project' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'support_ticket_list',
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
  // Included for use with string extractors like potx.
  t('Billable');
  t('Hours');
  t('Logged against');

  return $fields;
}
