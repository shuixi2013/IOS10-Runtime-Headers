//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManager.h>

#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>
{
}

- (void)_textValueChanged:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (void)layoutSubviewsOfCell:(id)arg1;
- (id)defaultTextLabelFontForCell:(id)arg1;
- (double)defaultTextFieldFontSizeForCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

