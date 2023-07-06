import cv2
import matplotlib.pyplot as plt
import mediapipe as mp
mp_face_mesh = mp.solutions.face_mesh
face_mesh = mp_face_mesh.FaceMesh()
image = cv2.imread('img3.jpeg')
rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
h, w, _ = image.shape
# print(h, w)
result = face_mesh.process(rgb)
# print(result)

l1 = [185, 40, 39, 37, 0, 267, 269, 270, 409, 408, 304, 303, 302, 11, 72, 73, 74, 185, 184, 191, 80, 41, 38,
      12, 268, 371, 310, 415, 408]  # upper lip
l2 = [146, 91, 181, 84, 17, 314, 405, 321, 375, 320, 404, 315, 16, 85, 180, 90, 77, 96, 89, 179, 86, 15, 316, 403,
      319, 307, 325, 324, 318, 402, 317, 14, 87, 178, 88, 95, 96, 77, 146]  # lower lip

l3 = [122, 196, 3, 51, 164, 131, 48, 64, 98, 99, 20, 44, 237, 218, 166, 59, 75, 60, 20, 242, 141, 94, 370, 462, 290,
      305, 289, 438, 457, 274, 354, 462, 328, 460, 455, 439, 344, 363, 456, 419, 351]  # nose


l4 = [55, 107, 66, 105, 63, 70, 53, 52, 65, 55]  # left eyebrow
l5 = [243, 190, 56, 28, 27, 29, 30, 247, 130, 25,
      110, 24, 23, 22, 26, 112, 243]  # left eye outer
l6 = [133, 173, 157, 158, 159, 160, 161, 246, 33, 7,
      163, 144, 145, 153, 154, 155, 133]  # left eye inner
l7 = [159, 145, 144, 160]  # left eye ball-->make sure to make it circular first

l8 = [285, 295, 282, 283, 276, 293, 334, 296, 336, 285]  # right eyebrow
l9 = [359, 467, 260, 259, 257, 258, 286, 414, 463, 341,
      256, 252, 253, 254, 339, 255, 359]  # right eye outer
l10 = [263, 466, 388, 387, 386, 385, 384, 398, 362, 382,
      381, 380, 374, 373, 390, 249, 263]  # right eye inner
l11 = [386, 374, 380, 384, 385, 386]
# right eye ball-->make sure to make it circular first

l12 = [10, 109, 67, 103, 54, 21, 162, 127, 234, 93, 132, 58, 172, 136, 150, 149, 176, 148, 152, 377, 400,
      378, 379, 365, 397, 288, 361, 323, 454, 356, 389, 251, 284, 332, 297, 338, 10]  # face

l = len(l1)
for i in range(l):
      for facial_landmarks in result.multi_face_landmarks:
            pt = facial_landmarks.landmark[l1[i]]
            x = pt.x*w
            y = pt.y*h
            print('{ x:', x, ', y:', y, '},')
            cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)
# print()


# l = len(list)
# for i in range(l):
#     for facial_landmarks in result.multi_face_landmarks:
#         pt = facial_landmarks.landmark[list[i]]
#         x = pt.x*w
#         y = pt.y*h
#         print('{ x:', x, ', y:', y, '},')
#         cv2.circle(image, (int(x), int(y)), 2, (0, 0, 0), -1)


# # def show(title='Images', image=None, size=10):
# #     w, h = image.shape[0], image.shape[1]
# #     aspect_ratio = w/h
# #     plt.figure(figsize=(size*aspect_ratio, size))
# #     plt.imshow(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))
#     plt.title(title)
#     plt.show()
# show('After face mesh', image)
