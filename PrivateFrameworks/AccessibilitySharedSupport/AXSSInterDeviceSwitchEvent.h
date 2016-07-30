//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXSSInterDeviceSwitchEvent : NSObject
{
    _Bool _isDown;
    NSString *_switchIdentifier;
    NSString *_switchDisplayName;
    NSString *_deviceIdentifier;
    NSArray *_actions;
    NSArray *_longPressActions;
}

@property(nonatomic) _Bool isDown; // @synthesize isDown=_isDown;
@property(retain, nonatomic) NSArray *longPressActions; // @synthesize longPressActions=_longPressActions;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *switchDisplayName; // @synthesize switchDisplayName=_switchDisplayName;
@property(copy, nonatomic) NSString *switchIdentifier; // @synthesize switchIdentifier=_switchIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 longPressActions:(id)arg5 isDown:(_Bool)arg6;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 isDown:(_Bool)arg5;

@end

