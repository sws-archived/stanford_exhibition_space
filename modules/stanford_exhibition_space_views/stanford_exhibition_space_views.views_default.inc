<?php
/**
 * @file
 * stanford_exhibition_space_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_exhibition_space_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stanford_exhibition_spaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Exhibition Spaces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stanford Exhibition Spaces';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1200',
  );
  /* Field: Content: Dates Duration */
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['id'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['field'] = 'field_s_exh_dates_duration';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_dates_duration']['settings'] = array(
    'format_type' => 'stanford_month_date_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_s_exh_thumb']['id'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['table'] = 'field_data_field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['field'] = 'field_s_exh_thumb';
  $handler->display->display_options['fields']['field_s_exh_thumb']['label'] = '';
  $handler->display->display_options['fields']['field_s_exh_thumb']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_exh_thumb']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_s_exh_thumb']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_exh_thumb']['settings'] = array(
    'image_style' => 'med-landscape',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'More about this exhibit';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alt'] = 'More about this exhibit';
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'more-link';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="clear-both clearfix">
<div class="span3">
[field_s_exh_thumb]
</div>
<div class="span9">
<span class="descriptor">[field_s_exh_dates_duration]</span>
<h3>[title]</h3>
[body]
[nid] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Exhibition Space (field_s_exh_space) */
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['id'] = 'field_s_exh_space_target_id';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['table'] = 'field_data_field_s_exh_space';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['field'] = 'field_s_exh_space_target_id';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_s_exh_space_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_exhibition' => 'stanford_exhibition',
  );
  /* Filter criterion: Content: Dates Duration -  start date (field_s_exh_dates_duration) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['id'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['field'] = 'field_s_exh_dates_duration_value';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value']['default_date'] = 'today';
  /* Filter criterion: Content: Dates Duration - end date (field_s_exh_dates_duration:value2) */
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['id'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['table'] = 'field_data_field_s_exh_dates_duration';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['field'] = 'field_s_exh_dates_duration_value2';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_s_exh_dates_duration_value2']['default_date'] = 'today';

  /* Display: On View Now */
  $handler = $view->new_display('block', 'On View Now', 'exspace_on_view_now');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'On View Now';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'on-view-now';
  $handler->display->display_options['display_description'] = 'On View Right Now Block';
  $handler->display->display_options['block_description'] = 'On View Now - Exhibition Spaces';
  $export['stanford_exhibition_spaces'] = $view;

  return $export;
}
