//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, NSArray;

@protocol INSearchForMessagesIntent <NSObject, JSExport>
@property(copy, nonatomic) NSArray *groupNames;
@property(copy, nonatomic) NSArray *notificationIdentifiers;
@property(copy, nonatomic) NSArray *identifiers;
@property(copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property(nonatomic) unsigned long long attributes;
@property(copy, nonatomic) NSArray *searchTerms;
@property(copy, nonatomic) NSArray *senders;
@property(copy, nonatomic) NSArray *recipients;
@end

