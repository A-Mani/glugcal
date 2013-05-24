<?php
/**
 * @file
 * glugcal_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glugcal_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function glugcal_content_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Static Page'),
      'base' => 'node_content',
      'description' => t('Add a static page whose contents are not frequently updated, e.g. About'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wiki_page' => array(
      'name' => t('Wiki Page'),
      'base' => 'node_content',
      'description' => t('Add a wiki page. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
