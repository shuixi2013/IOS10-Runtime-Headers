//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSAppendable-Protocol.h>

@class NSMutableString, NSString;

@interface ICSStringWriter : NSObject <ICSAppendable>
{
    NSMutableString *_result;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)mutableResult;
- (id)result;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

