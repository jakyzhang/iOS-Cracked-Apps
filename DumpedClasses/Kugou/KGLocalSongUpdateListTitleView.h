//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGThemeView.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine;

@interface KGLocalSongUpdateListTitleView : KGThemeView
{
    KGThemeButton *_checkBtn;
    KGThemeLabel *_titleLab;
    KGThemeLabel *_selectedLabel;
    KGThemeLine *_bottomLineView;
    KGThemeLabel *_allSelectLabel;
}

@property(retain, nonatomic) KGThemeLabel *allSelectLabel; // @synthesize allSelectLabel=_allSelectLabel;
@property(retain, nonatomic) KGThemeLine *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) KGThemeLabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) KGThemeLabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) KGThemeButton *checkBtn; // @synthesize checkBtn=_checkBtn;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
