<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1, minimum-scale=1, maximum-scale=1" />
  <title>Mail Pack Email Template</title>
  <link href='https://fonts.googleapis.com/css?family=Poppins:400,300,500,600,700' rel='stylesheet' type='text/css' />
  <link href='https://fonts.googleapis.com/css?family=Lato:300,100,400' rel='stylesheet' type='text/css' />
  <link href='http://fonts.googleapis.com/css?family=Droid+Serif:400,700' rel='stylesheet' type='text/css' />
  <style type="text/css">

    @import url(https://fonts.googleapis.com/css?family=Poppins:400,300,500,600,700);
    @import url(https://fonts.googleapis.com/css?family=Lato:300,100,400);
    @import url(http://fonts.googleapis.com/css?family=Droid+Serif:400,700);
    [class="full"]                    {margin: 0 auto;}
    [class="fullw"]                   {margin: 0 auto;}
    img                               {margin: 0; border:none;}
    a                                 {text-decoration:none; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:11px; color: #878787;}
    @media only screen and (min-width: 515px) and (max-width: 860px){

      [class="fullw"]                   {width: 530px !important; margin: 0 auto;}
      [class="full"]                    {width: 500px !important; margin: 0 auto;}
      [class="full"]                    {width: 500px !important; margin: 0 auto;}
      [class="fulld"]                   {width: 437px !important;}
      [class="img"]                     {width: 100% !important; height: auto;}
      [class="menu"] span               {width: 23px; overflow: hidden; height: 4px; display: inline-block;}
      [class="logo-space"]              {width: 5px !important; }
      [class="logo-space"] p            {padding-left: 11px !important; }
      [class="icon"]                    {width: 158px !important; }
      [class="stat"]                    {width: 158px !important; }
      [class="bproject"]                {width: 245px !important; }
      [class="bproject"] img            {width: 100% !important; height: auto; }
      [class="sproject"]                {width: 117px !important; }
      [class="sproject"] img            {width: 100% !important; height: auto; }
      [class="plan"]                    {width: 238px !important; }
      [class="download"]                {width: 234px !important; }
      [class="laptop"]                  {width: 250px !important; }
      [class="laptop"] img              {width: 100% !important; height: auto;}
      [class="testimoni-text"]          {width: 350px !important; }
      [class="member-img"] img          {width: 100% !important; height: auto;}
      [class="member-img"]              {width: 239px !important; }
      [class="client-img"] img          {width: 100% !important; height: auto;}
      [class="client-img"]              {width: 160px !important; }
      [class="client-imgm"] img         {width: 100% !important; height: auto;}
      [class="client-imgm"]             {width: 158px !important; }
      [class="service-text"]            {width: 245px !important; }
      [class="column"]                  {width: 147px !important; }
      [class="column"] img              {width: 100% !important; height: auto;}
      [class="column-sp"]               {width: 29px !important; }
      [class="column-sp"] p             {padding-left: 29px !important; }
      [class="member-text"]             {width: 224px !important; }
      [class="news-text"]               {width: 275px !important; }
      [class="faq-text"]                {width: 452px !important; }
      [class="footlink"]                {width: auto !important; }
      [class="contact"]                 {width: 158px !important; }
      [class="news-title"]              {line-height: 24px !important; }

      }

    @media only screen and (max-width: 550px) {
      table                             {clear: both;}
      [class="img"]                     {width: 100% !important; height: auto;}
      [class="menu"]                    {text-align: center !important; height: auto; line-height: 32px !important; padding: 7px 0;}
      [class="menu"] span               {display: none;}
      [class="menu"] a                  {display: inline-block; margin: 0 15px;}
      [class="full"]                    {width: 280px !important;}
      [class="fullw"]                   {width: 280px !important;}
      [class="fulld"]                   {width: 280px !important;}
      [class="logo"]                    {float: none !important;}
      [class="logo-space"]              {width: 280px !important;}
      [class="phone"]                   {float: none !important;}
      [class="tsocial"]                 {float: none !important;}
      [class="logo-space2"]             {width: 280px !important;}
      [class="icon"]                    {width: 280px !important; float: none !important;}
      [class="icon-space"]              {width: 280px !important; margin-bottom: 15px !important;}
      [class="stat"]                    {width: 280px !important; float: none !important;}
      [class="stat-space"]              {width: 280px !important; margin-bottom: 15px !important;}
      [class="bproject"]                {width: 100% !important; }
      [class="bproject"] img            {width: 100% !important; height: auto; }
      [class="sproject"]                {width: 100% !important; }
      [class="sproject"] img            {width: 100% !important; height: auto; }
      [class="project-space"]           {width: 280px !important;}
      [class="plan"]                    {width: 280px !important;}
      [class="plan-space"]              {width: 280px !important; margin-bottom: 15px !important;}
      [class="download"]                {width: 280px !important; }
      [class="download"] td             {text-align: center !important; }
      [class="download"] table          {float: none !important; }
      [class="laptop"]                  {width: 280px !important; }
      [class="laptop"] img              {width: 100% !important; height: auto;}
      [class="testimoni-text"]          {width: 280px !important; }
      [class="testimoni-text"] td       {text-align: center !important;}
      [class="testimoni-text"] table    {float: none !important; margin-bottom: 10px !important;}
      [class="testimoni-text"] table[class="job"] {float: none !important; margin-bottom: 0px !important;}
      [class="testimoni-img"]           {width: 280px !important;}
      [class="testimoni-img"] img       {margin: 0 auto; width: auto !important;}
      [class="member-img"] img          {width: 100% !important; height: auto;}
      [class="member-img"]              {width: 280px !important; }
      [class="member-text"]             {width: 280px !important;}
      [class="member-text"] td          {text-align: center !important;}
      [class="member-text"] table       {float: none !important;}
      [class="Question"]                {width: 280px !important;}
      [class="Question"] td             {text-align: center !important;}
      [class="Question"] table          {float: none !important;}
      [class="news-img"]                {width: 280px !important;}
      [class="news-img"] img            {margin: 0 auto !important;}
      [class="news-text"]               {width: 280px !important;}
      [class="news-text"] td            {text-align: center !important;}
      [class="news-text"] a             {display: inline-block !important;}
      [class="news-title"]              {line-height:  24px !important;}
      [class="contact"]                 {width: 280px !important;}
      [class="contact"] td              {line-height: 2 !important;}
      [class="contact"] img             {margin: 0 auto !important;}
      [class="cantact-space"]           {margin-bottom: 10px !important;}
      [class="footlink"]                {float: none !important;margin-bottom: 20px !important;}
      [class="footmid"]                 {float: none !important;margin-bottom: 20px !important;}
      [class="footspace"]               {display: none !important;}
      [class="client-img"] img          {width: 100% !important; height: auto;}
      [class="client-img"]              {float: none !important; }
      [class="client-imgm"] img         {width: 100% !important; height: auto;}
      [class="client-imgm"]             {float: none !important; }
      [class="video-img"] img           {width: 100% !important; height: auto;}
      [class="video-img"]               {width: 100% !important; }
      [class="service-text"]            {width: 100% !important; margin-bottom: 30px; }
      [class="column"]                  {width: 100% !important; margin-bottom: 20px !important;}
      [class="column"] td               {text-align: center !important;}
      [class="column"] a                {display: inline-block !important; text-align: center !important;}
      [class="faq-text"]                {width: 232px !important;clear: none; }
      [class="faq-img"]                 {clear: none; }
      [class="faq-sp"]                  {clear: none; }
      [class="column"] img              {width: auto !important; display: inline-block !important;}
      [class="footlink"]                {width: 100% !important; margin: 0 0 20px!important; }
      [class="footlink"] td             {text-align: center !important;}
      [class="about"] td                {text-align: center !important;}
      [class="sspace"]                  {height: 0px !important;}
      }


  </style>
</head>
 
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>

        <?php print $body ?>

  </body>
</html>
