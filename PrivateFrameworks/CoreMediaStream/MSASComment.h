//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MSASComment : NSObject
{
    _Bool _isLike;
    _Bool _isCaption;
    _Bool _isBatchComment;
    _Bool _isDeletable;
    _Bool _isMine;
    int _ID;
    NSString *_GUID;
    NSDate *_timestamp;
    NSDate *_clientTimestamp;
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_email;
    NSString *_content;
}

+ (_Bool)supportsSecureCoding;
+ (id)comment;
+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) _Bool isBatchComment; // @synthesize isBatchComment=_isBatchComment;
@property(nonatomic) _Bool isCaption; // @synthesize isCaption=_isCaption;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSDate *clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

