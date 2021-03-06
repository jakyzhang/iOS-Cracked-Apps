//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DMMapNavigationDelegate.h"
#import "DMMapViewDelegate.h"

@class CADisplayLink, DMAnnotationOverlay, DMDiDiBubbleOverlay, DMMapView, DMUserLocationView, DiAnnotationView, DiRouteGuidanceOverlay, DiRouteNavigationDataManager, DiRouteNavigationHandler, DiRouteOverlayGroup, DiRouteSearchDataManager, DiUserLocation, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, UIAlertView, UILabel;

@interface DiMapView : UIView <DMMapViewDelegate, DMMapNavigationDelegate>
{
    DiAnnotationView *_longPressPointView;
    char groupIndexArray[100];
    _Bool _longPressedEnabled;
    _Bool _showsUserLocation;
    _Bool _userLocationVisible;
    _Bool _showsCompass;
    _Bool _zoomEnabled;
    _Bool _scrollEnabled;
    _Bool _isDebug;
    _Bool _showTraffic;
    _Bool _show3D;
    _Bool _isDidiChengke;
    _Bool _isWalkNavigation;
    _Bool _isLightNavigating;
    _Bool _forbidRecaculate;
    _Bool _keepCallout;
    _Bool _keepBubble;
    _Bool _convertRouteGuidanceDistance;
    _Bool _rotateEnabled;
    _Bool _bViewAppear;
    int _customCenterOffsetY;
    id <DiMapViewDelegate> _delegate;
    id <DiMapNavigationDelegate> _navDelegate;
    unsigned long long _mapType;
    long long _zoomLevel;
    NSArray *_annotations;
    DiUserLocation *_userLocation;
    long long _userTrackingMode;
    long long _uiMode;
    UIAlertView *_routeNavigationAlertView;
    long long _mapNaviShowMode;
    DiRouteOverlayGroup *_diRouteOverlayGroup;
    NSString *_apolloArgs;
    NSString *_customUserLocationImage;
    NSString *_customUserLocationImageNav;
    NSString *_customUserLocationImageNavWeak;
    unsigned long long _naviStyleSwitchMode;
    long long _lineWidth;
    long long _mapLanguage;
    DMMapView *_baseMapView;
    UIView *_loicview;
    CADisplayLink *_displayLink;
    DiUserLocation *_curUserLocation;
    NSMutableArray *_annotationArray;
    NSMutableArray *_overlayArray;
    NSMutableArray *_overlayViewArray;
    NSDate *_naviStartTime;
    DiRouteNavigationHandler *_routeNavigationViewController;
    DMDiDiBubbleOverlay *_bubbleOverlay;
    DMAnnotationOverlay *_annotationOverlay;
    DiRouteGuidanceOverlay *_routeGuidanceOverlay;
    DiRouteNavigationDataManager *_routeNavigationDataManager;
    DiRouteSearchDataManager *_routeSearchDataManager;
    UILabel *_checkLabel;
    NSMutableArray *_textAnnotationArray;
    long long _lastScale;
    NSDictionary *_dictAnnotations;
    CDStruct_02837cd9 _visibleMapRect;
    CDStruct_b7cb895d _region;
    struct UIEdgeInsets _edgePaddingFor2DNorthOverView;
}

