//
//  OpenGLView.h
//  Tutorial05
//
//  Created by kesalin on 12-11-24.
//  Copyright (c) Copyright (c) 2012 年 http://blog.csdn.net/kesalin/. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
#import "GLESMath.h"

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    GLuint _frameBuffer;
    
    GLuint _programHandle;
    GLuint _positionSlot;
    GLuint _modelViewSlot;
    GLuint _projectionSlot;
    GLuint _colorSlot;
    
    KSMatrix4 _shouldModelViewMatrix;
    KSMatrix4 _elbowModelViewMatrix;
    
    KSMatrix4 _modelViewMatrix;
    KSMatrix4 _projectionMatrix;
    
    float _rotateShoulder;
    float _rotateElbow;
}

@property (nonatomic, assign) float rotateShoulder;
@property (nonatomic, assign) float rotateElbow;

- (void)render;
- (void)cleanup;

@end
