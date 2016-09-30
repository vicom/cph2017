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
 <body id="bd" style="margin:0; background:#fff;">
<!--===== Start top =====-->
<table border="0" cellpadding="0" cellspacing="0" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;"  width="100%" align="center">
    <tbody>


    <!-- Start Logo-->
    <tr>
        <td width="100%">

            <table border="0" cellpadding="0" cellspacing="0" class="full" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" width="600" align="center">
                <tbody>
                <tr>
                    <td height="35"></td>
                </tr>
                <tr>
                    <td valign="top">

                        <!-- Start Logo -->
                        <table border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" class="logo" width="178" align="left">
                            <tbody>
                            <tr>
                                <td>
                                    <img width="178" src="http://cph.vicom-agency.de/sites/default/files/cph_logo.png" style="display:block" alt="logo" />
                                </td>
                            </tr>
                            </tbody>
                        </table>
                        <!-- End Logo -->

                        <table border="0" class="logo-space" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="145" align="left">
                            <tbody>
                            <tr>
                                <td height="20">
                                    <p style="padding-left: 143px; margin:0;"></p>
                                </td>
                            </tr>
                            </tbody>
                        </table>

                        <!-- Start Phone -->
                        <table border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" class="phone" width="auto" align="right">
                            <tbody>
                            <tr>
                                <td height="12"></td>
                            </tr>
                            <tr>
                                <td>
                                    <table border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="100%" align="center">
                                        <tbody>
                                        <tr>
                                            <td valign="middle">
                                                <img width="30" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/phone-icon.png" style="display:block" alt="phone" />
                                            </td>
                                            <td width="9"></td>
                                            <td>
                                                <table border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="100%" align="center">
                                                    <tbody>
                                                    <tr>
                                                        <td height="13" style="line-height: 13px; text-align: center; font-size:11px;  font-family:'Poppins' , 'times new roman'; font-weight:300 ; color: #7A7A7A;">
                                                            (212) 744-8135
                                                        </td>
                                                    </tr>
                                                    <tr>
                                                        <td height="6">

                                                        </td>
                                                    </tr>
                                                    <tr>
                                                        <td height="13" style="line-height: 13px; text-align: center; font-size:11px;  font-family:'Poppins' , 'times new roman'; font-weight:300 ; color: #7A7A7A;">
                                                            (212) 744-8136
                                                        </td>
                                                    </tr>
                                                    </tbody>
                                                </table>
                                            </td>
                                        </tr>
                                        </tbody>
                                    </table>
                                </td>
                            </tr>
                            </tbody>
                        </table>
                        <!-- End Phone -->

                        <table border="0" class="logo-space2" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="5" align="right">
                            <tbody>
                            <tr>
                                <td height="20">
                                    <p style="padding-left: 11px; margin:0;"></p>
                                </td>
                            </tr>
                            </tbody>
                        </table>


                        <!-- Stat Social -->
                        <table class="tsocial" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="auto" align="right">
                            <tbody>
                            <tr>
                                <td height="14"></td>
                            </tr>
                            <tr>
                                <td>
                                    <table border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="100%" align="center">
                                        <tbody>
                                        <tr>
                                            <td style="line-height:0;" valign="top" width="28">
                                                <a href="#" style="display:block; line-height:0;">
                                                    <img src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/t-facebook.png" alt="img" style="display:block;" width="28" />
                                                </a>
                                            </td>
                                            <td width="11">

                                            </td>
                                            <td style="line-height:0;" valign="top" width="28">
                                                <a href="#" style="display:block; line-height:0;">
                                                    <img src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/t-in.png" alt="img" style="display:block;" width="28" />
                                                </a>
                                            </td>
                                            <td width="11">

                                            </td>
                                            <td style="line-height:0;" valign="top" width="28">
                                                <a href="#" style="display:block; line-height:0;">
                                                    <img src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/t-twitter.png" alt="img" style="display:block;" width="28" />
                                                </a>
                                            </td>
                                        </tr>
                                        </tbody>
                                    </table>
                                </td>
                            </tr>
                            </tbody>
                        </table>
                        <!-- End Social -->
                    </td>
                </tr>
                <tr>
                    <td height="36"></td>
                </tr>
                </tbody>
            </table>

        </td>
    </tr>
    <!-- end  Logo-->

    </tbody>
