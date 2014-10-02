//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCHChartFeature;

__attribute__((visibility("hidden")))
@interface TSCHChartType : NSObject
{
    TSCHChartFeature *mFeature;
}

+ (float)sageDepthFactorForExportingChartInfo:(id)arg1;
+ (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)allChartTypes;
+ (id)multiDataBubbleChart;
+ (id)multiDataScatterChart;
+ (id)multiDataBarChart;
+ (id)multiDataColumnChart;
+ (id)stackedBarChart3D;
+ (id)barChart3D;
+ (id)stackedColumnChart3D;
+ (id)pieChart3D;
+ (id)stackedAreaChart3D;
+ (id)areaChart3D;
+ (id)lineChart3D;
+ (id)columnChart3D;
+ (id)bubbleChart;
+ (id)twoYAxisChart;
+ (id)mixedChart;
+ (id)stackedAreaChart;
+ (id)stackedColumnChart;
+ (id)stackedBarChart;
+ (id)scatterChart;
+ (id)areaChart;
+ (id)lineChart;
+ (id)columnChart;
+ (id)barChart;
+ (id)pieChart;
- (id)p_debugDescription;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (BOOL)supportsIncrementalResize;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsSharedAndSeparateX;
- (id)allCDESectionLabels;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)isMultiData;
- (BOOL)supportsMoreThanOneLiveCategory;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)isPie;
- (BOOL)isHorizontal;
- (BOOL)supportsCategoryAxisPlotToEdgesOption;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsCategoryAxisSeriesNames;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsTickmarks;
- (BOOL)supportsAxisLine;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsValueAxisLabelsPosition;
- (BOOL)supportsMultipleValueScales;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsElementChunking;
- (int)stackingSignRule;
- (BOOL)supportsSymbolOverhang;
- (id)supportedAxisScales;
- (BOOL)supportsPercentNumberFormatting;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBarsScatterX;
- (BOOL)supportsErrorBars;
- (BOOL)supportsTrendLines;
- (BOOL)supportsReverseChunking;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsEditing;
- (BOOL)supportsValueLabels;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsShadowOffset;
- (BOOL)drawValueLabelsForZero;
- (BOOL)requiresAxisOrdinal;
- (BOOL)requiresSeparateLabelsRenderPass;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)reverseSingleColumnLegendOrder;
- (id)defaultDataFileName;
- (unsigned int)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (BOOL)supportsEditingForAxisID:(id)arg1;
- (id)categoryAxisIDs;
- (id)valueAxisIDs;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsBorderFrame;
- (Class)presetImagerClass;
- (id)supportedSeriesTypes;
- (Class)sageGeometeryHelperClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)defaultSeriesType:(unsigned int)arg1;
- (id)userInterfaceName;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (struct CGSize)minimumChartBodySize;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (BOOL)explosionAffectsChartBodyBounds;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg1;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(float)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6;
- (int)chartBodyBoundsDefinition;
- (BOOL)supportsCategoryAxisLabels;
- (unsigned int)presentationDimension;
- (id)otherDimensionChartType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFeatureClass:(Class)arg1;
- (id)init;
- (id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned int)arg4;
- (id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (id)linearTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (float)categoryAxisTitleRotation;
- (float)valueAxisTitleRotation;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (float)rotation3DMaxY;
- (float)rotation3DMinY;
- (float)rotation3DMaxX;
- (float)rotation3DMinX;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (struct CGSize)mungeBodySize:(struct CGSize)arg1;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)g_genericToSpecificPropertyMapTwoAxis;
- (id)g_genericToSpecificPropertyMapMixed;
- (id)g_genericToSpecificPropertyMapStackedArea;
- (id)g_genericToSpecificPropertyMapStackedBar;
- (id)g_genericToSpecificPropertyMapStackedColumn;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)g_genericToSpecificPropertyMapLine;
- (id)g_genericToSpecificPropertyMapArea;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)g_genericToSpecificPropertyMapBar;
- (id)g_genericToSpecificPropertyMapPie;

@end
