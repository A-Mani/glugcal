Installation of the IGLUG-Cal website
=====================================

[N.B. This document is incomplete. It does not clarify all installation steps in details.]

1. Clone this repo, and change directory to the repo folder. For
   instructional purposes, path to the root of the repo will be
   denoted as `~/glugcal`.

   ```sh
   $ git clone git@github.com:kaustavdm/glugcal.git
   $ cd glugcal
   ```

2. Download a fresh copy of Drupal 7 from http://drupal.org/project/drupal.

   ```sh
   $ cd /tmp
   $ wget http://ftp.drupal.org/files/projects/drupal-7.22.tar.gz -O /tmp/drupal.tar.gz
   ```

3. Extract the content of the downloaded Drupal archive to a temporary folder.

   ```sh
   $ tar -xzf drupal.tar.gz
   ```

4. Copy over all files and directories, except the `sites` folder from
   the extracted archive to `~/glugcal/drupal/`.

5. Point the web root to `~/glugcal/drupal`. A sample configuration
   file nginx is included in the repo under `data/nginx`. Please
   consult Drupal's documentation on how to configure a web server for
   Drupal.

6. Copy `~/glugcal/drupal/sites/default/default.settings.php` to
   `~/glugcal/drupal/sites/default/settings.php`. Make the file
   editable by the web server user. For Debian/Ubuntu systems, replace
   the group name "http" with "www-data".

   ```sh
   $ cd ~/glugcal/drupal
   $ cp sites/default/default.settings.php sites/default/settings.php
   $ chgrp http sites/default/settings.php
   $ chmod g+w sites/default/settings.php
   ```

7. Create a directory at "~/glugcal/drupal/sites/default/files".

   ```sh
   $ mkdir sites/default/files
   $ chgrp -R http sites/default/files
   $ chmod g+w sites/default/files
   ```

7. Point your browser to the site's URL and install Drupal using "Minimal" profile.

8. Enable `glugcal_config` and `glugcal_content` modules from the
   command line. Enabling `glugcal_config` from the website's admin
   interface will throw gateway timeout errors because this module
   enables a huge host of other modules. We use `drush`.

   ```sh
   $ drush en glugcal_config
   $ drush cc all
   $ drush en glugcal_content
   $ drush cc all
   ```

9. Go to "/admin/appearance" page, and set "Skeleton Theme" "Enable
   and set default". The only thing that remains to do is to choose
   the theme's colour, and assign blocks to it.
