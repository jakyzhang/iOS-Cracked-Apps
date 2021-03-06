//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeImageView, KGThemeLabel, TopicInfo, UIImageView, UILabel;

@interface RecommendTopicCell : MusicBaseCell
{
    UIImageView *_imageView;
    KGThemeLabel *_nameLabel;
    KGThemeLabel *_publishTimeLabel;
    KGThemeImageView *_timeImgView;
    KGThemeImageView *_arrowImgView;
    UIImageView *_coverShadowImageView;
    TopicInfo *_topic;
}

@property(retain, nonatomic) TopicInfo *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)coverShadowImage;
- (void)makeShadow;
- (void)viewInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

