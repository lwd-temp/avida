//
//  Types.h
//  Avida-Core
//
//  Created by Matthew Rupp on 1/23/18.
//

#ifndef Types_h
#define Types_h

#include "cString.h"
#include <vector>

class cResource;
class cNonSpatialResource;
class cSpatialResource;
class cGradientResource;
class cCellResource;


class cResourceAcct;
class cNonSpatialResourceAcct;
class cSpatialResourceAcct;
class cGradientResourceAcct;
class cCellResourceAcct;
class cResourceRegistry;

using ResID = int;
using ResName = cString;
using ResAmount = double;
using ResRate = double;
using ResDescr = cString;
using CellResAmounts = std::vector<ResAmount>;
using GlobalResAmounts = std::vector<ResAmount>;
using SpatialResAmounts = std::vector< Apto::Array<ResAmount> >;


using OwnedResources = std::vector< std::unique_ptr<cResource> >;
using Resources = std::vector< cResource* >;
using NonSpatialResources = std::vector< cNonSpatialResource* >;
using SpatialResources = std::vector< cSpatialResource* >;
using GradientResources = std::vector< cGradientResource* >;
using CellResources = std::vector< cCellResource* >;

using OwnedAccountants = std::vector< std::unique_ptr<cResourceAcct> >;
using ResourceAccts = std::vector<cResourceAcct*>;
using NonSpatialResourceAccts = std::vector<cNonSpatialResourceAcct*>;
using SpatialResourceAccts = std::vector<cSpatialResourceAcct*>;
using GradientResourceAccts = std::vector<cGradientResourceAcct*>;
using CellResourceAccts = std::vector<cCellResourceAcct*>;

using DemeResRegistry = cResourceRegistry*;
using GlobalResRegistry = cResourceRegistry*;

#endif /* Types_h */

