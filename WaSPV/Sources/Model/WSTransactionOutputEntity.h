//
//  WSTransactionOutputEntity.h
//  WaSPV
//
//  Created by Davide De Rosa on 16/07/14.
//  Copyright (c) 2014 Davide De Rosa. All rights reserved.
//
//  http://github.com/keeshux
//  http://twitter.com/keeshux
//  http://davidederosa.com
//
//  This file is part of WaSPV.
//
//  WaSPV is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  WaSPV is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with WaSPV.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "WSTransactionOutput.h"

@class WSTransactionEntity;
@class WSTransactionInputEntity;

@interface WSTransactionOutputEntity : NSManagedObject

@property (nonatomic, retain) NSNumber * value;
@property (nonatomic, retain) NSData * scriptData;
@property (nonatomic, retain) WSTransactionEntity *transaction;

- (void)copyFromOutput:(WSTransactionOutput *)output;
- (WSTransactionOutput *)toOutput;

@end