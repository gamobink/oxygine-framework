#pragma once
#include "oxygine-include.h"
#include "Sprite.h"

namespace oxygine
{
    DECLARE_SMART(ColorRectSprite, spColorRectSprite);

    class ColorRectSprite: public Sprite
    {
        INHERITED(Sprite);
    public:
        DECLARE_COPYCLONE_NEW(ColorRectSprite);
        ColorRectSprite();
        ~ColorRectSprite();

        void serialize(serializedata* data);
        void deserialize(const deserializedata* data);

        void doRender(const RenderState& rs);
    };
}

EDITOR_INCLUDE(ColorRectSprite);