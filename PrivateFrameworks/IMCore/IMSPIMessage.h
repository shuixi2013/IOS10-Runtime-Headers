//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMSPIHandle, NSArray, NSAttributedString, NSDate, NSString, NSURL;

@interface IMSPIMessage : NSObject
{
    NSString *_guid;
    NSArray *_chatGuids;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_subject;
    NSArray *_recipients;
    NSDate *_date;
    NSDate *_dateRead;
    NSDate *_lastReadDate;
    IMSPIHandle *_sender;
    long long _messageID;
    _Bool _isOutgoing;
    _Bool _isRead;
    _Bool _isAudioMessage;
    NSString *_groupID;
    NSString *_displayName;
}

@property(retain) NSDate *lastReadDate; // @synthesize lastReadDate=_lastReadDate;
@property(retain) NSDate *dateRead; // @synthesize dateRead=_dateRead;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain) NSArray *chatGuids; // @synthesize chatGuids=_chatGuids;
@property _Bool isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *subject; // @synthesize subject=_subject;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) IMSPIHandle *sender; // @synthesize sender=_sender;
@property(retain) NSString *text; // @synthesize text=_text;
@property _Bool isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property _Bool isRead; // @synthesize isRead=_isRead;
@property(retain) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property long long messageID; // @synthesize messageID=_messageID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
@property(readonly) NSURL *url;
- (id)description;
- (void)dealloc;

@end

