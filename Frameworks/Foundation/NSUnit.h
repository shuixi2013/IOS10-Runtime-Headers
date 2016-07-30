//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_symbol;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *symbol; // @synthesize symbol=_symbol;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSymbol:(id)arg1;

@end

