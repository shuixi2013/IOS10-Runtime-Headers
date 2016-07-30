//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject
{
    PHPerson *_person;
    CNContact *_contact;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
}

@property(readonly) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) NSAttributedString *title; // @synthesize title=_title;
@property(readonly) CNContact *contact; // @synthesize contact=_contact;
@property(readonly) PHPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 searchPrefix:(id)arg2;
- (id)initWithPerson:(id)arg1 searchPrefix:(id)arg2;

@end

