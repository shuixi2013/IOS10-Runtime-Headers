//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGQPStoredUserQuery : NSObject
{
    _Bool _engaged;
    NSString *_conversationId;
    NSString *_query;
    struct SGUnixTimestamp_ _creationTimestamp;
}

+ (id)query:(id)arg1 withConversationId:(id)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3 engaged:(_Bool)arg4;
@property(readonly, nonatomic) _Bool engaged; // @synthesize engaged=_engaged;
@property(readonly, nonatomic) struct SGUnixTimestamp_ creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 conversationId:(id)arg2 creationTimestamp:(struct SGUnixTimestamp_)arg3 engaged:(_Bool)arg4;
- (id)init;

@end

