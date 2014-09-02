<?php
/**
 * @file
 * cco_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cco_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-csa:node/2
  $menu_links['main-menu_about-csa:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About CSA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-csa:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_csa:node/2',
  );
  // Exported menu link: main-menu_about-wholesale:node/7
  $menu_links['main-menu_about-wholesale:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'About Wholesale',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-wholesale:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_wholesale:node/7',
  );
  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'ABOUT',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_bios:about/bios
  $menu_links['main-menu_bios:about/bios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/bios',
    'router_path' => 'about/bios',
    'link_title' => 'bios',
    'options' => array(
      'identifier' => 'main-menu_bios:about/bios',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_csa:node/2
  $menu_links['main-menu_csa:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'CSA',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_csa:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_customers:wholesale/customers
  $menu_links['main-menu_customers:wholesale/customers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wholesale/customers',
    'router_path' => 'wholesale/customers',
    'link_title' => 'customers',
    'options' => array(
      'identifier' => 'main-menu_customers:wholesale/customers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_wholesale:node/7',
  );
  // Exported menu link: main-menu_events:events
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faq:csa/faq
  $menu_links['main-menu_faq:csa/faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'csa/faq',
    'router_path' => 'csa/faq',
    'link_title' => 'faq',
    'options' => array(
      'identifier' => 'main-menu_faq:csa/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_csa:node/2',
  );
  // Exported menu link: main-menu_faq:wholesale/faq
  $menu_links['main-menu_faq:wholesale/faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'wholesale/faq',
    'router_path' => 'wholesale/faq',
    'link_title' => 'faq',
    'options' => array(
      'identifier' => 'main-menu_faq:wholesale/faq',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_wholesale:node/7',
  );
  // Exported menu link: main-menu_farm-history:node/137
  $menu_links['main-menu_farm-history:node/137'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/137',
    'router_path' => 'node/%',
    'link_title' => 'Farm History',
    'options' => array(
      'identifier' => 'main-menu_farm-history:node/137',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_harvest-projection:csa/harvest
  $menu_links['main-menu_harvest-projection:csa/harvest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'csa/harvest',
    'router_path' => 'csa/harvest',
    'link_title' => 'harvest projection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_harvest-projection:csa/harvest',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_csa:node/2',
  );
  // Exported menu link: main-menu_press:press
  $menu_links['main-menu_press:press'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press',
    'router_path' => 'press',
    'link_title' => 'Press',
    'options' => array(
      'identifier' => 'main-menu_press:press',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_types-of-shares:csa/shares
  $menu_links['main-menu_types-of-shares:csa/shares'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'csa/shares',
    'router_path' => 'csa/shares',
    'link_title' => 'types of shares',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_types-of-shares:csa/shares',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_csa:node/2',
  );
  // Exported menu link: main-menu_wholesale:node/7
  $menu_links['main-menu_wholesale:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'WHOLESALE',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_wholesale:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-blog-sidebar-menu_all-posts:blog
  $menu_links['menu-blog-sidebar-menu_all-posts:blog'] = array(
    'menu_name' => 'menu-blog-sidebar-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'all posts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-blog-sidebar-menu_all-posts:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-blog-sidebar-menu_insights:taxonomy/term/3
  $menu_links['menu-blog-sidebar-menu_insights:taxonomy/term/3'] = array(
    'menu_name' => 'menu-blog-sidebar-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'insights',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-blog-sidebar-menu_insights:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-blog-sidebar-menu_news:taxonomy/term/8
  $menu_links['menu-blog-sidebar-menu_news:taxonomy/term/8'] = array(
    'menu_name' => 'menu-blog-sidebar-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'news',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-blog-sidebar-menu_news:taxonomy/term/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-blog-sidebar-menu_recipes:taxonomy/term/2
  $menu_links['menu-blog-sidebar-menu_recipes:taxonomy/term/2'] = array(
    'menu_name' => 'menu-blog-sidebar-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'recipes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-blog-sidebar-menu_recipes:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_chaos-tools-ajax-demo:ctools_ajax_sample
  $menu_links['navigation_chaos-tools-ajax-demo:ctools_ajax_sample'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample',
    'router_path' => 'ctools_ajax_sample',
    'link_title' => 'Chaos Tools AJAX Demo',
    'options' => array(
      'identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_compose-tips:filter/tips
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_successful-jumping:ctools_ajax_sample/jumped
  $menu_links['navigation_successful-jumping:ctools_ajax_sample/jumped'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'ctools_ajax_sample/jumped',
    'router_path' => 'ctools_ajax_sample/jumped',
    'link_title' => 'Successful Jumping',
    'options' => array(
      'identifier' => 'navigation_successful-jumping:ctools_ajax_sample/jumped',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_chaos-tools-ajax-demo:ctools_ajax_sample',
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT');
  t('About CSA');
  t('About Wholesale');
  t('Blog');
  t('CSA');
  t('Chaos Tools AJAX Demo');
  t('Compose tips');
  t('Events');
  t('Farm History');
  t('Press');
  t('Successful Jumping');
  t('User account');
  t('WHOLESALE');
  t('all posts');
  t('bios');
  t('customers');
  t('faq');
  t('harvest projection');
  t('insights');
  t('news');
  t('recipes');
  t('types of shares');


  return $menu_links;
}
