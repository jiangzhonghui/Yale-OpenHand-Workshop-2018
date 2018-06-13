
(cl:in-package :asdf)

(defsystem "common_msgs_gl-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :common_msgs_gl-msg
               :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "GetBool" :depends-on ("_package_GetBool"))
    (:file "_package_GetBool" :depends-on ("_package"))
    (:file "GetBoolArray" :depends-on ("_package_GetBoolArray"))
    (:file "_package_GetBoolArray" :depends-on ("_package"))
    (:file "GetDouble" :depends-on ("_package_GetDouble"))
    (:file "_package_GetDouble" :depends-on ("_package"))
    (:file "GetDoubleArray" :depends-on ("_package_GetDoubleArray"))
    (:file "_package_GetDoubleArray" :depends-on ("_package"))
    (:file "GetInt" :depends-on ("_package_GetInt"))
    (:file "_package_GetInt" :depends-on ("_package"))
    (:file "GetString" :depends-on ("_package_GetString"))
    (:file "_package_GetString" :depends-on ("_package"))
    (:file "SendBool" :depends-on ("_package_SendBool"))
    (:file "_package_SendBool" :depends-on ("_package"))
    (:file "SendDouble" :depends-on ("_package_SendDouble"))
    (:file "_package_SendDouble" :depends-on ("_package"))
    (:file "SendDoubleArray" :depends-on ("_package_SendDoubleArray"))
    (:file "_package_SendDoubleArray" :depends-on ("_package"))
    (:file "SendDoubleArrayReceiveDouble" :depends-on ("_package_SendDoubleArrayReceiveDouble"))
    (:file "_package_SendDoubleArrayReceiveDouble" :depends-on ("_package"))
    (:file "SendDoubleArrayReceiveDoubleArray" :depends-on ("_package_SendDoubleArrayReceiveDoubleArray"))
    (:file "_package_SendDoubleArrayReceiveDoubleArray" :depends-on ("_package"))
    (:file "SendDoubleArrayReceiveInt" :depends-on ("_package_SendDoubleArrayReceiveInt"))
    (:file "_package_SendDoubleArrayReceiveInt" :depends-on ("_package"))
    (:file "SendDoubleArrayReceiveIntDouble" :depends-on ("_package_SendDoubleArrayReceiveIntDouble"))
    (:file "_package_SendDoubleArrayReceiveIntDouble" :depends-on ("_package"))
    (:file "SendInt" :depends-on ("_package_SendInt"))
    (:file "_package_SendInt" :depends-on ("_package"))
    (:file "SendIntArray" :depends-on ("_package_SendIntArray"))
    (:file "_package_SendIntArray" :depends-on ("_package"))
    (:file "SendPointArray" :depends-on ("_package_SendPointArray"))
    (:file "_package_SendPointArray" :depends-on ("_package"))
    (:file "SendString" :depends-on ("_package_SendString"))
    (:file "_package_SendString" :depends-on ("_package"))
    (:file "SetOrientation" :depends-on ("_package_SetOrientation"))
    (:file "_package_SetOrientation" :depends-on ("_package"))
    (:file "SetPose" :depends-on ("_package_SetPose"))
    (:file "_package_SetPose" :depends-on ("_package"))
    (:file "SetPosition" :depends-on ("_package_SetPosition"))
    (:file "_package_SetPosition" :depends-on ("_package"))
  ))