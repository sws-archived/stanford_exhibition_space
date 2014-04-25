<?php
/**
 * @file
 * stanford_exhibition_space.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_exhibition_space_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|stanford_exhibition_space|default';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition_space';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Wrapper',
      'instance_settings' => array(
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_wrapper|node|stanford_exhibition_space|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_wrapper|node|stanford_exhibition_space|full';
  $field_group->group_name = 'group_summary_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_exhibition_space';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary Wrapper',
      'instance_settings' => array(
        'classes' => 'summary',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary_wrapper|node|stanford_exhibition_space|full'] = $field_group;

  return $export;
}
