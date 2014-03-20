<?php
/**
 * @file
 * stanford_exhibition_space.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_exhibition_space_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_exhibition_space_node_info() {
  $items = array(
    'stanford_exhibition_space' => array(
      'name' => t('Stanford Exhibition Space'),
      'base' => 'node_content',
      'description' => t('Stanford Exhibition Space content provides a landing page to showcase exhibitions at a certain location. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
