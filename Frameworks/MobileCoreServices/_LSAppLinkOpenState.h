//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _LSAppLinkOpenState : NSObject <NSSecureCoding>
{
    _Bool _openStrategyChanged;
    NSURL *_URL;
    NSString *_bundleIdentifier;
    NSDictionary *_browserState;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *browserState; // @synthesize browserState=_browserState;
@property _Bool openStrategyChanged; // @synthesize openStrategyChanged=_openStrategyChanged;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
@property(readonly) NSData *dataRepresentation; // @dynamic dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (_Bool)validate;
- (void)dealloc;

@end

