//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class NSString;

@protocol CNVCardSerializationStorage <NSObject>
- (void)insertString:(NSString *)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendString:(NSString *)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendFormat:(NSString *)arg1;
- (void)appendString:(NSString *)arg1;
@end

