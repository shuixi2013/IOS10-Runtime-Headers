//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMPerson, NSString;

@interface IMSPIHandle : NSObject
{
    NSString *_address;
    IMPerson *_person;
    int _abIdentifier;
}

@property int abIdentifier; // @synthesize abIdentifier=_abIdentifier;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) IMPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
@property(readonly) NSString *identifier;
@property(readonly) NSString *cnContactID;
@property(readonly) NSString *displayName;
- (id)description;

@end

