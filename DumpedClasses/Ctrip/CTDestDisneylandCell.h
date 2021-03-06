//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

@class CTDestImageView, NSString;

@interface CTDestDisneylandCell : CTDestBaseCell
{
    CDUnknownBlockType _disneylandBlock;
    CTDestImageView *_disneyIv;
    NSString *_linkUrl;
}

+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) CTDestImageView *disneyIv; // @synthesize disneyIv=_disneyIv;
@property(copy, nonatomic) CDUnknownBlockType disneylandBlock; // @synthesize disneylandBlock=_disneylandBlock;
- (void).cxx_destruct;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)disneyTapped;

@end

