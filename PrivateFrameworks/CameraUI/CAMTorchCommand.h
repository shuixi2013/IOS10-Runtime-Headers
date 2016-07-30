//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTorchCommand : CAMCaptureCommand
{
    float __level;
    long long __torchMode;
}

@property(readonly, nonatomic) float _level; // @synthesize _level=__level;
@property(readonly, nonatomic) long long _torchMode; // @synthesize _torchMode=__torchMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTorchLevel:(float)arg1;
- (id)initWithTorchMode:(long long)arg1;

@end

