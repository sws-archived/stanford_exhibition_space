<?php
/**
 * @file
 * stanford_exhibition_space.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_exhibition_space_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_exhibition_space|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_exhibition_space';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'exhibitions_see_all' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'on_view_now_block' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'well',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s_exspace_visitor_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_s_exspace_other_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|stanford_exhibition_space|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function stanford_exhibition_space_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'exhibitions_see_all';
  $ds_field->label = 'Exhibitions See All';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="../exhibitions">See upcoming exhibitions</a></p>
<p><a href="../exhibitions-history">See past exhibitions</a></p>
',
      'format' => 'content_editor_text_format',
    ),
    'use_token' => 0,
  );
  $export['exhibitions_see_all'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'on_view_now_block';
  $ds_field->label = 'On View Now Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'block' => 'views|b24fd35c7026b36e8d36a4fbf21c11fd',
    'block_render' => '2',
  );
  $export['on_view_now_block'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_exhibition_space_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_exhibition_space|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_exhibition_space';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'on_view_now_block',
        2 => 'exhibitions_see_all',
        3 => 'field_s_exspace_visitor_info',
        4 => 'field_s_exspace_other_info',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'on_view_now_block' => 'ds_content',
      'exhibitions_see_all' => 'ds_content',
      'field_s_exspace_visitor_info' => 'ds_content',
      'field_s_exspace_other_info' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_exhibition_space|full'] = $ds_layout;

  return $export;
}
