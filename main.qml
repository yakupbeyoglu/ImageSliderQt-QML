import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.0

Window {
        width: 1920     // 960 1280 1800 1920
        height: 720     // 360  480  675  720
        color: "#000000"
        visible: true
        title: qsTr("Image Slider by YakupBeyoglu")
        property string npath  : "file://home/yakup/ImageSlider/";
       function changeImage(){
               // var npath will be your directory!
               image.source = npath + ImageGallery.tpath;
       }
       property  string path : "";

       Item {

               focus:true;
               Keys.onPressed: {
                       if(event.key == Qt.Key_Right){
                                ImageGallery.keypress(1);
                               changeImage();

                       }
                        else if (event.key == Qt.Key_Left) {
                                ImageGallery.keypress(0);
                                changeImage();
                       }
               }
       }

        Image{
               id : image;
               width: 1920;
               height: 720;
               source : npath + ImageGallery.tpath;



        }


}