</table>
<!--===== End top =====-->

<!--===== Start About =====-->
<table border="0" bgcolor="ffffff" cellpadding="0" cellspacing="0" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;"  width="100%" align="center">
    <tbody>

    <!-- Start-->
    <tr>
        <td>
            <table border="0" cellpadding="0" cellspacing="0" class="full" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" width="600" align="center">
                <tbody>

                <tr>
                    <td height="69">

                    </td>
                </tr>

                <!-- Start About -->
                <tr>
                    <td width="600" class="full" >
                                    <?php print $recipient ?>
                        <!-- Start About -->
                        <table class="about" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="100%" align="left">
                            <tbody>
                            <tr>
                                <td height="40" style=" text-align: left; font-size:23px;  font-family:'Poppins' , 'times new roman'; font-weight:300 ; color: #5b5b5b;">
                                    <?php print $recipient ?>
                                </td>
                            </tr>
                            <tr>
                                <td height="40" style=" text-align: left; font-size:23px;  font-family:'Poppins' , 'times new roman'; font-weight:300 ; color: #5b5b5b;">
                                    Who We Are?
                                </td>
                            </tr>

                            <tr>
                                <td height="13"></td>
                            </tr>

                            <tr>
                                <td>
                                    <?php print $body ?>

                                </td>
                            </tr>

                            </tbody>
                        </table>
                        <!-- End About -->
                    </td>
                </tr>
       
                <!-- End About -->
                </tbody>
            </table>
        </td>
    </tr>
    </tbody>
