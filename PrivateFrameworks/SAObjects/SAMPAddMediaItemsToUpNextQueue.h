//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand
{
}

+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToUpNextQueue;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPCollection *mediaCollection;
@property(copy, nonatomic) NSString *insertLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

