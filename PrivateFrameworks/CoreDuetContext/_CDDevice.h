//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSCopying-Protocol.h>
#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _identifier;
    NSString *_name;
    long long _deviceClass;
}

+ (_Bool)supportsSecureCoding;
+ (id)localDevice;
@property(nonatomic) long long deviceClass; // @synthesize deviceClass=_deviceClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3;

@end

