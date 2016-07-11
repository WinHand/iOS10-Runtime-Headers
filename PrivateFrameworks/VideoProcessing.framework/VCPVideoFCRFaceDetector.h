/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoFCRFaceDetector : VCPVideoFaceDetector {
    FCRFaceDetector * _faceDetector;
}

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

- (void).cxx_destruct;
- (int)detectFaces:(struct __CVBuffer { }*)arg1 faces:(id)arg2;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 cancel:(id /* block */)arg2;

@end