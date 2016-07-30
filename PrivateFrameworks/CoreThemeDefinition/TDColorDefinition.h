//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class NSDate, NSNumber, TDColorName, TDThemeLook;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>
{
}

- (id)colorAsString;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSManagedObject *colorStatus; // @dynamic colorStatus;
@property(retain, nonatomic) NSDate *dateOfLastChange; // @dynamic dateOfLastChange;
@property(retain, nonatomic) TDThemeLook *look; // @dynamic look;
@property(retain, nonatomic) TDColorName *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *physicalColor; // @dynamic physicalColor;

@end

