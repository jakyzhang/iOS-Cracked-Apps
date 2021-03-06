//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "GDMapBLLDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class GDLocationEntity, GDMapBLL, KGDefaultNetErrorView, KGThemeButton, KGThemeLabel, KGThemeView, NSString, UIButton, UILabel, UITextField;

@interface CreateKuQunViewController : KGViewController <UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, GDMapBLLDelegate>
{
    KGThemeButton *_selectGroupImageBtn;
    UILabel *_changeGroupImageLabel;
    KGThemeLabel *_qunNameLabel;
    UITextField *_qunNameTextField;
    KGThemeLabel *_qunAddressLabel;
    KGThemeLabel *_selectAddressLabel;
    KGThemeButton *_selectAddressBtn;
    KGThemeLabel *_tipLabel;
    KGThemeButton *_nextBtn;
    UIButton *_notEnableNextBtn;
    KGThemeView *_contentView;
    KGDefaultNetErrorView *_errorView;
    GDMapBLL *_gdMapBll;
    GDLocationEntity *_locationEntity;
    struct CLLocationCoordinate2D _currentLocation;
}

@property(retain, nonatomic) GDLocationEntity *locationEntity; // @synthesize locationEntity=_locationEntity;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) GDMapBLL *gdMapBll; // @synthesize gdMapBll=_gdMapBll;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) KGThemeView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *notEnableNextBtn; // @synthesize notEnableNextBtn=_notEnableNextBtn;
@property(retain, nonatomic) KGThemeButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) KGThemeLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) KGThemeButton *selectAddressBtn; // @synthesize selectAddressBtn=_selectAddressBtn;
@property(retain, nonatomic) KGThemeLabel *selectAddressLabel; // @synthesize selectAddressLabel=_selectAddressLabel;
@property(retain, nonatomic) KGThemeLabel *qunAddressLabel; // @synthesize qunAddressLabel=_qunAddressLabel;
@property(retain, nonatomic) UITextField *qunNameTextField; // @synthesize qunNameTextField=_qunNameTextField;
@property(retain, nonatomic) KGThemeLabel *qunNameLabel; // @synthesize qunNameLabel=_qunNameLabel;
@property(retain, nonatomic) UILabel *changeGroupImageLabel; // @synthesize changeGroupImageLabel=_changeGroupImageLabel;
@property(retain, nonatomic) KGThemeButton *selectGroupImageBtn; // @synthesize selectGroupImageBtn=_selectGroupImageBtn;
- (void).cxx_destruct;
- (void)endAPMForLocationQuery:(id)arg1;
- (void)startAPMForLocationQuery;
- (void)GDMapBLLCallBackWithError:(id)arg1;
- (void)GDMapBLLCallBackWithLocationEntity:(id)arg1;
- (void)GDMapBLLCallBackWithLocation:(struct CLLocationCoordinate2D)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)uploadPicture:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)notEnableNextBtnFun:(id)arg1;
- (void)keepJumpToKQTagViewController;
- (void)nextBtnFun:(id)arg1;
- (void)selectAddressBtnFun:(id)arg1;
- (void)selectGroupImageBtnFun:(id)arg1;
- (void)requestAgain;
- (void)requestKQLocation;
- (void)requestKQNum;
- (void)judgeNextBtnState;
- (void)removeNotification;
- (void)addNotification;
- (id)buildLineWithFrame:(struct CGRect)arg1;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

