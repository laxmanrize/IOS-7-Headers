/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    unsigned long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;
- (void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setMatrixIndex:(unsigned long)arg1;
- (unsigned long)matrixIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMatrixIndex:(unsigned long)arg1 color:(id)arg2;

@end

