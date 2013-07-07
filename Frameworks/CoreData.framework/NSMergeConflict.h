/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject
{
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned int _newVersion;
    unsigned int _oldVersion;
}

@property(readonly) unsigned int oldVersionNumber; // @synthesize oldVersionNumber=_oldVersion;
@property(readonly) unsigned int newVersionNumber; // @synthesize newVersionNumber=_newVersion;
@property(readonly) NSDictionary *persistedSnapshot; // @synthesize persistedSnapshot=_snapshot3;
@property(readonly) NSDictionary *cachedSnapshot; // @synthesize cachedSnapshot=_snapshot2;
@property(readonly) NSDictionary *objectSnapshot; // @synthesize objectSnapshot=_snapshot1;
@property(readonly) NSManagedObject *sourceObject; // @synthesize sourceObject=_source;
- (id)ancestorSnapshot;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;

@end
