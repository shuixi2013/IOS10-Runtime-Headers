//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDGLShaderQualifier.h>

__attribute__((visibility("hidden")))
@interface TSDGLShaderQualifierPoint4D : TSDGLShaderQualifier
{
    CDStruct_f2e236b6 _GLPoint4DValue;
    CDStruct_f2e236b6 _proposedGLPoint4DValue;
}

@property(nonatomic) CDStruct_818bb265 proposedGLPoint4DValue; // @synthesize proposedGLPoint4DValue=_proposedGLPoint4DValue;
@property(readonly, nonatomic) CDStruct_818bb265 GLPoint4DValue; // @synthesize GLPoint4DValue=_GLPoint4DValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

