//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTAlphaThemedButton, TTDiggButton;

@interface TTUGCDetailToolbarView : SSThemedView
{
    TTAlphaThemedButton *_writeCommentButton;
    TTDiggButton *_diggButton;
    TTAlphaThemedButton *_shareButton;
    SSThemedView *_separatorView;
}

@property(retain, nonatomic) SSThemedView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) TTAlphaThemedButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTDiggButton *diggButton; // @synthesize diggButton=_diggButton;
@property(retain, nonatomic) TTAlphaThemedButton *writeCommentButton; // @synthesize writeCommentButton=_writeCommentButton;
- (void).cxx_destruct;
- (void)layoutSubviewsForIPad;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

