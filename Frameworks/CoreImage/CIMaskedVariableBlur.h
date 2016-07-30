//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMaskedVariableBlur : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMask;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)upCubic:(id)arg1 scale:(float)arg2;
- (id)downTwo:(id)arg1;
- (id)_kernelCombine;
- (id)_kernelD2;
- (_Bool)_isIdentity;

@end

