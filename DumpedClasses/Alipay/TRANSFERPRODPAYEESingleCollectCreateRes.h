//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRANSFERPRODPAYEERPCResponse.h"

@class NSString;

@interface TRANSFERPRODPAYEESingleCollectCreateRes : TRANSFERPRODPAYEERPCResponse
{
    NSString *_transferNo;
    NSString *_redirectUrl;
    NSString *_redirectText;
}

@property(retain, nonatomic) NSString *redirectText; // @synthesize redirectText=_redirectText;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *transferNo; // @synthesize transferNo=_transferNo;
- (void).cxx_destruct;

@end

