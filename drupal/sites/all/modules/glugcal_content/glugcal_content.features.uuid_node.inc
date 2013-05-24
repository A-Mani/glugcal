<?php
/**
 * @file
 * glugcal_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function glugcal_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 3,
  'title' => 'Hello Everybody',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f952dd4a-65fa-404a-bf21-e416e9b16151',
  'type' => 'forum',
  'language' => 'und',
  'created' => 1367596801,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '372b19e3-5c48-45fc-9735-26b773247c91',
  'revision_uid' => 3,
  'taxonomy_forums' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
  ),
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Hi all,

This is my first post here. Hope you all like the site. Cheers.',
        'summary' => '',
        'format' => 'minimal',
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BoardPost',
    ),
    'taxonomy_forums' => array(
      'predicates' => array(
        0 => 'sioc:has_container',
      ),
      'type' => 'rel',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 3,
  'comment_count' => 0,
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'kaustav-dasmodak',
  'picture' => 0,
  'data' => 'a:1:{s:7:"contact";i:0;}',
  'forum_tid' => 1,
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'date' => '2013-05-03 21:30:01 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'How do you like the new website?',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1afa81d5-ba70-4688-aac4-0a6ee0b2eb9b',
  'type' => 'poll',
  'language' => 'und',
  'created' => 1369334131,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3f164140-f456-46ea-bab4-9ba6a1f04694',
  'revision_uid' => 1,
  'runtime' => 5184000,
  'active' => 1,
  'choice' => array(
    1 => array(
      'chid' => 1,
      'chtext' => 'Excellent',
      'chvotes' => 7,
      'weight' => 1,
    ),
    2 => array(
      'chid' => 2,
      'chtext' => 'Good',
      'chvotes' => 1,
      'weight' => 2,
    ),
    3 => array(
      'chid' => 3,
      'chtext' => 'Average',
      'chvotes' => 1,
      'weight' => 3,
    ),
    4 => array(
      'chid' => 4,
      'chtext' => 'Poor',
      'chvotes' => 0,
      'weight' => 4,
    ),
  ),
  'allowvotes' => FALSE,
  'vote' => 1,
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Poll',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'date' => '2013-05-24 00:05:31 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Main Page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c5ef3106-9990-4f66-a084-97d426181d8d',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1367676025,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4cb63301-b1a0-487d-9256-9568d2c81447',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This is the wiki of IGLUG-Cal. Please contribute to this wiki.

Developers documentation for the upcoming website can be seen below:

 - [[Website Specifications|Website Specifications]]',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => 'This is the wiki of IGLUG-Cal. Please contribute to this wiki.

Developers documentation for the upcoming website can be seen below:

<ul><li><a href="/wiki/Website%20Specifications" class="freelink freelink-path freelink-internal">Website Specifications</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'date' => '2013-05-04 19:30:25 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'About Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1ffd6cbd-1a14-4c78-bb97-16cd1a92f880',
  'type' => 'page',
  'language' => 'und',
  'created' => 1367783866,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e4d0f748-06e8-4c39-b737-e86efca9b8a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>This&nbsp;is&nbsp;the&nbsp;web-site&nbsp;of&nbsp;the&nbsp;Indian GNU/Linux Users\' Group- Kolkata Chapter (Ilug-Cal-Info).<br />
	<br />
	Ilug-CalInfo is not just the Kolkata Chapter of the GNU/Indian Linux Users Group, it is the urge of a people for freedom and openess. Freedom is something that is to be constantly struggled for. Struggled for, for achieving and sustaining it. This freedom is the freedom for modifying software, this freedom is the freedom for freely sharing software and this freedom is the freedom of being free from the yokes of closed source software. Ilug-CalInfo has constantly endeavoured to help bring free and open source software closer to the people and will continue to do so with much greater energy in the times to come.<br />
	<br />
	The objectives of Ilug-CalInfo in more clearer terms are :</p>

<ul>
	<li>To provide sufficient guidance (either directly or indirectly) to users and intending users of OSS and Linux at every level of usage.</li>
	<li>To promote the cause of FLOSS and OSS movement.</li>
	<li>To provide support for FOSS based evolution of computer science in general.</li>
	<li>To provide support for specific OSS based projects in "Socially Very Important Domains" including collaboration projects for schools, colleges, the under privileged and Education in general.</li>
	<li>To provide support for meaningful collaboration of the Linux user community.</li>
	<li>To provide specific support for localisation as is relevant for the city of Kolkata and the state of West Bengal in general.</li>
	<li>To provide support for open source software projects and</li>
	<li>To advocate the use and development of the open source hardware.</li>
</ul>

<p><br />
	The address of this GLUG is</p>

<p class="rteindent1">Indian GNU/Linux Users\' Group- Kolkata Chapter (Ilug-CalInfo)</p>

<p class="rteindent1">4th Floor, Phase II,<br />
	NAM Complex<br />
	Block M, New Alipore<br />
	Kolkata - 700 053<br />
	India</p>

<p>Our new mailing list is hosted locally <a href="http://www.ilug-cal.info/mailman/listinfo/linux-discussion">here</a>. You are welcome to discuss all Linux related, FLOSS and Ilug-Cal issues in the same list. We were actively using our mailing list at Google till the 9th of June\'2009. It can found <a href="http://groups.google.com/group/ilug-calinfo?hl=en">here</a>. Archives can be found at <a href="http://www.ilug-cal.info/pipermail/linux-discussion/">local archives</a> and also at our Google-groups <a href="http://groups.google.com/group/ilug-calinfo?hl=en">page</a>.<br />
	<br />
	To subscribe you can also send a blank message with \'subscribe\' in the body of the message to <a href="mailto:linux-discussion-request@ilug-cal.info">linux-discussion-request@ilug-cal.info</a></p>

<p>There is also another mailing list, which is solely meant for website related discussion.&nbsp;</p>

<p><a href="http://www.ilug-cal.info/mailman/listinfo/website">http://www.ilug-cal.info/mailman/listinfo/website</a><br />
	<br />
	Our GLUG (GNU/Linux Users Group) is distinct from a LUG with a similar sounding name from a dot-org domain (ilug-cal.org). The dot-org domain is currently in the hands of domain squatters and the administrators of the former LUG are distinct from those of Ilug-Cal.Info. Members of Ilug-Cal need to register separately for all wiki sections and those who register for the wiki sections only cannot auto-magically use this site.<br />
	&nbsp;</p>

<hr />
<p>This website is being maintained by a team consisting of the following persons&nbsp; (in alphabetical order)<br />
	&nbsp;</p>

<ul>
	<li>A. Mani</li>
	<li>J. P. Mathews</li>
	<li>Nirmalya Lahiri</li>
</ul>
',
        'summary' => '<p>Ilug-CalInfo is not just the Kolkata Chapter of the GNU/Indian Linux Users Group, it is the urge of a people for freedom and openess. Freedom is something that is to be constantly struggled for. Struggled for, for achieving and sustaining it. This freedom is the freedom for modifying software, this freedom is the freedom for freely sharing software and this freedom is the freedom of being free from the yokes of closed source software. Ilug-CalInfo has constantly endeavoured to help bring free and open source software closer to the people and will continue to do so with much greater energy in the times to come.</p>
',
        'format' => 'wysiwyg',
        'safe_value' => '<p>This is the web-site of the Indian GNU/Linux Users\' Group- Kolkata Chapter (Ilug-Cal-Info).<br /><br />
	Ilug-CalInfo is not just the Kolkata Chapter of the GNU/Indian Linux Users Group, it is the urge of a people for freedom and openess. Freedom is something that is to be constantly struggled for. Struggled for, for achieving and sustaining it. This freedom is the freedom for modifying software, this freedom is the freedom for freely sharing software and this freedom is the freedom of being free from the yokes of closed source software. Ilug-CalInfo has constantly endeavoured to help bring free and open source software closer to the people and will continue to do so with much greater energy in the times to come.<br /><br />
	The objectives of Ilug-CalInfo in more clearer terms are :</p>

<ul><li>To provide sufficient guidance (either directly or indirectly) to users and intending users of OSS and Linux at every level of usage.</li>
	<li>To promote the cause of FLOSS and OSS movement.</li>
	<li>To provide support for FOSS based evolution of computer science in general.</li>
	<li>To provide support for specific OSS based projects in "Socially Very Important Domains" including collaboration projects for schools, colleges, the under privileged and Education in general.</li>
	<li>To provide support for meaningful collaboration of the Linux user community.</li>
	<li>To provide specific support for localisation as is relevant for the city of Kolkata and the state of West Bengal in general.</li>
	<li>To provide support for open source software projects and</li>
	<li>To advocate the use and development of the open source hardware.</li>
</ul><p><br />
	The address of this GLUG is</p>

<p class="rteindent1">Indian GNU/Linux Users\' Group- Kolkata Chapter (Ilug-CalInfo)</p>

<p class="rteindent1">4th Floor, Phase II,<br />
	NAM Complex<br />
	Block M, New Alipore<br />
	Kolkata - 700 053<br />
	India</p>

<p>Our new mailing list is hosted locally <a href="http://www.ilug-cal.info/mailman/listinfo/linux-discussion">here</a>. You are welcome to discuss all Linux related, FLOSS and Ilug-Cal issues in the same list. We were actively using our mailing list at Google till the 9th of June\'2009. It can found <a href="http://groups.google.com/group/ilug-calinfo?hl=en">here</a>. Archives can be found at <a href="http://www.ilug-cal.info/pipermail/linux-discussion/">local archives</a> and also at our Google-groups <a href="http://groups.google.com/group/ilug-calinfo?hl=en">page</a>.<br /><br />
	To subscribe you can also send a blank message with \'subscribe\' in the body of the message to <a href="mailto:linux-discussion-request@ilug-cal.info">linux-discussion-request@ilug-cal.info</a></p>

<p>There is also another mailing list, which is solely meant for website related discussion. </p>

<p><a href="http://www.ilug-cal.info/mailman/listinfo/website">http://www.ilug-cal.info/mailman/listinfo/website</a><br /><br />
	Our GLUG (GNU/Linux Users Group) is distinct from a LUG with a similar sounding name from a dot-org domain (ilug-cal.org). The dot-org domain is currently in the hands of domain squatters and the administrators of the former LUG are distinct from those of Ilug-Cal.Info. Members of Ilug-Cal need to register separately for all wiki sections and those who register for the wiki sections only cannot auto-magically use this site.<br />
	 </p>

<hr /><p>This website is being maintained by a team consisting of the following persons  (in alphabetical order)<br />
	 </p>

<ul><li>A. Mani</li>
	<li>J. P. Mathews</li>
	<li>Nirmalya Lahiri</li>
</ul>',
        'safe_summary' => '<p>Ilug-CalInfo is not just the Kolkata Chapter of the GNU/Indian Linux Users Group, it is the urge of a people for freedom and openess. Freedom is something that is to be constantly struggled for. Struggled for, for achieving and sustaining it. This freedom is the freedom for modifying software, this freedom is the freedom for freely sharing software and this freedom is the freedom of being free from the yokes of closed source software. Ilug-CalInfo has constantly endeavoured to help bring free and open source software closer to the people and will continue to do so with much greater energy in the times to come.</p>
',
      ),
    ),
  ),
  'field_attachments' => array(),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'date' => '2013-05-06 01:27:46 +0530',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Website Specifications',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '38d0d8da-bf73-4292-8097-8f9c2c8c432e',
  'type' => 'wiki_page',
  'language' => 'und',
  'created' => 1367678945,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ef7408e6-19d9-4862-bc48-1885a3b2f4ef',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'These are specifications for the website contributed by volunteers. Please add to this or discuss to improve clarity of the requirements.

The following is taken from the mailing list archives.

Contributors: A. Mani, [Kaustav Das Modak](https://github.com/kaustavdm)

User Login
==========

* **Support for open id**, etc (gmail, yahoo). Drupal has built in support for openid, where users will have to supply their openid URL. We can add support for other openid providers as well, similar to what Stackoverflow does.
* Captcha, on login
* Support for *[Persona](http://www.mozilla.org/en-US/persona/)* login? Please discuss.

User Registration [Implemented]
=================

Publicly available registrations, or private registrations? There can be a hybrid solution, where users signup on the website, but can use their account post admin approval.

Include captcha on registration as well, if registration is public.

Current setting is the hybrid mode.

User profile [Implemented]
============

Information to be collected:

 * Name
 * Email id (required)
 * Website
 * Mobile
 * IRC
 * Free Software Skills
 * Availibility
 * Interest in Free Software projects / Jobs
 * Age
 * Gender: options should include F, T, M, Bi, Other, Prefer Not to Say  
           *"T is trans... an umbrella term, but it excludes bi-gendered people and others." - A. Mani*

Privacy
=======

* Users should be able to choose which part of their profile they want to make public.
* There should be a default privacy policy in place.
* No user tracking, please.

Front Page:
===========

Somewhere between cluttered and too empty. Too empty pages will put off newbies and they may not care to investigate. Similar to present +

* Drop down kind of menus
* Latest Posts in Mailing list need to be piped to front page
* Fortunes - a dynamic display of mailing list rules, event-related stuff, tips  in a random way
* Feeds from other important sites

Design and Accessibility
========================

* Users will be able to choose colours: Default: red+ black+ white
* Fonts should not be too light.
* Accessibility: standards compatible. See: http://www.w3.org/standards/webdesign/accessibility.
* Entire site and features should be navigable by keyboard alone.
* Visually impaired people should find it navigable.

Editor Options
==============

Permitted markup: 

* Minimal
    -  Allowed HTML tags: `<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>`
    -  Line breaks will be converted to HTML (e.g. into `<br>` and `<p>`)
    -  URLs will be converted into links to the URLS themselves
    -  Faulty HTML will be chopped off and corrected.
* Tidy
* Markdown
* LaTex (if possible)
* Collaborative Web Based Editor
* User will be able to save partly done work.

Default Policy
==============

Verified Users will be able to contribute to the following sections: News, Articles, Code Snippets, Forum, Comments and Links. Courses and other sections will require admin approval.

Web server protol: HTTPS vs HTTP
================================

*"It is better to use the former, but would require suitable design." - A. Mani*

It can be done easily. We will need to configure the webserver to serve pages through HTTPS and redirect all HTTP traffic to corresponding HTTPS url. So:

    http://ilug-cal.info -> https://ilug-cal.info
    http://ilug-cal.info/user/1 -> https://ilug-cal.info/user/1

Admin
=====

* Admin Login, interface will be from a separate url.
* All users including admins should be able to contribute in minimal
html and via editor.


Content Categories
==================

Same as current site. Please discuss for other changes.

Site Navigation
===============

Main Menu on Left: News, Articles, Projects, Petitions, Events,
Mailing Lists, Jobs, Contribute, Courses, Wiki, Help, About

Sitemap - both human understandable and XML for search engines.

Permissions
===========

* Only admins will be able to create static pages
* Upload types should be restricted.

NewsFlashes
===========

News: Free Software News, Open Source News.

Uploads
=======

If a category is created, then automatically an upload directory should happen.

Uploads should be category specific.',
        'summary' => '',
        'format' => 'markdown',
        'safe_value' => 'These are specifications for the website contributed by volunteers. Please add to this or discuss to improve clarity of the requirements.

The following is taken from the mailing list archives.

Contributors: A. Mani, <a href="https://github.com/kaustavdm">Kaustav Das Modak</a>

<h1>User Login</h1>

<ul><li><strong>Support for open id</strong>, etc (gmail, yahoo). Drupal has built in support for openid, where users will have to supply their openid URL. We can add support for other openid providers as well, similar to what Stackoverflow does.</li>
<li>Captcha, on login</li>
<li>Support for <em><a href="http://www.mozilla.org/en-US/persona/">Persona</a></em> login? Please discuss.</li>
</ul><h1>User Registration [Implemented]</h1>

Publicly available registrations, or private registrations? There can be a hybrid solution, where users signup on the website, but can use their account post admin approval.

Include captcha on registration as well, if registration is public.

Current setting is the hybrid mode.

<h1>User profile [Implemented]</h1>

Information to be collected:

<ul><li>Name</li>
<li>Email id (required)</li>
<li>Website</li>
<li>Mobile</li>
<li>IRC</li>
<li>Free Software Skills</li>
<li>Availibility</li>
<li>Interest in Free Software projects / Jobs</li>
<li>Age</li>
<li>Gender: options should include F, T, M, Bi, Other, Prefer Not to Say
       <em>"T is trans... an umbrella term, but it excludes bi-gendered people and others." - A. Mani</em></li>
</ul><h1>Privacy</h1>

<ul><li>Users should be able to choose which part of their profile they want to make public.</li>
<li>There should be a default privacy policy in place.</li>
<li>No user tracking, please.</li>
</ul><h1>Front Page:</h1>

Somewhere between cluttered and too empty. Too empty pages will put off newbies and they may not care to investigate. Similar to present +

<ul><li>Drop down kind of menus</li>
<li>Latest Posts in Mailing list need to be piped to front page</li>
<li>Fortunes - a dynamic display of mailing list rules, event-related stuff, tips  in a random way</li>
<li>Feeds from other important sites</li>
</ul><h1>Design and Accessibility</h1>

<ul><li>Users will be able to choose colours: Default: red+ black+ white</li>
<li>Fonts should not be too light.</li>
<li>Accessibility: standards compatible. See: <a href="http://www.w3.org/standards/webdesign/accessibility">http://www.w3.org/standards/webdesign/accessibility</a>.</li>
<li>Entire site and features should be navigable by keyboard alone.</li>
<li>Visually impaired people should find it navigable.</li>
</ul><h1>Editor Options</h1>

Permitted markup:

<ul><li>Minimal

<ul><li>Allowed HTML tags: <code>&lt;a&gt; &lt;em&gt; &lt;strong&gt; &lt;cite&gt; &lt;blockquote&gt; &lt;code&gt; &lt;ul&gt; &lt;ol&gt; &lt;li&gt; &lt;dl&gt; &lt;dt&gt; &lt;dd&gt;</code></li>
<li>Line breaks will be converted to HTML (e.g. into <code>&lt;br&gt;</code> and <code>&lt;p&gt;</code>)</li>
<li>URLs will be converted into links to the URLS themselves</li>
<li>Faulty HTML will be chopped off and corrected.</li>
</ul></li>
<li>Tidy</li>
<li>Markdown</li>
<li>LaTex (if possible)</li>
<li>Collaborative Web Based Editor</li>
<li>User will be able to save partly done work.</li>
</ul><h1>Default Policy</h1>

Verified Users will be able to contribute to the following sections: News, Articles, Code Snippets, Forum, Comments and Links. Courses and other sections will require admin approval.

<h1>Web server protol: HTTPS vs HTTP</h1>

<em>"It is better to use the former, but would require suitable design." - A. Mani</em>

It can be done easily. We will need to configure the webserver to serve pages through HTTPS and redirect all HTTP traffic to corresponding HTTPS url. So:

<pre><code>http://ilug-cal.info -&gt; https://ilug-cal.info
http://ilug-cal.info/user/1 -&gt; https://ilug-cal.info/user/1
</code></pre>

<h1>Admin</h1>

<ul><li>Admin Login, interface will be from a separate url.</li>
<li>All users including admins should be able to contribute in minimal
html and via editor.</li>
</ul><h1>Content Categories</h1>

Same as current site. Please discuss for other changes.

<h1>Site Navigation</h1>

Main Menu on Left: News, Articles, Projects, Petitions, Events,
Mailing Lists, Jobs, Contribute, Courses, Wiki, Help, About

Sitemap - both human understandable and XML for search engines.

<h1>Permissions</h1>

<ul><li>Only admins will be able to create static pages</li>
<li>Upload types should be restricted.</li>
</ul><h1>NewsFlashes</h1>

News: Free Software News, Open Source News.

<h1>Uploads</h1>

If a category is created, then automatically an upload directory should happen.

Uploads should be category specific.',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'print_pdf_display' => 1,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 1,
  'date' => '2013-05-04 20:19:05 +0530',
);
  return $nodes;
}
