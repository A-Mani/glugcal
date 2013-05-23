<?php
/**
 * @file
 * glugcal_config.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function glugcal_config_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'about_iglugcal_extract';
  $content->admin_title = 'about_iglugcal';
  $content->admin_description = 'A short extract from the "About Us" page of IGLUG-CAL';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'about_iglugcal',
    'title' => 'Who are we?',
    'body' => '<p>Ilug-CalInfo is not just the Kolkata Chapter of the GNU/Indian Linux Users Group, it is the urge of a people for freedom and openess. Freedom is something that is to be constantly struggled for. Struggled for, for achieving and sustaining it. This freedom is the freedom for modifying software, this freedom is the freedom for freely sharing software and this freedom is the freedom of being free from the yokes of closed source software. Ilug-CalInfo has constantly endeavoured to help bring free and open source software closer to the people and will continue to do so with much greater energy in the times to come.</p>
',
    'format' => 'wysiwyg',
    'substitute' => TRUE,
  );
  $export['about_iglugcal_extract'] = $content;

  return $export;
}
