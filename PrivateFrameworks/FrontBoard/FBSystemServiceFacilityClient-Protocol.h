//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@protocol FBSystemServiceClient;

@protocol FBSystemServiceFacilityClient <NSObject>
+ (id)facilityClientWithSystemServiceClient:(id <FBSystemServiceClient>)arg1;
@property(readonly, nonatomic) id <FBSystemServiceClient> systemServiceClient;
@end

