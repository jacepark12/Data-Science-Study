import tensorflow as tf

sess = tf.Session()

a = tf.constant(2)
b = tf.constant(3)

#c 도 operation
c = a+b
print(c)
print(sess.run(c))
