//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface HMFHTTPRequestInternal : NSObject
{
    NSMutableDictionary *_headerFields;
    NSURL *_URL;
    NSString *_method;
    NSData *_body;
}

@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (id)init;

@end

