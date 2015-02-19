//
//  NSObject+Compartilhamento.h
//  ObjC-01
//
//  Created by Rafael on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import "News.h"
#import <Foundation/Foundation.h>

@interface NSObject (Compartilhamento)

{
    
}
//testestes
@property (nonatomic)News  *NewsShared;
@property (nonatomic)NSString *tipoCompartilhamento;

-(BOOL) shareNews: (News *) NewsShared
                 : (NSString *) socialNetworkType;
-(BOOL) chamarFacebook;
-(BOOL) chamarTwitter;
-(BOOL) chamarWhatswapp;

@end
