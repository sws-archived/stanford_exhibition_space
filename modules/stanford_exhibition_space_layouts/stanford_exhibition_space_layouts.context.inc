<?php
/**
 * @file
 * stanford_exhibition_space_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_exhibition_space_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'exhibition_spaces_landing';
  $context->description = 'Exhibition Spaces Landing Page';
  $context->tag = 'Exhibition Spaces';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'exhibition-spaces' => 'exhibition-spaces',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0870b2f26d25cb15e901979bcc55506c' => array(
          'module' => 'views',
          'delta' => '0870b2f26d25cb15e901979bcc55506c',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exhibition Spaces');
  t('Exhibition Spaces Landing Page');
  $export['exhibition_spaces_landing'] = $context;

  return $export;
}
