//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMailboxRequest : NSObject
{
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)init;

@end

