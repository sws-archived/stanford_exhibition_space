<?php
/**
 * @file
 * stanford_exhibition_space_remote_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_exhibition_space_remote_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_exhibition-field_s_exh_space'
  $field_instances['node-stanford_exhibition-field_s_exh_space'] = array(
    'bundle' => 'stanford_exhibition',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may reference an exhibition space or spaces using this field. By referencing an exhibition space this exhibition will show up under the listings of that spaces page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s_exh_space',
    'label' => 'Exhibition Space',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibition Space');
  t('You may reference an exhibition space or spaces using this field. By referencing an exhibition space this exhibition will show up under the listings of that spaces page.');

  return $field_instances;
}
