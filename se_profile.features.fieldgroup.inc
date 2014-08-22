<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function se_profile_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_affiliations
  $groups['profile-group_affiliations'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_affiliations',
    'label' => 'Department and  Program Affiliations ',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '73',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '75',
    'fields' => array(
      '0' => 'field_personnel_type',
      '1' => 'field_primary_affiliations',
      '2' => 'field_secondary_affiliations',
      '3' => 'field_other_affiliations',
      '4' => 'field_ses_research_group',
    ),
  );

  // Exported group: group_contact_information
  $groups['profile-group_contact_information'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_contact_information',
    'label' => 'Contact Information ',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '74',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '74',
    'fields' => array(
      '0' => 'field_office_location',
      '1' => 'field_lab_location',
      '2' => 'field_officehours',
      '3' => 'field_mail_code',
      '4' => 'field_phone',
      '5' => 'field_fax',
      '6' => 'field_sunet',
      '7' => 'field_stanford_email',
      '8' => 'field_alternate_email',
      '9' => 'field_researchgroup',
      '10' => 'field_lab',
      '11' => 'field_personal_url',
    ),
  );

  // Exported group: group_emergency_contact_informat
  $groups['profile-group_emergency_contact_informat'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_emergency_contact_informat',
    'label' => 'Emergency Contact Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '75',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '76',
    'fields' => array(
      '0' => 'field_emergency_name',
      '1' => 'field_emergency_relationship',
      '2' => 'field_emergency_phone1',
      '3' => 'field_emergency_phone2',
    ),
  );

  // Exported group: group_personal_information
  $groups['profile-group_personal_information'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_personal_information',
    'label' => 'Personal Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '71',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '73',
    'fields' => array(
      '0' => 'field_photo',
      '1' => 'field_title',
      '2' => 'field_first_name',
      '3' => 'field_middle_name',
      '4' => 'field_last_name',
      '5' => 'field_short_description',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Information ');
  t('Department and  Program Affiliations ');
  t('Emergency Contact Information');
  t('Personal Information');

  return $groups;
}
