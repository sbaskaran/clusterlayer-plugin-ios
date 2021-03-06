//
//  AGSClusterLayerRenderer.h
//  Cluster Layer
//
//  Created by Nicholas Furness on 3/25/14.
//  Copyright (c) 2014 ESRI. All rights reserved.
//

#import <ArcGIS/ArcGIS.h>

@class AGSCluster;

// A block with this signature will be passed a cluster and is expected to return an AGSSymbol.
typedef AGSSymbol*(^AGSClusterSymbolGeneratorBlock)(AGSCluster *);

@interface AGSClusterLayerRenderer : AGSSimpleRenderer

//Initialize an AGSClusterLayerRenderer object with the provided renderer
-(id)initWithRenderer:(AGSRenderer *)originalRenderer;

//Initialize an AGSClusterLayerRenderer object with the provided renderer, cluster symbol block and coverage symbol block
-(id)initWithRenderer:(AGSRenderer *)originalRenderer
     clusterSymbolBlock:(AGSClusterSymbolGeneratorBlock)clusterSymbolGenerator   
    coverageSymbolBlock:(AGSClusterSymbolGeneratorBlock)coverageSymbolGenerator; 
	
	

@end