</table>


    <!--===== Start Footer =====-->
    <table width="100%" cellspacing="0" cellpadding="0" border="0" align="center" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;">
        <tbody>

     <!--===== Start Contact =====--> 
    <table border="0" bgcolor="f1f1f1" cellpadding="0" cellspacing="0" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;"  width="100%" align="center">
        <tbody>

          <!-- Start-->        
          <tr>
              <td>
                <table border="0" cellpadding="0" cellspacing="0" class="full" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" width="600" align="center">
                  <tbody> 

                    <tr>
                      <td height="69">
                        
                      </td>
                    </tr>

                    <!-- Start Title -->
                    <tr>
                      <td width="600" class="full" >                        
                       
                        <table class="mtitle" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="100%" align="left">
                          <tbody>

                            <tr>
                              <td height="40" style=" text-align: center; font-size:23px;  font-family:'Poppins' , 'times new roman'; font-weight:200 ; color: #5b5b5b;">
                                Contact Us
                              </td>
                            </tr>
                            

                          </tbody>
                        </table>

                      </td>
                    </tr>
                    <!-- End Title -->

                    <tr>
                      <td height="49">
                        
                      </td>
                    </tr>

                    <tr>
                      <td valign="top">

                        <table class="contact" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="192" align="left">
                          <tbody>
                            <tr>
                              <td style="text-align:center;">
                                <img width="90" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images//phone.png" alt="img" style="display:block; margin: 0 auto;" />
                              </td>
                            </tr>
                            <tr>
                              <td height="15">
                                
                              </td>
                            </tr>
                            <tr>
                              <td style="letter-spacing: 1px; font-size:15px; font-family:Poppins , arial; font-weight:300 ; line-height:11px; text-align:center; color: #5b5b5b;">
                                PHONE
                              </td>
                            </tr>
                            <tr>
                              <td height="20">
                                
                              </td>
                            </tr>
                            <tr>
                              <td style="font-size:14px; font-family:Poppins , arial; font-weight:300 ; line-height:25px; text-align:center; color: #848484;">
                                143-249-3449
                              </td>
                            </tr>
                          </tbody>
                        </table>

                          <table width="4" cellspacing="0" cellpadding="0" border="0" align="left" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" class="cont-space">
                            <tbody>
                              <tr>
                                <td height="20">
                                  <p style="padding-left: 12px; margin:0;">
                                  </p>
                                </td>
                              </tr>
                            </tbody>
                          </table>

                          <table class="contact" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="192" align="left">
                            <tbody>
                              <tr>
                                <td style="text-align:center;">
                                  <img width="90" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/address.png" alt="img" style="display:block; margin: 0 auto;" />
                                </td>
                              </tr>
                              <tr>
                                <td height="15">
                                  
                                </td>
                              </tr>
                              <tr>
                                <td style="letter-spacing: 1px; font-size:15px; font-family:Poppins , arial; font-weight:300 ; line-height:11px; text-align:center; color: #5b5b5b;">
                                  ADDRESS
                                </td>
                              </tr>
                              <tr>
                                <td height="20">
                                  
                                </td>
                              </tr>
                              <tr>
                                <td style=" text-align: center; font-size:14px; line-height:25px;  font-family:'Poppins' , 'times new roman'; font-weight:300 ; color: #848484;">
                                  577 Black Oak Hollow Road Sunnyvale, CA 94089
                                </td>
                              </tr>
                            </tbody>
                          </table>

                          <table width="4" cellspacing="0" cellpadding="0" border="0" align="left" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" class="cont-space">
                            <tbody>
                              <tr>
                                <td height="20">
                                  <p style="padding-left: 12px; margin:0;">
                                  </p>
                                </td>
                              </tr>
                            </tbody>
                          </table>

                          <table class="contact" border="0" cellpadding="0" cellspacing="0" style="mso-table-lspace:0pt; mso-table-rspace:0pt; margin: 0 auto; border-collaps:collaps;" width="192" align="left">
                            <tbody>
                              <tr>
                                <td  style="text-align:center;">
                                  <img width="90" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/mail.png" alt="img" style="display:block; margin: 0 auto;" />
                                </td>
                              </tr>
                              <tr>
                                <td height="15">
                                  
                                </td>
                              </tr>
                              <tr>
                                <td style="letter-spacing: 1px; font-size:15px; font-family:Poppins , arial; font-weight:300 ; line-height:11px; text-align:center; color: #5b5b5b;">
                                 EMAIL
                                </td>
                              </tr>
                              <tr>
                                <td height="20">
                                  
                                </td>
                              </tr>
                              <tr>
                                <td style="font-size:14px; font-family:Poppins , arial; font-weight:300 ; line-height:25px; text-align:center; color: #848484;">
                                  hello[at]emails.com
                                </td>
                              </tr>
                            </tbody>
                          </table>

                      </td>
                    </tr>

                    <tr>
                      <td height="80">
                        
                      </td>
                    </tr>



                  </tbody>
                </table>
              </td>
          </tr>  
          <!--End--> 

        </tbody>
    </table> 
    <!--===== End Contact =====-->
          <!-- Start Divider-->
          <tr>
            <td width="100%">

                <table width="600" cellspacing="0" cellpadding="0" border="0" align="center" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="full">
                    <tbody>
                      <tr>

                        <td>
                          
                          <table width="600" cellspacing="0" cellpadding="0" border="0" align="center" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="full"> 
                        
                            <tbody>

                              <tr>
                                <td height="75"></td>
                              </tr>

                              

                              <tr>
                                <td style="text-align: center; font-size:14px; font-family:'Poppins' , arial; font-weight:300 ; line-height:25px; color: #848484;">
                                 &copy; 2015. All rights reserved.
                                </td>
                              </tr>

                              <tr>
                                <td height="10"></td>
                              </tr>

                              <tr>
                                <td>

                                  <table class="fulld" width="500" align="center" cellspacing="0" cellpadding="0" border="0" style=" margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;">
                                    <tbody>
                                      <tr>
                                        <td>

                                          <table width="150" cellspacing="0" cellpadding="0" border="0" align="left" style="margin: 0 auto; margin-left: 20px;  border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="footlink">
                                            <tbody>
                                              <tr>
                                                <td style="text-align: right; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484;">
                                                  <a style="text-align: right; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484; text-decoration:none;" href="#">View in browser</a>
                                                </td>
                                              </tr>
                                            </tbody>
                                           </table>

                                          <table width="31" cellspacing="0" cellpadding="0" border="0" align="left" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="footspace">
                                            <tbody> 
                                              <tr>
                                                <td>
                                                   <table width="31" cellspacing="0" cellpadding="0" border="0" align="center" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;">
                                                      <tbody> 
                                                        <tr>
                                                           <td width="15" height="15" class="midl">
                                          
                                                            </td>
                                                            <td width="1" bgcolor="9b9b9b" height="15" class="midl">
                                                              
                                                            </td>
                                                            <td width="15" height="15" class="midl">
                                                              
                                                            </td>
                                                        </tr>
                                                      </tbody>
                                                    </table>
                                                </td>
                                               
                                               

                                              </tr>



                                            </tbody>
                                          </table>


                                          <table width="84" cellspacing="0" cellpadding="0" border="0" align="left" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="footmid">
                                            <tbody>
                                              <tr>
                                                <td style="text-align: center; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484;">
                                                  <a style="text-align: center; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484; text-decoration:none;" href="#">Unsubscribe</a>
                                                </td>
                                              </tr>
                                            </tbody>
                                           </table>

                                           <table width="31" cellspacing="0" cellpadding="0" border="0" align="left" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="footspace">
                                            <tbody> 
                                              <tr>
                                                <td>
                                                   <table width="31" cellspacing="0" cellpadding="0" border="0" align="center" style="margin: 0 auto; border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;">
                                                      <tbody> 
                                                        <tr>
                                                           <td width="15" height="15" class="midl">
                                          
                                                            </td>
                                                            <td width="1" bgcolor="9b9b9b" height="15" class="midl">
                                                              
                                                            </td>
                                                            <td width="15" height="15" class="midl">
                                                              
                                                            </td>
                                                        </tr>
                                                      </tbody>
                                                    </table>
                                                </td>
                                               
                                               

                                              </tr>



                                            </tbody>
                                           </table>


                                          <table width="150" cellspacing="0" cellpadding="0" border="0" align="left" style="margin: 0 auto; margin-right: 18px; ;border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;" class="footlink">
                                            <tbody>
                                              <tr>
                                                <td style="text-align: left; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484;">
                                                  <a style="text-align: left; font-size:15px; font-family:'Poppins' , arial; font-weight:300 ; line-height:15px; color: #848484; text-decoration:none;" href="#">Send to a friend</a>
                                                </td>
                                              </tr>
                                            </tbody>
                                           </table>

                                        </td> 
                                       
                                      </tr>
                                    </tbody>
                                  </table>
                                </td>
                              </tr>
                              <tr>
                                <td height="39"></td>
                              </tr>
                              <tr>
                                <td>
                                  <table cellspacing="0" cellpadding="0" border="0" align="center" style="border-collaps:collaps; mso-table-lspace:0pt; mso-table-rspace:0pt;">
                                    <tbody>
                                      <tr>
                                        <td width="200" class="soacial">
                                          
                                        </td>
                                        <td width="33" valign="top" style="line-height:0;">
                                            <a href="#" style="display:block; line-height:0;">
                                              <img width="33" src="http://cph.vicom-agency.de/sites/default/files/facebook.png" alt="img" style="display:block;" />
                                            </a>
                                        </td>
                                        <td width="8">
                                          
                                        </td>
                                        <td width="33" valign="top" style="line-height:0;">
                                            <a href="#" style="display:block; line-height:0;">
                                              <img width="33" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/in.png" alt="img" style="display:block;" />
                                            </a>
                                        </td>
                                         <td width="8">
                                          
                                        </td>
                                        <td width="33" valign="top" style="line-height:0;">
                                            <a href="#" style="display:block; line-height:0;">
                                              <img width="33" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/twitter.png" alt="img" style="display:block;" />
                                            </a>
                                        </td>
                                        <td width="8">
                                          
                                        </td>
                                        <td width="33" valign="top" style="line-height:0;">
                                            <a href="#" style="display:block; line-height:0;">
                                              <img width="33" src="http://cph.vicom-agency.de/sites/default/files/newsletter-images/plus.png" alt="img" style="display:block;" />
                                            </a>
                                        </td>
                                        <td width="200" class="soacial">
                                          
                                        </td>
                                      </tr>
                                    </tbody>
                                  </table>
                                </td>
                              </tr>

                              
                              <tr>
                                <td height="70" class="midl"></td>
                              </tr>
                              
                            </tbody>

                          </table>

                        </td>
                        
                      </tr>
                    </tbody>
                </table>

            </td>
          </tr>  
          <!-- end Divider-->  

        </tbody>
    </table>
    <!--===== End Footer =====-->
        
                
                
                
              
  </body>
</html>
