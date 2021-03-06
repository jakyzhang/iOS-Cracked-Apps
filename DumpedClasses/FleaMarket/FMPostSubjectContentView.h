//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"
#import "UITextViewDelegate.h"

@class FMTextView, NSString;

@interface FMPostSubjectContentView : UITableViewCell <FMComponentCellProtocol, UITextViewDelegate>
{
    FMTextView *_textView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

