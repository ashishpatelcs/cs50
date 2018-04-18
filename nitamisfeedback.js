/* Author: Ashish Patel
 * NITA MIS Feedback auto submission
 * ContentPlaceHolder1_lvCourse_rblCourse_0_4_0
 * ContentPlaceHolder1_lvTeacher_rblTeacher_0_4_0
 * ContentPlaceHolder1_btnSubmit
 */
$(document).ready(function() { for (var i = 0; i < 11; i++) { 
  $('#ContentPlaceHolder1_lvCourse_rblCourse_'+i+'_4_'+i+'').attr('checked', true); 
  $('#ContentPlaceHolder1_lvTeacher_rblTeacher_'+i+'_4_'+i+'').attr('checked', true); 
} $('#ContentPlaceHolder1_btnSubmit').click(); });
