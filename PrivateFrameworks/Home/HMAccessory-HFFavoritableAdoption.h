//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFFavoritable-Protocol.h>

@class NSString;

@interface HMAccessory (HFFavoritableAdoption) <HFFavoritable>
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

