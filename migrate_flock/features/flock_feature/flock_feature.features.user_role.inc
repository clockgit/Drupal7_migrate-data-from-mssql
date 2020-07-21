<?php
/**
 * @file
 * flock_feature.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function flock_feature_user_default_roles() {
  $roles = array();

  // Exported role: Admin
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => '10',
  );

  // Exported role: Business Office
  $roles['Business Office'] = array(
    'name' => 'Business Office',
    'weight' => '4',
  );

  // Exported role: Content Specialists
  $roles['Content Specialists'] = array(
    'name' => 'Content Specialists',
    'weight' => '5',
  );

  // Exported role: New Media
  $roles['New Media'] = array(
    'name' => 'New Media',
    'weight' => '6',
  );

  // Exported role: Support Staff
  $roles['Support Staff'] = array(
    'name' => 'Support Staff',
    'weight' => '7',
  );

  // Exported role: Tech Team
  $roles['Tech Team'] = array(
    'name' => 'Tech Team',
    'weight' => '8',
  );

  // Exported role: leadership
  $roles['leadership'] = array(
    'name' => 'leadership',
    'weight' => '3',
  );

  // Exported role: masquerade
  $roles['masquerade'] = array(
    'name' => 'masquerade',
    'weight' => '9',
  );

  return $roles;
}
