import tensorflow as tf

hello = tf.constant('Hello tensorflow')

#start tf session
sess = tf.Session()

print(sess.run(hello))