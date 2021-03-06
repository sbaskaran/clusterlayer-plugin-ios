//
//  Common_int.h
//  Cluster Layer
//
//  Created by Nicholas Furness on 3/28/14.
//  Copyright (c) 2014 ESRI. All rights reserved.
//

#ifndef ClusterLayerSample_Common_h
#define ClusterLayerSample_Common_h

#define kClusterGridClusteringNotification @"AGSClusterGridNotification_StartClustering"

#define kClusterGridClusteredNotification @"AGSClusterGridNotification_EndClustering"
#define kClusterGridClusteredNotification_Key_FeatureCount @"itemsClustered"
#define kClusterGridClusteredNotification_Key_ClusterCount @"clusters"
#define kClusterGridClusteredNotification_Key_Duration @"duration"
#define kClusterGridClusteredNotification_Key_ZoomLevel @"zoomLevel"

#define kClusterLayerClusteringNotification @"AGSClusterLayerClusteringNotification_Progress"
#define kClusterLayerClusteringNotification_Key_Duration @"duration"
#define kClusterLayerClusteringNotification_Key_PercentComplete @"percentComplete"
#define kClusterLayerClusteringNotification_Key_FeatureCount @"featureCount"
#define kClusterLayerClusteringNotification_Key_TotalZoomLevels @"totalLevels"
#define kClusterLayerClusteringNotification_Key_ZoomLevelsClustered @"levelsComplete"

#define kClusterLayerDataLoadingNotification @"AGSCLusterLayerLoadProgressNotification"
#define kClusterLayerDataLoadingNotification_Key_PercentComplete @"percentComplete"
#define kClusterLayerDataLoadingNotification_Key_TotalRecords @"totalRecords"
#define kClusterLayerDataLoadingNotification_Key_LoadedCount @"recordsLoaded"

#define kClusterLayerDataLoadingErrorNotification @"AGSCLusterLayerLoadErrorNotification"
#define kClusterLayerDataLoadingErrorNotification_Key_Error @"error"


#define kClusterPayloadKey @"__cluster"

typedef AGSGraphic AGSClusterItem;

#endif
