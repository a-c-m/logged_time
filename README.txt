ABOUT
--------------------------------
Node/CCK based time tracking solution for Open Atrium. Unlike many other time tracking solutions this one simply builds on common contrib modules, with no custom database tables or complex code.

Logged time is simply a node which references the parent node to which the time is attached.

INSTALL / CONFIGURATION
--------------------------------
Install and enable as you would any feature for Atrium, remembering to enable it for a group.
You also need to configure which items your allowing time to be logged against:
/admin/content/node-type/logged-time/fields

IMPORTANT
-------------
Currently needs a modified version of nodereferance_url
http://drupal.org/node/826312#comment-3083132

TODO
-------------------------
 * Features configuration page to allow per space configuration of /admin/content/node-type/logged-time/fields and also then to display the views_calc results in a block on the /node/X pages for nodes of the selected content type.
 * Cleaning it up theme wise, beautifying the output.

+ Lots more, its a very early version, there is no reporting interface or complex features.

ATTRIBUTION
-----------------------
Icons came from http://www.oxygen-icons.org/ via http://www.iconfinder.com/


AUTHOR
-------------------------

Openly Connected
www.openlyconnected.com

Please do contact us if you wish to get paid support for this module or wish to commission additional features.