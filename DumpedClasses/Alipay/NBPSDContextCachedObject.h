//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PSDScene;

@interface NBPSDContextCachedObject : NSObject
{
    PSDScene *_currentScene;
    id <PSDEventTargetProtocol> _eventTarget;
    NSArray *_eventTargetList;
}

@property(nonatomic) __weak NSArray *eventTargetList; // @synthesize eventTargetList=_eventTargetList;
@property(nonatomic) __weak id <PSDEventTargetProtocol> eventTarget; // @synthesize eventTarget=_eventTarget;
@property(nonatomic) __weak PSDScene *currentScene; // @synthesize currentScene=_currentScene;
- (void).cxx_destruct;

@end

