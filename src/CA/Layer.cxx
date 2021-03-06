// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.
///
/// \file Layer.cxx
/// \brief 
///

#include "ITSReconstruction/CA/Layer.h"

#include "ITSReconstruction/CA/Constants.h"

namespace o2
{
namespace ITS
{
namespace CA
{

Layer::Layer()
    : mLayerIndex { Constants::ITS::UnusedIndex }
{
  //Nothing to do
}

Layer::Layer(const int layerIndex)
    : mLayerIndex { layerIndex }
{
  //Nothing to do
}

void Layer::addCluster(const int clusterId, const float xCoordinate, const float yCoordinate, const float zCoordinate,
    const float alphaAngle, const int monteCarlo)
{
  mClusters.emplace_back(clusterId, mLayerIndex, xCoordinate, yCoordinate, zCoordinate, alphaAngle, monteCarlo);
}

}
}
}
