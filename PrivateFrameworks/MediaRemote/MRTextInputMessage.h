//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRTextInputMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) unsigned long long actionType;
- (id)initWithActionType:(unsigned long long)arg1 text:(id)arg2;

@end

