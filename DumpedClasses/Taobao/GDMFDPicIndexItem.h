//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImageView, UIView;

@interface GDMFDPicIndexItem : NSObject
{
    _Bool _isDownLoaded;
    UIImageView *_imageView;
    UIView *_placeHolderView;
    NSString *_picUrl;
}

+ (id)itemWithImageView:(id)arg1 holderView:(id)arg2 picUrl:(id)arg3;
@property _Bool isDownLoaded; // @synthesize isDownLoaded=_isDownLoaded;
@property(retain) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property __weak UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)undo;
- (void)trigger;

@end

