<?php
/**
 * @file
 * icor_jmol.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function icor_jmol_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_jmol_file'
  $field_bases['field_jmol_file'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_jmol_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'cis_connector_access' => FALSE,
      'cis_connector_disable' => FALSE,
      'display_default' => 1,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
