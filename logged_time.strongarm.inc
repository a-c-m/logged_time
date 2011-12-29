<?php

/**
 * Implementation of hook_strongarm().
 */
function logged_time_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_logged_time';
  $strongarm->value = '0';

  $export['comment_logged_time'] = $strongarm;
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
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_logged_time';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_logged_time'] = $strongarm;
  return $export;
}
