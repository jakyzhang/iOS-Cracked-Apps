//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OnlineCharpterResponse, QRChapterDownloadRequest, QRChapterDownloader;

@protocol QRChapterDownloaderDelegate <NSObject>
- (void)chapterDownloadFailed:(QRChapterDownloader *)arg1 request:(QRChapterDownloadRequest *)arg2 message:(NSString *)arg3;
- (void)chapterDownloadFinished:(QRChapterDownloader *)arg1 request:(QRChapterDownloadRequest *)arg2 response:(OnlineCharpterResponse *)arg3;
@end
