//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListProvider <NSObject>
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate;
- (void)reloadWithCompletion:(void (^)(NSDictionary *))arg1;
@end

