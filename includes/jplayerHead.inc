<link type="text/css" href="./content/skins/jplayer.bluemonday/jplayer.blue.monday.css" rel="stylesheet" />
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4/jquery.min.js">
  </script>
  <script type="text/javascript" src="./js/jquery.jplayer.min.js">
  </script>
<script type="text/javascript">
    $(document).ready(function(){
      $("#jquery_jplayer_1").jPlayer({
        ready: function () {
          $(this).jPlayer("setMedia", {
            mp3: "./Music/01 Elvis Presley - Viva Las Vegas.mp3"
          });//.jPlayer("play");
        },
        swfPath: "./js",
        supplied: "mp3"
      });
    });
</script>