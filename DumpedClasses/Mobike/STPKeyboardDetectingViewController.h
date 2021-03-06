//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIScrollView, UIView;

@interface STPKeyboardDetectingViewController : UIViewController
{
    UIView *_lastResponder;
    CDUnknownBlockType _keyboardFrameBlock;
    UIScrollView *_managedScrollView;
    double _currentBottomInsetChange;
    struct CGRect _lastKeyboardFrame;
}

@property(nonatomic) double currentBottomInsetChange; // @synthesize currentBottomInsetChange=_currentBottomInsetChange;
@property(nonatomic) __weak UIScrollView *managedScrollView; // @synthesize managedScrollView=_managedScrollView;
@property(copy, nonatomic) CDUnknownBlockType keyboardFrameBlock; // @synthesize keyboardFrameBlock=_keyboardFrameBlock;
@property(nonatomic) __weak UIView *lastResponder; // @synthesize lastResponder=_lastResponder;
@property(nonatomic) struct CGRect lastKeyboardFrame; // @synthesize lastKeyboardFrame=_lastKeyboardFrame;
- (void).cxx_destruct;
- (void)doKeyboardChangeAnimationWithNewFrame:(struct CGRect)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)textFieldWillBeginEditing:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithKeyboardFrameBlock:(CDUnknownBlockType)arg1 scrollView:(id)arg2;

@end

