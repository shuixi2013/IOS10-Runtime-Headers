//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, PKValueAddedMerchant;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding>
{
    _Bool _didSucceed;
    PKValueAddedMerchant *_merchant;
    NSString *_identifier;
    NSString *_merchantURL;
    NSNumber *_terminalApplicationVersion;
    long long _terminalMode;
    NSDate *_transactionDate;
    long long _error;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
@property(nonatomic) long long terminalMode; // @synthesize terminalMode=_terminalMode;
@property(retain, nonatomic) NSNumber *terminalApplicationVersion; // @synthesize terminalApplicationVersion=_terminalApplicationVersion;
@property(retain, nonatomic) NSString *merchantURL; // @synthesize merchantURL=_merchantURL;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PKValueAddedMerchant *merchant; // @synthesize merchant=_merchant;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

