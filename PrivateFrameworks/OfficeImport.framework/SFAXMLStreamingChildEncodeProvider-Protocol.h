/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SFAXMLStreamingChildEncodeProvider <NSObject>
- (void)encodeChildrenAsChildrenOfNode:(struct _xmlNode *)arg1 handler:(id)arg2;
- (void)writeToBuffer:(struct _xmlOutputBuffer *)arg1 forNode:(struct _xmlNode *)arg2 format:(BOOL)arg3 level:(int)arg4;
@end
