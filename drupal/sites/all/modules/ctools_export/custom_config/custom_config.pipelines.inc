<?php

/**
 * @file
 * Bulk export of pipelines objects generated by Bulk export module.
 */

/**
 * Implements hook_default_panels_renderer_pipeline().
 */
function custom_config_default_panels_renderer_pipeline() {
  $pipelines = array();

  $pipeline = new stdClass();
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'standard';
  $pipeline->admin_title = 'Standard';
  $pipeline->admin_description = 'Renders a panel normally. This is the most common option.';
  $pipeline->weight = -100;
  $pipeline->settings = array(
    'renderers' => array(
      0 => array(
        'access' => array(),
        'renderer' => 'standard',
        'options' => array(),
      ),
    ),
  );
  $pipelines['standard'] = $pipeline;

  return $pipelines;
}