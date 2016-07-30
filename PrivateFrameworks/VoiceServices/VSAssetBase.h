//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface VSAssetBase : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSNumber *_compatibilityVersion;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(copy, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy, nonatomic) NSNumber *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

