//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartGrowAnimationClip.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAreaGrowAnimationClip : TSCH3DChartGrowAnimationClip
{
}

- (void)renderAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (void)p_updateClipEffectStatesForAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2 context:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (id)makeClipEffectAtIndex:(const tvec2_3b141483 *)arg1 sceneObject:(id)arg2 scene:(id)arg3;

@end

