//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentCellProtocol.h"

@class NSString, UIButton;

@interface FMDetailTagComponentView : UIView <FMComponentCellProtocol>
{
    UIButton *_tagButton;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIButton *tagButton; // @synthesize tagButton=_tagButton;
- (void).cxx_destruct;
- (void)tagBtnClicked:(id)arg1;
- (void)bindComponent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

