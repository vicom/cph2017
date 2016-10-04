<?php

/**
 * @file
 * Default theme implementation to format the simplenews newsletter body.
 *
 * Copy this file in your theme directory to create a custom themed body.
 * Rename it to override it. Available templates:
 *   simplenews-newsletter-body--[tid].tpl.php
 *   simplenews-newsletter-body--[view mode].tpl.php
 *   simplenews-newsletter-body--[tid]--[view mode].tpl.php
 * See README.txt for more details.
 *
 * Available variables:
 * - $build: Array as expected by render()
 * - $build['#node']: The $node object
 * - $title: Node title
 * - $language: Language code
 * - $view_mode: Active view mode
 * - $simplenews_theme: Contains the path to the configured mail theme.
 * - $simplenews_subscriber: The subscriber for which the newsletter is built.
 *   Note that depending on the used caching strategy, the generated body might
 *   be used for multiple subscribers. If you created personalized newsletters
 *   and can't use tokens for that, make sure to disable caching or write a
 *   custom caching strategy implemention.
 *
 * @see template_preprocess_simplenews_newsletter_body()
 */
?>


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
                    <h2><?php print $title; ?></h2>
                    <?php print render($build); ?>
                    -------
                    <?php print views_embed_view('newsletter','block', $node->nid); ?>

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


