<?php
?>
  <div id="branding" class="clearfix">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($primary_local_tasks); ?>
  </div>

  <div id="page" class="clearfix">
    <?php if ($secondary_local_tasks): ?>
      <div class="tabs-secondary clearfix"><ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul></div>
    <?php endif; ?>
    
    <div id="main">
      <div id="content" class="clearfix">
        <div class="content-inner center">
          <div class="element-invisible"><a id="main-content"></a></div>
          <?php if ($messages): ?>
            <div id="console" class="clearfix"><?php print $messages; ?></div>
          <?php endif; ?>
          <?php if ($page['help']): ?>
            <div id="help">
              <?php print render($page['help']); ?>
            </div>
          <?php endif; ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
        </div>
      </div>
      
      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="column sidebar first">
          <div id="sidebar-first-inner" class="inner">
            <?php print render($page['sidebar_first']); ?>
          </div>
        </div>
      <?php endif; ?> <!-- /sidebar-first -->

      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="column sidebar second">
          <div id="sidebar-second-inner" class="inner">
            <?php print render($page['sidebar_second']); ?>
          </div>
        </div>
      <?php endif; ?> <!-- /sidebar-second -->
 
    </div>

    <div id="footer">
      <?php print $feed_icons; ?>
    </div>

  </div>
