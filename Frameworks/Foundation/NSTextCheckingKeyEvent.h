//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _layoutType;
    unsigned long long _keyboardType;
    NSString *_identifier;
    NSString *_primaryLanguage;
    unsigned long long _flags;
    double _time;
    NSString *_keys;
    NSString *_ukeys;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *charactersIgnoringModifiers;
@property(readonly, copy) NSString *characters;
@property(readonly) double timestamp;
@property(readonly) unsigned long long flags;
@property(readonly, copy) NSString *primaryLanguage;
@property(readonly, copy) NSString *keyboardLayoutIdentifier;
@property(readonly) unsigned long long keyboardType;
@property(readonly) long long keyboardLayoutType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithKeyboardType:(unsigned long long)arg1 identifier:(id)arg2 flags:(unsigned long long)arg3 timestamp:(double)arg4 characters:(id)arg5 charactersIgnoringModifiers:(id)arg6;
- (id)initWithKeyboardLayoutType:(long long)arg1 identifier:(id)arg2 flags:(unsigned long long)arg3 timestamp:(double)arg4 characters:(id)arg5 charactersIgnoringModifiers:(id)arg6;
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 flags:(unsigned long long)arg4 timestamp:(double)arg5 characters:(id)arg6 charactersIgnoringModifiers:(id)arg7;
- (id)initWithKeyboardLayoutType:(long long)arg1 keyboardType:(unsigned long long)arg2 identifier:(id)arg3 primaryLanguage:(id)arg4 flags:(unsigned long long)arg5 timestamp:(double)arg6 characters:(id)arg7 charactersIgnoringModifiers:(id)arg8;

@end

