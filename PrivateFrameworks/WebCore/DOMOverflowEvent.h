//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent
{
}

- (void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(_Bool)arg2 verticalOverflow:(_Bool)arg3;
@property(readonly) _Bool verticalOverflow;
@property(readonly) _Bool horizontalOverflow;
@property(readonly) unsigned short orient;

@end

