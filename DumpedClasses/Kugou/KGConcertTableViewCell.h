//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class ConcertCityInfoModel, KGThemeLabel, UIImageView;

@interface KGConcertTableViewCell : MusicBaseCell
{
    _Bool _hiddenStatus;
    ConcertCityInfoModel *_info;
    UIImageView *_posterImageView;
    KGThemeLabel *_itemNameLable;
    KGThemeLabel *_timeLable;
    KGThemeLabel *_addressLable;
    KGThemeLabel *_priceLable;
    UIImageView *_statusImageView;
}

@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) KGThemeLabel *priceLable; // @synthesize priceLable=_priceLable;
@property(retain, nonatomic) KGThemeLabel *addressLable; // @synthesize addressLable=_addressLable;
@property(retain, nonatomic) KGThemeLabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) KGThemeLabel *itemNameLable; // @synthesize itemNameLable=_itemNameLable;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(nonatomic) _Bool hiddenStatus; // @synthesize hiddenStatus=_hiddenStatus;
@property(retain, nonatomic) ConcertCityInfoModel *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)pChangeSkinNot:(id)arg1;

@end
