<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function logged_time_user_default_permissions() {
  $permissions = array();

  // Exported permission: create logged_time content
  $permissions['create logged_time content'] = array(
    'name' => 'create logged_time content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own logged_time content
  $permissions['delete own logged_time content'] = array(
    'name' => 'delete own logged_time content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own logged_time content
  $permissions['edit own logged_time content'] = array(
    'name' => 'edit own logged_time content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
