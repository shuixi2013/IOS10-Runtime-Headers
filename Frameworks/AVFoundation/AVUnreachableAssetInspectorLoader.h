//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspectorLoader.h>

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader
{
    int _figError;
    NSDictionary *_figErrorUserInfo;
}

- (Class)_classForTrackInspectors;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithFigError:(int)arg1 userInfo:(id)arg2;

@end

