//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier
{
    int _GLintValue;
    int _proposedGLintValue;
}

@property(nonatomic) int proposedGLintValue; // @synthesize proposedGLintValue=_proposedGLintValue;
@property(readonly, nonatomic) int GLintValue; // @synthesize GLintValue=_GLintValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

