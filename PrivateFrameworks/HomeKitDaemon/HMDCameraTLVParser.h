//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HMDCameraTLVParser : NSObject
{
    NSData *_tlvData;
}

+ (id)parserWithData:(id)arg1;
- (void).cxx_destruct;
- (id)parseResponseForArray:(unsigned long long)arg1;
- (id)parseResponseForUUID:(unsigned long long)arg1;
- (id)parseResponseForString:(unsigned long long)arg1;
- (id)parseResponseForNumber:(unsigned long long)arg1;
- (id)parseResponseForData:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;

@end

