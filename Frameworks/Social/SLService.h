//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLService : NSObject
{
}

+ (id)allServices;
+ (id)serviceForServiceType:(id)arg1;
- (id)composeViewController;
- (id)activityImage;
- (id)activityTitle;
- (_Bool)supportsVideoURL:(id)arg1;
- (_Bool)supportsImageURL:(id)arg1;
- (long long)maximumVideoTimeLimit;
- (long long)maximumVideoDataSize;
- (long long)maximumVideoCount;
- (long long)maximumImageDataSize;
- (long long)maximumImageCount;
- (long long)maximumURLCount;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (id)accountType;
- (id)serviceType;
- (_Bool)isFirstClassService;
- (_Bool)hasAccounts;

@end

