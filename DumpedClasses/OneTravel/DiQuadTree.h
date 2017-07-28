//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiQuadTreeNode;

@interface DiQuadTree : NSObject
{
    unsigned long long _bucketCapacity;
    DiQuadTreeNode *_root;
    struct CGRect _boundingBox;
}

+ (id)treeWithDatas:(id)arg1;
+ (id)treeWithDatas:(id)arg1 box:(struct CGRect)arg2;
+ (id)treeWithDatas:(id)arg1 box:(struct CGRect)arg2 capacity:(unsigned long long)arg3;
@property(retain, nonatomic) DiQuadTreeNode *root; // @synthesize root=_root;
@property(nonatomic) unsigned long long bucketCapacity; // @synthesize bucketCapacity=_bucketCapacity;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void).cxx_destruct;
- (id)initWithDatas:(id)arg1 capacity:(unsigned long long)arg2 box:(struct CGRect)arg3;
- (id)dataInRange:(struct CGRect)arg1;
- (void)traverseUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDataInRange:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)insertData:(id)arg1;

@end
