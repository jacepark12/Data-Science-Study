import tensorflow as tf

# a에 임의값을 선언시에 집어넣는것이 아니라
# 모델을 session에서 run할때 값을 지정해줌
a = tf.placeholder(tf.int16)
b = tf.placeholder(tf.int16)

# Define some operations
add = tf.add(a, b)
mul = tf.mul(a, b)

# Launch the default graph
with tf.Session() as sess:
    print(sess.run(add, feed_dict={a: 2, b: 3}))
    print(sess.run(mul, feed_dict={a: 2, b: 3}))
