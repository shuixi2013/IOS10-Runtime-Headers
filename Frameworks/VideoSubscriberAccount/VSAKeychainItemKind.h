//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface VSAKeychainItemKind : NSObject <NSCopying>
{
    NSString *_itemClassName;
    const struct __CFString *_secItemClass;
    NSArray *_properties;
}

@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) const struct __CFString *secItemClass; // @synthesize secItemClass=_secItemClass;
@property(copy, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributesByName;
- (void)dealloc;
- (id)init;

@end
