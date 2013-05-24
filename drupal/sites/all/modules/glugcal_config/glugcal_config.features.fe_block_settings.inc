<?php
/**
 * @file
 * glugcal_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function glugcal_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-active'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'active',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['forum-new'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'forum',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['poll-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'poll',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['print-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['statistics-popular'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular',
    'module' => 'statistics',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-events-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-newsflashes-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'newsflashes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
