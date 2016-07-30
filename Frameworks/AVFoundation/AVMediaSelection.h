//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying>
{
    AVMediaSelectionInternal *_mediaSelection;
}

- (_Bool)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
@property(readonly, nonatomic) __weak AVAsset *asset;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_internal;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)propertyList;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (id)_groupDictionaries;
- (id)_selectedMediaArray;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;

@end

