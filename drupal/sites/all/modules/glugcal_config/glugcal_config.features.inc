<?php
/**
 * @file
 * glugcal_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glugcal_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "stylizer" && $api == "stylizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function glugcal_config_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function glugcal_config_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Add an article that belongs to some category, e.g. news, '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Static Page'),
      'base' => 'node_content',
      'description' => t('Add a static page whose contents are not frequently updated, e.g. About'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
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

/**
 * Implements hook_default_profile2_type().
 */
function glugcal_config_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Public Profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : [  ]
  }');
  return $items;
}
