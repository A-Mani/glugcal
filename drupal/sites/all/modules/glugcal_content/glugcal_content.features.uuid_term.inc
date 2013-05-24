<?php
/**
 * @file
 * glugcal_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function glugcal_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Courses',
    'description' => '',
    'format' => 'markdown',
    'weight' => 0,
    'uuid' => '031b8f4c-3c16-42bc-a0e3-4ccce94352ec',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/courses',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jobs',
    'description' => '',
    'format' => 'markdown',
    'weight' => 0,
    'uuid' => '08f985d5-713f-493b-9e58-a416e832b05a',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/jobs',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'FOSS News',
    'description' => '',
    'format' => 'markdown',
    'weight' => 0,
    'uuid' => '2094ebba-2dc3-406a-9415-ffdc47f4b928',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/foss-news',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'NewsFlashes',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => '307924e0-265d-4674-a360-e3b516a1597e',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/newsflashes',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Projects',
    'description' => '',
    'format' => 'markdown',
    'weight' => 0,
    'uuid' => '348220d8-6a35-4484-8f83-501b8511748b',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/projects',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Help',
    'description' => '',
    'format' => 'markdown',
    'weight' => 0,
    'uuid' => '3fbb4e18-9bd0-4268-8c50-6242bf8f4e13',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/help',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'GNU/Linux Discussion',
    'description' => 'Discussions related to GNU/Linux.',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6774828c-ace0-4463-bc8b-f6e95c333d21',
    'vocabulary_machine_name' => 'forums',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Events',
    'description' => '',
    'format' => 'wysiwyg',
    'weight' => 0,
    'uuid' => 'c971abbb-b896-4441-a6e0-3629f1c6fc6f',
    'vocabulary_machine_name' => 'categories',
    'url_alias' => array(
      0 => array(
        'alias' => 'categories/events',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'General discussion',
    'description' => 'General topics that don\'t fit anywhere else.',
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'cb2fe1c1-b028-4374-a72a-14c3966a44b1',
    'vocabulary_machine_name' => 'forums',
    'url_alias' => array(),
  );
  return $terms;
}
