<?php 
class DB_Api extends DB_Sql {
    var $Host     = "";
    var $Database = "";
    var $User     = "";
    var $Password = "";
    var $charset  = "utf8";
}

// Replace your own AES 256 Encryption key
$_CONFIG["aes_enc_key"] = "Your AES 256 Key";

// Replace your own AES 256 Encryption key (used by client app to encrypt data, differs from above key)
$_CONFIG["aes_enc_client_key"]="Your Client AES 256 Encrytion key";

// Replace with your own salt to encrypt data 
$_CONFIG["crypto_provider_salt"] = "Your Encryption Salt";

?>