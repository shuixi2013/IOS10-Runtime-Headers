//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoHintBehavior : ISBehavior
{
    _Bool __didFinishPreparing;
    _Bool __preparing;
    float _prerollRate;
    CDStruct_1b6d18a9 _seekTime;
}

@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool _preparing; // @synthesize _preparing=__preparing;
@property(nonatomic, setter=_setDidFinishPreparing:) _Bool _didFinishPreparing; // @synthesize _didFinishPreparing=__didFinishPreparing;
@property(readonly, nonatomic) float prerollRate; // @synthesize prerollRate=_prerollRate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
- (void)_handleDidFinishPreparing;
- (void)_handleDidPreroll;
- (void)_preroll;
- (void)_handleDidSeekToBeginning;
- (void)_seekToBeginning;
- (void)_prepareIfNeeded;
- (void)hintWithProgress:(float)arg1;
- (void)activeDidChange;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(CDStruct_1b6d18a9)arg2 prerollRate:(float)arg3;

@end

