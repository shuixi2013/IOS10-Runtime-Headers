//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNKeyDescriptor-Protocol.h>

@class NSSet, NSString;

@protocol CNKeyDescriptor_Private <CNKeyDescriptor>
- (void)_cn_executeGetterForRepresentedKeys:(id (^)(NSString *))arg1;

@optional
- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
- (NSSet *)_cn_requiredKeys;
@end

