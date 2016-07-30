//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution9Vertical : CIFilter
{
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputBias; // @synthesize inputBias;
@property(retain, nonatomic) CIVector *inputWeights; // @synthesize inputWeights;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;

@end

