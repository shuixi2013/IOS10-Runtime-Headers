//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCModifyNotificationsForChannelsCommand : FCCommand
{
    NSArray *_channelIDsToAdd;
    NSArray *_paidChannelIDsToAdd;
    NSArray *_channelIDsToRemove;
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_storefrontID;
}

@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSArray *channelIDsToRemove; // @synthesize channelIDsToRemove=_channelIDsToRemove;
@property(copy, nonatomic) NSArray *paidChannelIDsToAdd; // @synthesize paidChannelIDsToAdd=_paidChannelIDsToAdd;
@property(copy, nonatomic) NSArray *channelIDsToAdd; // @synthesize channelIDsToAdd=_channelIDsToAdd;
- (void).cxx_destruct;
- (void)coalesceWithCommand:(id)arg1;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChannelIDsToAdd:(id)arg1 paidChannelIDsToAdd:(id)arg2 channelIDsToRemove:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6;

@end

