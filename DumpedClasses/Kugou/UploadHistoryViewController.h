//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGScrollManagerViewController.h"

#import "UploadStateChangeDeleagte.h"

@class NSString, UIButton, UIImageView, UIView;

@interface UploadHistoryViewController : KGScrollManagerViewController <UploadStateChangeDeleagte>
{
    UIView *_uploadBarView;
    UIImageView *_uploadBGImageView;
    UIButton *_uploadButton;
}

@property(retain, nonatomic) UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) UIImageView *uploadBGImageView; // @synthesize uploadBGImageView=_uploadBGImageView;
@property(retain, nonatomic) UIView *uploadBarView; // @synthesize uploadBarView=_uploadBarView;
- (void).cxx_destruct;
- (void)uploadNewUgcInfoWithInfoId:(id)arg1 andType:(unsigned long long)arg2;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;
- (void)chooseType:(unsigned long long)arg1;
- (_Bool)checkLimitedOfType:(unsigned long long)arg1;
- (void)uploadBtnClicked;
- (void)changeSkinNot:(id)arg1;
- (void)didSelectTabItemIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

