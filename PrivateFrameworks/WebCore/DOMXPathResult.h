//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMNode, NSString;

@interface DOMXPathResult : DOMObject
{
}

- (id)snapshotItem:(unsigned int)arg1;
- (id)iterateNext;
@property(readonly) unsigned int snapshotLength;
@property(readonly) _Bool invalidIteratorState;
@property(readonly) DOMNode *singleNodeValue;
@property(readonly) _Bool booleanValue;
@property(readonly, copy) NSString *stringValue;
@property(readonly) double numberValue;
@property(readonly) unsigned short resultType;
- (void)dealloc;

@end

