//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICPropertyListSerializable-Protocol.h>
#import <Notes/NSCopying-Protocol.h>
#import <Notes/NSMutableCopying-Protocol.h>

@class NSDictionary;

@interface ICSearchIndexTransactionInfo : NSObject <NSCopying, NSMutableCopying, ICPropertyListSerializable>
{
    NSDictionary *_transactionInfoDictionary;
}

+ (id)invalidTransactionID;
+ (id)completionTransactionID;
@property(copy, nonatomic) NSDictionary *transactionInfoDictionary; // @synthesize transactionInfoDictionary=_transactionInfoDictionary;
- (void).cxx_destruct;
- (_Bool)guaranteesCompletionOfTransactionInfo:(id)arg1;
- (id)transactionIDForName:(id)arg1;
@property(readonly, nonatomic) _Bool valid;
@property(readonly, nonatomic) unsigned long long count;
- (id)propertyListObjectRepresentation;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initWithTransactionInfoDictionary:(id)arg1;
- (id)init;

@end

