# Contributing to the GLUG-Cal website repository

Dear contributors,

For installing the website on your local server, please see the
instructions given in the [installation docs](docs/INSTALL.md).

You can either contribute code, custom settings, design or
documentation to this repository. Here are the steps for each:

# Contributing code/settings

Coders, please use drush. For drush installation, please see
[Drush project page on Drupal.org](http://drupal.org/project/drush). For
those who are not familiar with drush, please see the
[Drush documentation](http://drush.io)

## Coding Style

Please ensure that you have whitespace cleaned up and code properly
indented.

If you are contributing a custom module, or making changes to any
contrib module, please refer to
[Drupal's coding standards](http://drupal.org/coding-standards) for
guidance and follow it as closely as possible.

## Contributing settings

We use `Features` module with a load of supporting modules to export
Drupal's configuration to code.

If you have changed any important configuration and want to contribute that change, please recreate the "Glugcal config" feature. Use the "Glugcal content" feature for exporting useful nodes.

To recreate the features, go to
"Admin->Structure->Features->IGLUG-Cal" and hit "Recreate" for the
feature module needed. After selecting all required options in the
recreate page, click "Generate Feature" button. This will update the
corresponding module with new code.

## Contributing code

If you are contributing some custom code or making some bugfixes,
please write a detailed error message and refer to any issue if it is
already posted on the
[issue tracker](https://github.com/kaustavdm/glugcal/issues).

# Handling / Filing bugs

If you find any bug in the code or design of the website, please file
it in the [issue queue](https://github.com/kaustavdm/glugcal/issues).

When filing an issue, please specify a distinguishable headline and
describe the issue to as much details as possible. Posting a
screenshot of the issue will help us in debugging the code even
faster.

Thanks.

GLUG-Cal Team.
