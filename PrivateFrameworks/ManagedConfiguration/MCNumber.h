//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding>
{
    NSNumber *_number;
}

+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithInt:(int)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
@property(retain, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;

@end

