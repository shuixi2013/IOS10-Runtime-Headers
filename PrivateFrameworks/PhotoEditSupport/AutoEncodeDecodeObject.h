//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoEditSupport/NSCopying-Protocol.h>

@class NSArray;

@interface AutoEncodeDecodeObject : NSObject <NSCopying>
{
    NSArray *_keysToEncode;
}

@property(retain, nonatomic) NSArray *keysToEncode; // @synthesize keysToEncode=_keysToEncode;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToObject:(id)arg1;
- (id)description;
- (id)getKeysToEncode;

@end

