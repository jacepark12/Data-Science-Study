import tensorflow as tf

x_data = [1, 2, 3]
y_data = [1, 2, 3]

W = tf.Variable(tf.random_uniform([1], -1.0, 1.0))
b = tf.Variable(tf.random_uniform([1], -1.0, 1.0))

hypothesis = W * x_data + b

#Simplified cost function
cost = tf.reduce_mean(tf.square(hypothesis - y_data))

#Minimize
a = tf.Variable(0.1) #Learning rate
optimizer = tf.train.GradientDescentOptimizer(a)
train = optimizer.minimize(cost)

init = tf.initialize_all_variables() # 변수 초기화

sess = tf.Session()
sess.run(init)

for step in range(2001):
    sess.run(train)
    if step % 20 == 0:
        print('step' , step , ' W:' , sess.run(W) , ' b: ' , sess.run(b))