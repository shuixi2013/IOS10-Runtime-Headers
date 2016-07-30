//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXDisplayLinkManagerTargetAction : NSObject
{
    id _target;
    SEL _actionSelector;
    unsigned long long _displayDidRefreshCount;
}

@property(nonatomic) unsigned long long displayDidRefreshCount; // @synthesize displayDidRefreshCount=_displayDidRefreshCount;
@property(nonatomic) SEL actionSelector; // @synthesize actionSelector=_actionSelector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)displayDidRefresh:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;

@end

