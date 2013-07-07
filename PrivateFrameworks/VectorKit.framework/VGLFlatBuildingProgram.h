/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLFlatBuildingProgram : VGLProgram
{
    int _uColor;
    struct _VGLColor _color;
    int _uMaxLayeringHeight;
    float _maxLayeringHeight;
    int _uLayeringHeightScale;
    float _layeringHeightScale;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float layeringHeightScale; // @synthesize layeringHeightScale=_layeringHeightScale;
@property(nonatomic) float maxLayeringHeight; // @synthesize maxLayeringHeight=_maxLayeringHeight;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
- (id).cxx_construct;
- (void)setup;

@end
