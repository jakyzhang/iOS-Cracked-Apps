//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GrowingLocalCircleItem : NSObject
{
    _Bool _doNotTrack;
    id <GrowingNode> _node;
    NSMutableArray *_childNodes;
}

@property(nonatomic) _Bool doNotTrack; // @synthesize doNotTrack=_doNotTrack;
@property(retain, nonatomic) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic) __weak id <GrowingNode> node; // @synthesize node=_node;
- (void).cxx_destruct;

@end
