//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFocusCommand : CAMCaptureCommand
{
    _Bool __shouldUseSmoothFocus;
    long long __focusMode;
    struct CGPoint __focusPointOfInterest;
}

@property(readonly, nonatomic) _Bool _shouldUseSmoothFocus; // @synthesize _shouldUseSmoothFocus=__shouldUseSmoothFocus;
@property(readonly, nonatomic) struct CGPoint _focusPointOfInterest; // @synthesize _focusPointOfInterest=__focusPointOfInterest;
@property(readonly, nonatomic) long long _focusMode; // @synthesize _focusMode=__focusMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusMode:(long long)arg1 smooth:(_Bool)arg2;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2 smooth:(_Bool)arg3;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;
- (id)initWithFocusMode:(long long)arg1;

@end

