<?php
/**
 * @file
 * glugcal_config.stylizer.inc
 */

/**
 * Implements hook_default_stylizer().
 */
function glugcal_config_default_stylizer() {
  $export = array();

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'solid_block_box';
  $style->admin_title = 'solid-block';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'solid_block_box',
    'style_base' => 'pane_plain_box',
    'palette' => array(
      'background' => '#dddddd',
      'text' => '#000000',
      'border' => '#000000',
      'header-background' => '#FFFFFF',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'header_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'border' => array(
      'thickness' => '2px',
      'style' => 'solid',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
  );
  $export['solid_block_box'] = $style;

  $style = new stdClass();
  $style->disabled = FALSE; /* Edit this to true to make a default style disabled initially */
  $style->api_version = 1;
  $style->name = 'solid_block_box_shadow';
  $style->admin_title = 'solid-block-shadow';
  $style->admin_description = '';
  $style->settings = array(
    'name' => 'solid_block_box_shadow',
    'style_base' => 'pane_rounded_shadow',
    'palette' => array(
      'background' => '#f4f4f4',
      'text' => '#000000',
      'header-text' => '#000000',
      'header-border' => '#000000',
    ),
    'header_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'text_font' => array(
      'font' => '',
      'size' => '',
      'letter_spacing' => '',
      'word_spacing' => '',
      'decoration' => '',
      'weight' => '',
      'style' => '',
      'variant' => '',
      'case' => '',
      'alignment' => '',
    ),
    'padding' => array(
      'top' => '',
      'right' => '',
      'bottom' => '',
      'left' => '',
    ),
    'header_border' => array(
      'thickness' => '',
      'style' => '',
    ),
  );
  $export['solid_block_box_shadow'] = $style;

  return $export;
}
