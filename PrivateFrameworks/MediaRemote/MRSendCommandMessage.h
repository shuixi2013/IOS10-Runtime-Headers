//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary;

@interface MRSendCommandMessage : MRProtocolMessage
{
    NSDate *_serializationDate;
}

@property(readonly, nonatomic) NSDate *serializationDate; // @synthesize serializationDate=_serializationDate;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) unsigned int command;
- (unsigned long long)type;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;

@end

