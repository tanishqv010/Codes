import cv2

cap = cv2.VideoCapture(file_name) # argoment = 0 to capture the video from the camera else file name
first_frame = None # first frame of the video

while cap.isOpened(): # while the camera is open
    check, frame = cap.read() # read the frame
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY) # convert to gray scale
    blur = cv2.GaussianBlur(gray, (5,5), 0) # blur the image
    if first_frame is None: # if the first frame is None, initialize it
        first_frame = gray # set the first frame to gray
        continue # continue to the next iteration
    diff = cv2.absdiff(first_frame, blur) # get the difference between the first frame and the current frame
    thresh = cv2.threshold(diff, 20, 255, cv2.THRESH_BINARY)[1] # threshold the difference
    dilated = cv2.dilate(thresh, None, iterations=3) # dilate the thresholded image
    contours, _ = cv2.findContours(dilated, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE) # find the contours

    for contour in contours: # for each contour
        (x, y, w, h) = cv2.boundingRect(contour) # get the coordinates of the rectangle
        if cv2.contourArea(contour) < 10000: # if the area of the contour is less than 900
            continue # continue to the next iteration
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0,255,0), 2) # draw the rectangle
        cv2.putText(frame, "Status: {}".format('Vibration Enlarged to Movement'), (10,20), cv2.FONT_HERSHEY_SIMPLEX, 1, (0,0,255), 3) # put the text
    # cv2.drawContours(frame, contours, -1, (0,255,0), 2) # draw the contours

    cv2.imshow("feed", frame) # show the frame

    if cv2.waitKey(40) == 27: # wait for 40 milliseconds and if the user press esc
        break # press esc to exit

    cv2.destroyAllWindows() # destroy all the windows
    cap.release() # release the camera