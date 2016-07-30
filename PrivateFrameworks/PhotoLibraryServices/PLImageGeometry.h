//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@interface PLImageGeometry : NSObject <NSCopying>
{
    long long _appliedOrientation;
    struct CGRect _inputRect;
}

+ (id)geometryWithOutputSize:(struct CGSize)arg1 appliedOrientation:(long long)arg2;
+ (id)geometryWithInputSize:(struct CGSize)arg1 initialOrientation:(long long)arg2;
@property(nonatomic) long long appliedOrientation; // @synthesize appliedOrientation=_appliedOrientation;
@property(readonly, nonatomic) struct CGRect inputRect; // @synthesize inputRect=_inputRect;
- (id)description;
- (struct CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (struct CGAffineTransform)transformFromOrientation:(long long)arg1;
- (struct CGAffineTransform)transformToOrientation:(long long)arg1;
- (struct CGRect)_basisRect:(long long)arg1;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)denormalizeRect:(struct CGRect)arg1 basis:(long long)arg2;
- (struct CGRect)outputRectForInputRect:(struct CGRect)arg1;
- (struct CGRect)inputRectForOutputRect:(struct CGRect)arg1;
- (void)applyOrientation:(long long)arg1;
- (void)rotateCounterClockwise;
- (void)rotateClockwise;
- (void)flipHorizontally;
- (void)flipVertically;
@property(readonly, nonatomic, getter=isMirrored) _Bool mirrored;
@property(readonly, nonatomic, getter=isSizeInverted) _Bool sizeInverted;
@property(readonly, nonatomic) struct CGAffineTransform appliedTransform;
@property(readonly, nonatomic) struct CGRect outputRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputSize:(struct CGSize)arg1;
- (id)init;

@end

