#pragma once

#include "classes/clientclass.h"
#include "classes/globalvars.h"
#include "classes/interfaceregister.h"
#include "classes/soundinfo.h"
#include "classes/usercmd.h"

#include "data/bitbuf.h"
#include "data/datatable.h"
#include "data/matrix.h"
#include "data/utlvector.h"
#include "data/vector.h"

#include "entity/clientalphaproperty.h"
#include "entity/cliententity.h"
#include "entity/clientnetworkable.h"
#include "entity/clientrenderable.h"
#include "entity/clientthinkable.h"
#include "entity/clientunknown.h"
#include "entity/collideable.h"
#include "entity/entity.h"
#include "entity/handleentity.h"
#include "entity/staticprop.h"

#include "interfaces/appsystem.h"
#include "interfaces/baseclientdll.h"
#include "interfaces/baseinterface.h"
#include "interfaces/cliententitylist.h"
#include "interfaces/clientmode.h"
#include "interfaces/convar.h"
#include "interfaces/debugoverlay.h"
#include "interfaces/effects.h"
#include "interfaces/engineclient.h"
#include "interfaces/engineconvar.h"
#include "interfaces/enginetraceclient.h"
#include "interfaces/enginevgui.h"
#include "interfaces/gameeventmanager.h"
#include "interfaces/gametypes.h"
#include "interfaces/glowobjectmanager.h"
#include "interfaces/hud.h"
#include "interfaces/localize.h"
#include "interfaces/material.h"
#include "interfaces/materialsystem.h"
#include "interfaces/modelinfo.h"
#include "interfaces/modelrender.h"
#include "interfaces/netchannel.h"
#include "interfaces/panel.h"
#include "interfaces/spatialquery.h"
#include "interfaces/staticpropmgr.h"
#include "interfaces/steamapi.h"
#include "interfaces/studiorender.h"
#include "interfaces/surface.h"
#include "interfaces/texture.h"
#include "interfaces/viewrenderbeams.h"
#include "interfaces/weaponsystem.h"