+ (id)cityBoundsMgr;
+ (id)getRouteResult:(id)arg1;
+ (struct CLLocationCoordinate2D)coordinateOffset:(struct CLLocationCoordinate2D)arg1;
+ (id)getCityNameFromPos:(struct CLLocationCoordinate2D)arg1;
+ (void)setExternalBundleName:(id)arg1;
+ (void)setClientType:(long long)arg1;
+ (CDStruct_02837cd9)visibleRect:(id)arg1;
@property(nonatomic) int customCenterOffsetY; // @synthesize customCenterOffsetY=_customCenterOffsetY;
@property(retain, nonatomic) NSDictionary *dictAnnotations; // @synthesize dictAnnotations=_dictAnnotations;
@property(nonatomic) long long lastScale; // @synthesize lastScale=_lastScale;
@property(retain, nonatomic) NSMutableArray *textAnnotationArray; // @synthesize textAnnotationArray=_textAnnotationArray;
@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(nonatomic) _Bool bViewAppear; // @synthesize bViewAppear=_bViewAppear;
@property(retain, nonatomic) DiRouteSearchDataManager *routeSearchDataManager; // @synthesize routeSearchDataManager=_routeSearchDataManager;
@property(retain, nonatomic) DiRouteNavigationDataManager *routeNavigationDataManager; // @synthesize routeNavigationDataManager=_routeNavigationDataManager;
@property(retain, nonatomic) DiRouteGuidanceOverlay *routeGuidanceOverlay; // @synthesize routeGuidanceOverlay=_routeGuidanceOverlay;
@property(retain, nonatomic) DMAnnotationOverlay *annotationOverlay; // @synthesize annotationOverlay=_annotationOverlay;
@property(retain, nonatomic) DMDiDiBubbleOverlay *bubbleOverlay; // @synthesize bubbleOverlay=_bubbleOverlay;
@property(retain, nonatomic) DiRouteNavigationHandler *routeNavigationViewController; // @synthesize routeNavigationViewController=_routeNavigationViewController;
@property(retain, nonatomic) NSDate *naviStartTime; // @synthesize naviStartTime=_naviStartTime;
@property(retain, nonatomic) NSMutableArray *overlayViewArray; // @synthesize overlayViewArray=_overlayViewArray;
@property(retain, nonatomic) NSMutableArray *overlayArray; // @synthesize overlayArray=_overlayArray;
@property(retain, nonatomic) NSMutableArray *annotationArray; // @synthesize annotationArray=_annotationArray;
@property(retain, nonatomic) DiUserLocation *curUserLocation; // @synthesize curUserLocation=_curUserLocation;
@property(nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *loicview; // @synthesize loicview=_loicview;
@property(retain, nonatomic) DMMapView *baseMapView; // @synthesize baseMapView=_baseMapView;
@property(nonatomic) long long mapLanguage; // @synthesize mapLanguage=_mapLanguage;
@property(nonatomic, getter=isRotateEnabled) _Bool rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic) _Bool convertRouteGuidanceDistance; // @synthesize convertRouteGuidanceDistance=_convertRouteGuidanceDistance;
@property(nonatomic) long long lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) unsigned long long naviStyleSwitchMode; // @synthesize naviStyleSwitchMode=_naviStyleSwitchMode;
@property(retain, nonatomic) NSString *customUserLocationImageNavWeak; // @synthesize customUserLocationImageNavWeak=_customUserLocationImageNavWeak;
@property(retain, nonatomic) NSString *customUserLocationImageNav; // @synthesize customUserLocationImageNav=_customUserLocationImageNav;
@property(retain, nonatomic) NSString *customUserLocationImage; // @synthesize customUserLocationImage=_customUserLocationImage;
@property(nonatomic) _Bool keepBubble; // @synthesize keepBubble=_keepBubble;
@property(nonatomic) _Bool keepCallout; // @synthesize keepCallout=_keepCallout;
@property(nonatomic) struct UIEdgeInsets edgePaddingFor2DNorthOverView; // @synthesize edgePaddingFor2DNorthOverView=_edgePaddingFor2DNorthOverView;
@property(nonatomic) _Bool forbidRecaculate; // @synthesize forbidRecaculate=_forbidRecaculate;
@property(nonatomic) _Bool isLightNavigating; // @synthesize isLightNavigating=_isLightNavigating;
@property(readonly, nonatomic) _Bool isWalkNavigation; // @synthesize isWalkNavigation=_isWalkNavigation;
@property(nonatomic) _Bool isDidiChengke; // @synthesize isDidiChengke=_isDidiChengke;
@property(nonatomic) _Bool show3D; // @synthesize show3D=_show3D;
@property(nonatomic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property(retain, nonatomic) NSString *apolloArgs; // @synthesize apolloArgs=_apolloArgs;
@property(retain, nonatomic) DiRouteOverlayGroup *diRouteOverlayGroup; // @synthesize diRouteOverlayGroup=_diRouteOverlayGroup;
@property(retain, nonatomic) UIAlertView *routeNavigationAlertView; // @synthesize routeNavigationAlertView=_routeNavigationAlertView;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic, getter=isLongPressedEnabled) _Bool longPressedEnabled; // @synthesize longPressedEnabled=_longPressedEnabled;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) id <DiMapNavigationDelegate> navDelegate; // @synthesize navDelegate=_navDelegate;
@property(nonatomic) id <DiMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentViewController;
- (_Bool)checkCurrRunMapViewIn;
- (_Bool)checkCurrRunMapView;
- (void)switchLanguage:(int)arg1;
- (long long)translateTrafficType:(id)arg1;
- (_Bool)equalGpsWithX:(double)arg1 y:(double)arg2 ex:(double)arg3 ey:(double)arg4;
- (void)refreshRouteLineRainbowWithTraffics:(id)arg1 mapPoints:(id)arg2 routeType:(int)arg3;
- (void)refreshRouteLineRainbowWithTrafficsJSON:(id)arg1 mapPoints:(id)arg2 routeType:(int)arg3;
- (CDStruct_02837cd9)getRouteLineVisibleRect:(int)arg1;
- (CDStruct_02837cd9)getRouteLineLeftVisibleRect:(int)arg1;
- (void)setLocationForNavigation:(CDStruct_c3b9c2ee *)arg1 nPointIndex:(int)arg2 pNextPoint:(CDStruct_c3b9c2ee *)arg3 nDistance:(int)arg4 nOffset:(int)arg5 nType:(int)arg6;
- (id)queryInfo;
- (void)setQueryInfo:(id)arg1;
- (void)handleRainbowRoute:(id)arg1;
- (void)handleClickAnnotaionView:(id)arg1 title:(id)arg2;
- (id)getResultImageName:(long long)arg1 index:(long long)arg2;
- (id)getResultText:(long long)arg1 index:(long long)arg2;
- (struct _DiRouteGuidanceMapPoint)getResultMapPointByType:(long long)arg1 index:(long long)arg2;
- (long long)getResultCount:(long long)arg1;
- (long long)handleAnnotation:(long long)arg1 operation:(long long)arg2;
- (long long)removeAnnotationsByKey:(id)arg1;
- (struct CLLocationCoordinate2D)getCurrMapPoint:(long long)arg1;
- (long long)getCurrMapPointCount;
- (id)getDMMapView;
- (void)setHighLightRoute:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setMapMaskColor:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 layer:(long long)arg5 curveType:(long long)arg6 animateSecond:(double)arg7;
- (void)autoAdjustTextAnnotation:(_Bool)arg1;
- (id)getImageFilePathFlag:(id)arg1;
- (int)getNavigationRouteGroupIndex;
- (void)addBezierRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 dispLevel:(int)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 dispLevel:(int)arg2;
- (void)addRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (id)calcuteBezierDefaultControlPoints:(id)arg1 orderOfBezier:(unsigned long long)arg2;
- (void)addRouteOverlayGroup:(id)arg1;
- (long long)findAvailableGroupIndex;
- (void)removeRouteOverlayGroupByIndex:(long long)arg1;
- (void)removeRouteOverlayGroup:(id)arg1;
- (void)setLineWidth:(long long)arg1 lineWidth:(double)arg2;
- (int)routeCount;
- (void)setTrafficColor:(int)arg1 yellowColor:(int)arg2 greenColor:(int)arg3 brownColor:(int)arg4;
- (void)setTrafficColor:(int)arg1 blockColor:(int)arg2 unBlockColor:(int)arg3;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 second:(float)arg3;
- (void)setMapNaviShowMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long mapNaviShowMode; // @synthesize mapNaviShowMode=_mapNaviShowMode;
- (void)mapView:(id)arg1 annotationId:(void *)arg2 animationKey:(id)arg3 didFinishAnimation:(_Bool)arg4;
- (void)updateLocationCompassImage;
@property(readonly, nonatomic) _Bool isNavigation;
- (void)setRouteDrawTexture:(id)arg1 param2:(double)arg2 routeIndex:(long long)arg3 routeGroupIndex:(long long)arg4 routeDrawType:(unsigned long long)arg5;
- (void)setRouteDrawType:(unsigned long long)arg1 routeIndex:(long long)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawCap:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (unsigned long long)getDataVersionByCityName:(id)arg1;
- (unsigned long long)getDataVersion;
- (void)willMoveToSuperview:(id)arg1;
- (void)regionDidChangeAnimated:(_Bool)arg1 gesture:(_Bool)arg2;
- (void)regionWillChangeAnimated:(_Bool)arg1 gesture:(_Bool)arg2;
- (void)mapView:(id)arg1 didChangeMapNaviShowingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapPositionChanged:(id)arg1;
- (void)mapView:(id)arg1 onClickedMapPoi:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)setMapAutoScaleMax:(int)arg1 min:(int)arg2;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (struct CLLocationCoordinate2D)coordinateOffset:(struct CLLocationCoordinate2D)arg1;
- (void)updateUserLocationDispLevel:(int)arg1;
- (void)updateAnnotationDispLevel:(id)arg1 dispLevel:(int)arg2;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 Completed:(CDUnknownBlockType)arg6;
- (void)updateAnnotation:(id)arg1 ClientX:(int)arg2 ClientY:(int)arg3 angle:(double)arg4 duration:(double)arg5 animated:(_Bool)arg6 Completed:(CDUnknownBlockType)arg7;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4 Completed:(CDUnknownBlockType)arg5;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotation:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)recalculateRouteDidFailWithErrorFinally:(id)arg1;
- (void)recalculateRouteDidFailWithError:(id)arg1;
- (void)recalculateRouteDidFinishWithResult:(id)arg1;
- (void)setAnnotationPoint:(id)arg1 mapPoint:(struct CLLocationCoordinate2D)arg2;
- (void)didChangeNaviStyle:(long long)arg1;
- (void)touchesWithOutCallout;
- (void)userTrackingModeNone;
- (void)setMapViewPort:(int)arg1 qm_Height:(int)arg2;
- (void)handleLocationTrack:(id)arg1;
- (void)handleSearchRoute:(id)arg1 end:(id)arg2;
- (void)stopTrakingModeFollowWithHeading;
- (void)startTrackingModeFollow;
- (void)startTrackingModeFollowWithHeading;
- (void)handleLongPressNotification:(id)arg1;
- (void)setRecalculateRouteDelayTime:(float)arg1;
- (void)setMaxRecalculateRouteCount:(int)arg1;
- (void)continueNavigationAfterDelay;
- (void)continueNavigation;
- (void)showNavRouteWithoutCondition;
- (void)removeRouteGuidanceOverlay;
- (void)removeRouteGuidanceGroup;
- (void)removeCameraOverlay;
- (_Bool)removeRoute;
- (void)showSearchRouteAfterCreate:(id)arg1 lineArray:(id)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (id)getRouteLineInfo;
- (void)createSearchRoute:(id)arg1;
- (void)startLightNavigationOnly;
- (void)showSearchRoute:(id)arg1 lineArray:(id)arg2;
- (void)showSearchRoute:(id)arg1 routeColor:(int)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(id)arg1 routeColor:(int)arg2;
- (void)adjustOriginalRouteid:(id)arg1;
- (void)cancelRouteNavigation;
- (void)stopNavigationForRoute:(_Bool)arg1;
- (void)stopNavigation;
- (_Bool)startNavigation:(_Bool)arg1;
- (_Bool)startNavigation;
- (void)userNavigationEnd:(_Bool)arg1;
- (void)userLocationErr:(id)arg1;
- (void)returnTTSValue:(id)arg1 voiceParam:(id)arg2;
- (void)updateDiRouteResult:(id)arg1;
- (int)navActionFromRouteGuidanceAction:(int)arg1;
- (void)didReceiveAction:(int)arg1 withObject:(id)arg2;
- (id)viewController;
- (void)touchesEndedEvent;
- (void)touchesBeganEvent;
- (void)mapView:(id)arg1 didChangeScaleAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 willChangePositionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didChangePositionAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
- (void)removeAnnotations:(id)arg1;
- (void)showRoute:(struct CLLocationCoordinate2D *)arg1 withCount:(int)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)callDidAddAnnotationViewsAfterDelayWithAnnotationViews:(id)arg1;
- (_Bool)addAnnotations:(id)arg1 animated:(_Bool)arg2;
- (_Bool)addAnnotations:(id)arg1;
- (void)callDidAddAnnotationViewAfterDelayWithAnnotationView:(id)arg1;
- (_Bool)addAnnotationNoNeedReload:(id)arg1;
- (_Bool)addAnnotation:(id)arg1 animated:(_Bool)arg2;
- (_Bool)addAnnotation:(id)arg1;
- (void)switchDayAndNightModeAuto;
- (void)switchNightMode;
- (void)switchDayMode;
- (void)checkNightMode;
@property(readonly, nonatomic) long long naviStyle;
- (void)setLocationOverlayHidden:(_Bool)arg1;
@property(readonly, nonatomic) double refreshTime;
@property(readonly, nonatomic, getter=isUserLocationAvailable) _Bool userLocationAvailable;
@property(readonly, nonatomic) NSString *currentCity;
- (double)metersPerPointForZoomLevel:(double)arg1;
- (double)metersPerPointForCurrentZoomLevel;
- (void)removeDiDiBusBubble;
- (void)changeDiDiBusBubbles:(id)arg1 hidden:(_Bool)arg2;
- (void)changeDiDiBusBubble:(id)arg1 hidden:(_Bool)arg2;
- (void)insertDiDiBusBubble:(id)arg1;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible; // @synthesize userLocationVisible=_userLocationVisible;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
@property(readonly, nonatomic) DiUserLocation *userLocation; // @synthesize userLocation=_userLocation;
- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(nonatomic) struct CGPoint anchorPointOfScale;
@property(nonatomic, getter=isStayCenteredDuringZoom) _Bool stayCenteredDuringZoom;
@property(nonatomic, getter=isPitchEnabled) _Bool pitchEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) int userLocationViewDispLevel;
@property(nonatomic) _Bool userLocationCustomCalloutViewSelected;
- (void)setUserLocationCustomCalloutViewAnchoPoint:(struct CGPoint)arg1;
- (void)setUserLocationCustomCalloutView:(id)arg1;
@property(readonly, nonatomic) DMUserLocationView *userLocationView;
@property(nonatomic) _Bool showsCompass; // @synthesize showsCompass=_showsCompass;
- (void)setUserLocationCenter;
- (void)showsUserLocation:(_Bool)arg1 withMapCenter:(_Bool)arg2;
@property(nonatomic) _Bool showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(nonatomic) _Bool hideAccuracyCircle;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect; // @synthesize visibleMapRect=_visibleMapRect;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 anchorPoint:(struct CGPoint)arg2 zoomLevel:(int)arg3 animated:(_Bool)arg4 curveType:(long long)arg5 second:(float)arg6;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 second:(float)arg5;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (_Bool)isZeroCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1;
- (long long)zoomLevelFitsRegion:(CDStruct_b7cb895d)arg1;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1;
- (long long)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
- (void)zoomOutOnPoint:(double)arg1 y:(double)arg2;
- (void)zoomInOnPoint:(double)arg1 y:(double)arg2;
- (void)zoomOut;
- (void)zoomIn;
@property(readonly, nonatomic) double mapScale;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void)setZoomLevel:(long long)arg1 animated:(_Bool)arg2;
- (void)setTraffic:(_Bool)arg1;
@property(nonatomic, getter=isDisable3DBuildingEffect) _Bool disable3DBuildingEffect;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)mapHibernate;
- (void)startAnimationTimer;
- (void)stopAnimationTimer;
- (void)animationLoop;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)setCompassYOffSet:(double)arg1;
- (void)setLogoOffSet:(struct CGPoint)arg1;
- (void)setScaleViewOffset:(struct CGPoint)arg1;
- (void)setScaleViewHidden:(_Bool)arg1;
- (_Bool)isScaleViewHidden;
- (void)setIsShowPillarIn3D:(_Bool)arg1;
- (_Bool)isShowPillarIn3D;
- (id)mapViewToUIImage;
- (void)handleShowRouteNavigation:(id)arg1;
- (void)handleLogMessage:(id)arg1;
- (void)handleNetError:(id)arg1;
- (void)handleLanguageChanged:(id)arg1;
- (void)setUpView;
- (void)commonInitWithLanguage:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mapLanguage:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupWatermark;
- (void)setDynamicChangeRouteDelegate:(id)arg1;
- (void)setTrafficColor:(unsigned int)arg1 blockColor:(unsigned int)arg2 unBlockColor:(unsigned int)arg3 extremeBlockColor:(unsigned int)arg4;
- (void)updateAnnotation:(id)arg1 mapPoint:(CDStruct_c3b9c2ee)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1;
- (_Bool)isSCTXNavigating;
- (void)setIsSCTXNavigating:(_Bool)arg1;
- (_Bool)isEraseRouteMode;
- (void)setIsEraseRouteMode:(_Bool)arg1;
- (void)setHttpsCerPath:(id)arg1;
- (void)continueTracking;
- (_Bool)isWaitingForTracking;
- (void)cancelContinueTrackingBlock;
- (void)setContinue2DTrackingBlock:(CDUnknownBlockType)arg1 afterTime:(double)arg2;
- (void)setContinue3DTrackingBlock:(CDUnknownBlockType)arg1 afterTime:(double)arg2;
- (id)innerContinueTracking;
- (void)setInnerContinueTracking:(id)arg1;
- (_Bool)isInforeGround;
@property(readonly, nonatomic) NSArray *tileOverlays;
- (void)reloadTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (void)addTileOverlay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

