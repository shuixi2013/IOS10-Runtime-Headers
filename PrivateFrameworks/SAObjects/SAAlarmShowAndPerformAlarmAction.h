//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SAAlarmAlarmAction;

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand
{
}

+ (id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showAndPerformAlarmAction;
- (_Bool)requiresResponse;
@property(retain, nonatomic) id <SAAlarmAlarmAction> alarmAction;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

