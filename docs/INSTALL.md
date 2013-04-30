Installation of the IGLUG-Cal website
=====================================

[N.B. This document is incomplete. It does not clarify all installation steps in details.]

1. Clone this repo. For instructional purposes, path to the root of the repo will be denoted as $REPO.
2. Download a fresh copy of Drupal 7 from http://drupal.org/project/drupal.
3. Extract the content of the downloaded Drupal archive to a temporary folder.
4. Copy over all files and directories, except the "sites" folder from that directory to $REPO/drupal/.
5. Point the web root to $REPO/drupal.
6. Copy $REPO/drupal/sites/default/default.settings.php to $REPO/drupal/sites/default/settings.php.
7. Point your browser to the site's URL and install Drupal using "Minimal" profile.
8. Enable the customization modules to load the site configuration.
